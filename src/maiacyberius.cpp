/****************************************************************************
 ** This file is part of the MAIA® (Malagasy Artificial Intelligence Art) Open Project.
 **
 ** Copyright (C) 2012, 2013, 2014 ANDRIAMILAMINA Monge.
 ** All rights reserved.
 **
 ** License: GNU GENERAL PUBLIC LICENSE Version 3, 29 June 2007.
 ** Author:  ANDRIAMILAMINA Monge.
 ** Contact: mongemilamina@gmail.com / +261 34 45 062 85.
 ** Year:    2014.
 ** Status:  MAIA® Senior Engineer, Madagasikara, Antananarivo.
 ** Domain:  Automatic.
 **
 ** Commercial Usage
 ** Please contact MAIA®.
 **
 ** GNU General Public License Usage
 ** This file may be used under the terms of the GNU
 ** General Public License version 3.0 as published by the Free Software
 ** Foundation and appearing in the file LICENSE.GPL included in the
 ** packaging of this file.  Please review the following information to
 ** ensure the GNU General Public License version 3.0 requirements will be
 ** met: http://www.gnu.org/copyleft/gpl.html.
 **
 ** If you have questions regarding the use of this file, please contact
 ** the Author.
 **
 ****************************************************************************/

#include "maiacyberius.h"
#include "ui_maiacyberius.h"
#include <QMessageBox>
#include <QString>
#include <QDateTime>
#include <QInputDialog>
#include <QDir>
#include <QTextStream>
#include <QMessageBox>
#include <QEvent>
#include <QCloseEvent>
#include <QPrintDialog>
#include <QPrinter>

#include <QFile>
#include <QTextDocument>
#include <QTextCodec>

static int incr_1(0);
static int incr_2(0);
static int incr_3(0);
static int incr_4(0);
static int incr_5(0);
static int incr_6(0);
static int incr_7(0);
static int incr_8(0);
static int incr_9(0);
static int incr_10(0);

MaiaCyberius::MaiaCyberius(QWidget *parent) : QMainWindow(parent), att_ui(new Ui::MaiaCyberius)
{
    att_ui->setupUi(this);

    //#############################################################Actions
    att_ActionAboutAndHelp = new QAction(QIcon(":/qrc_icons/icons/MAIA_icon_About.png"), tr("&About"), this);
    att_ActionAboutAndHelp->setShortcut(Qt::Key_F1);

    att_ActionCurrency = new QAction(QIcon(":/qrc_icons/icons/MAIA_icon_Currency.png"), tr("&Currency"), this);
    att_ActionCurrency->setShortcut(Qt::CTRL+Qt::SHIFT+Qt::Key_C);

    att_ActionLaunchAll = new QAction(QIcon(":/qrc_icons/icons/MAIA_icon_Lauch.png"), tr("&Launch All"), this);
    att_ActionLaunchAll->setShortcut(Qt::CTRL+Qt::SHIFT+Qt::Key_L);

    att_ActionPricePerMinute = new QAction(QIcon(":/qrc_icons/icons/MAIA_icon_Ppm.png"), tr("&Price Per Minute"), this);
    att_ActionPricePerMinute->setShortcut(Qt::CTRL+Qt::SHIFT+Qt::Key_P);

    att_ActionPrintLog = new QAction(QIcon(":/qrc_icons/icons/MAIA_icon_Print.png"), tr("&Print Log"), this);
    att_ActionPrintLog->setShortcut(Qt::CTRL+Qt::Key_P);

    att_ActionQuit = new QAction(QIcon(":/qrc_icons/icons/MAIA_icon_Quit.png"), tr("&Quit"), this);
    att_ActionQuit->setShortcut(Qt::CTRL+Qt::Key_Q);

    att_ActionStopAll = new QAction(QIcon(":/qrc_icons/icons/MAIA_icon_Stop.png"), tr("&Stop All"), this);
    att_ActionStopAll->setShortcut(Qt::CTRL+Qt::SHIFT+Qt::Key_S);

    //#############################################################Menus
    att_MenuActions = new QMenu(tr("&Actions"));
    att_MenuActions->addAction(att_ActionLaunchAll);
    att_MenuActions->addAction(att_ActionStopAll);
    att_MenuActions->addAction(att_ActionPrintLog);
    att_MenuActions->addSeparator();
    att_MenuActions->addAction(att_ActionQuit);

    att_MenuSettings = new QMenu(tr("&Settings"));
    att_MenuSettings->addAction(att_ActionCurrency);
    att_MenuSettings->addAction(att_ActionPricePerMinute);

    att_MenuAboutAndHelp = new QMenu("&?");
    att_MenuAboutAndHelp->addAction(att_ActionAboutAndHelp);

    att_ui->menuBar->addMenu(att_MenuActions);
    att_ui->menuBar->addMenu(att_MenuSettings);
    att_ui->menuBar->addMenu(att_MenuAboutAndHelp);

    //###########################################
//        att_UrlLabel = new QLabel("<b><a href='https://andriamilamina.wordpress.com'>" + tr("MAIA Website") + "</a></b>", this);
//        att_UrlLabel->setToolTip(tr("Go to the MAIA website"));
//        att_UrlLabel->setOpenExternalLinks(true);

    //global timer
    att_GlobalTimer = new QTimer(this);
    att_GlobalTimer->start(900);

    //global time
    att_GlobalTime= new QTime();

    //log timer
    att_LogTimer = new QTimer(this);
    att_LogTimer->start(30000);//log period 30s

    //Timers
    att_Timer_1 = new QTimer(this);
    att_Timer_1->setInterval(60000);

    att_Timer_2 = new QTimer(this);
    att_Timer_2->setInterval(60000);

    att_Timer_3 = new QTimer(this);
    att_Timer_3->setInterval(60000);

    att_Timer_4 = new QTimer(this);
    att_Timer_4->setInterval(60000);

    att_Timer_5 = new QTimer(this);
    att_Timer_5->setInterval(60000);

    att_Timer_6 = new QTimer(this);
    att_Timer_6->setInterval(60000);

    att_Timer_7 = new QTimer(this);
    att_Timer_7->setInterval(60000);

    att_Timer_8 = new QTimer(this);
    att_Timer_8->setInterval(60000);

    att_Timer_9 = new QTimer(this);
    att_Timer_9->setInterval(60000);

    att_Timer_10 = new QTimer(this);
    att_Timer_10->setInterval(60000);

    //checking for configuration files at startup
    QFile att_GlobalCurFile("/home/monge/STUFF/DEV_Qt/MaiaCyberius/etc/Cyberius_Currency.txt");
    if(!att_GlobalCurFile.exists())
    {
        this->m_handleCurrencyFile();
    }

    QFile att_GlobalPriceFile("/home/monge/STUFF/DEV_Qt/MaiaCyberius/etc/Cyberius_PricePerMinute.txt");
    if(!att_GlobalPriceFile.exists())
    {
        this->m_handlePricePerMinuteFile();
    }
    //########################################################handling default values
    //start times
    att_ui->line_start1->setText("--h:--m:--s");
    att_ui->line_start2->setText("--h:--m:--s");
    att_ui->line_start3->setText("--h:--m:--s");
    att_ui->line_start4->setText("--h:--m:--s");
    att_ui->line_start5->setText("--h:--m:--s");
    att_ui->line_start6->setText("--h:--m:--s");
    att_ui->line_start7->setText("--h:--m:--s");
    att_ui->line_start8->setText("--h:--m:--s");
    att_ui->line_start9->setText("--h:--m:--s");
    att_ui->line_start10->setText("--h:--m:--s");
    //stop times
    att_ui->line_stop1->setText("--h:--m:--s");
    att_ui->line_stop2->setText("--h:--m:--s");
    att_ui->line_stop3->setText("--h:--m:--s");
    att_ui->line_stop4->setText("--h:--m:--s");
    att_ui->line_stop5->setText("--h:--m:--s");
    att_ui->line_stop6->setText("--h:--m:--s");
    att_ui->line_stop7->setText("--h:--m:--s");
    att_ui->line_stop8->setText("--h:--m:--s");
    att_ui->line_stop9->setText("--h:--m:--s");
    att_ui->line_stop10->setText("--h:--m:--s");
    //total times
    att_ui->line_total1->setText("0 Min");
    att_ui->line_total2->setText("0 Min");
    att_ui->line_total3->setText("0 Min");
    att_ui->line_total4->setText("0 Min");
    att_ui->line_total5->setText("0 Min");
    att_ui->line_total6->setText("0 Min");
    att_ui->line_total7->setText("0 Min");
    att_ui->line_total8->setText("0 Min");
    att_ui->line_total9->setText("0 Min");
    att_ui->line_total10->setText("0 Min");
    //account lines
    att_ui->line_account1->setText("0 Ar");
    att_ui->line_account2->setText("0 Ar");
    att_ui->line_account3->setText("0 Ar");
    att_ui->line_account4->setText("0 Ar");
    att_ui->line_account5->setText("0 Ar");
    att_ui->line_account6->setText("0 Ar");
    att_ui->line_account7->setText("0 Ar");
    att_ui->line_account8->setText("0 Ar");
    att_ui->line_account9->setText("0 Ar");
    att_ui->line_account10->setText("0 Ar");
    //########################################################connect section
    connect(att_GlobalTimer, SIGNAL(timeout()), this, SLOT(m_handleGlobalDateAndTime()));
    connect(att_LogTimer, SIGNAL(timeout()), this, SLOT(m_handleLogFile()));
    connect(att_ActionQuit, SIGNAL(triggered()), this, SLOT(close()));
    connect(att_ActionAboutAndHelp, SIGNAL(triggered()), this, SLOT(m_aboutAndHelp()));
    connect(att_ActionCurrency, SIGNAL(triggered()), this, SLOT(m_handleCurrencyFile()));
    connect(att_ActionPricePerMinute, SIGNAL(triggered()), this, SLOT(m_handlePricePerMinuteFile()));
    connect(att_ActionPrintLog, SIGNAL(triggered()), this, SLOT(m_printLog()));
    //########################################################buttons
    connect(att_ui->b_start1, SIGNAL(clicked()), this, SLOT(m_launch_1()));
    connect(att_Timer_1, SIGNAL(timeout()), this, SLOT(m_count_1()));
    connect(att_ui->b_stop1, SIGNAL(clicked()), this, SLOT(m_stop_1()));

    connect(att_ui->b_start2, SIGNAL(clicked()), this, SLOT(m_launch_2()));
    connect(att_Timer_2, SIGNAL(timeout()), this, SLOT(m_count_2()));
    connect(att_ui->b_stop2, SIGNAL(clicked()), this, SLOT(m_stop_2()));

    connect(att_ui->b_start3, SIGNAL(clicked()), this, SLOT(m_launch_3()));
    connect(att_Timer_3, SIGNAL(timeout()), this, SLOT(m_count_3()));
    connect(att_ui->b_stop3, SIGNAL(clicked()), this, SLOT(m_stop_3()));

    connect(att_ui->b_start4, SIGNAL(clicked()), this, SLOT(m_launch_4()));
    connect(att_Timer_4, SIGNAL(timeout()), this, SLOT(m_count_4()));
    connect(att_ui->b_stop4, SIGNAL(clicked()), this, SLOT(m_stop_4()));

    connect(att_ui->b_start5, SIGNAL(clicked()), this, SLOT(m_launch_5()));
    connect(att_Timer_5, SIGNAL(timeout()), this, SLOT(m_count_5()));
    connect(att_ui->b_stop5, SIGNAL(clicked()), this, SLOT(m_stop_5()));

    connect(att_ui->b_start6, SIGNAL(clicked()), this, SLOT(m_launch_6()));
    connect(att_Timer_6, SIGNAL(timeout()), this, SLOT(m_count_6()));
    connect(att_ui->b_stop6, SIGNAL(clicked()), this, SLOT(m_stop_6()));

    connect(att_ui->b_start7, SIGNAL(clicked()), this, SLOT(m_launch_7()));
    connect(att_Timer_7, SIGNAL(timeout()), this, SLOT(m_count_7()));
    connect(att_ui->b_stop7, SIGNAL(clicked()), this, SLOT(m_stop_7()));

    connect(att_ui->b_start8, SIGNAL(clicked()), this, SLOT(m_launch_8()));
    connect(att_Timer_8, SIGNAL(timeout()), this, SLOT(m_count_8()));
    connect(att_ui->b_stop8, SIGNAL(clicked()), this, SLOT(m_stop_8()));

    connect(att_ui->b_start9, SIGNAL(clicked()), this, SLOT(m_launch_9()));
    connect(att_Timer_9, SIGNAL(timeout()), this, SLOT(m_count_9()));
    connect(att_ui->b_stop9, SIGNAL(clicked()), this, SLOT(m_stop_9()));

    connect(att_ui->b_start10, SIGNAL(clicked()), this, SLOT(m_launch_10()));
    connect(att_Timer_10, SIGNAL(timeout()), this, SLOT(m_count_10()));
    connect(att_ui->b_stop10, SIGNAL(clicked()), this, SLOT(m_stop_10()));

    connect(att_ActionLaunchAll, SIGNAL(triggered()), this, SLOT(m_launchAll()));
    connect(att_ActionStopAll, SIGNAL(triggered()), this, SLOT(m_stopAll()));

    //take the date and time once and that's all
    att_ui->line_date->setText(QDateTime::currentDateTime().date().toString(tr("dddd d MMMM yyyy")));
    //########################################################

    //    if(!att_ui->b_stop1->isEnabled() && !att_ui->b_stop2->isEnabled() && !att_ui->b_stop3->isEnabled() && !att_ui->b_stop4->isEnabled() && !att_ui->b_stop5->isEnabled() && !att_ui->b_stop6->isEnabled() && !att_ui->b_stop7->isEnabled() && !att_ui->b_stop8->isEnabled() && !att_ui->b_stop9->isEnabled() && !att_ui->b_stop10->isEnabled())
    //    {
    //        //so the user can NOT use the Stop all action
    //        att_ActionStopAll->setEnabled(false);
    //    }
    //    else if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    //        {
    //            //so the user can NOT use the Stop all action
    //            att_ActionStopAll->setEnabled(true);
    //        }

}
//########################################################
void MaiaCyberius::m_aboutAndHelp()
{
    att_AboutLab = new QLabel(this);//create a label object for about dialog
    att_AboutLab->setWordWrap(true);
    att_AboutLab->setMargin(10);
    att_AboutLab->setAlignment(Qt::AlignTop);
    att_AboutLab->setText(tr("\tMAIA Cyberius is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation; either version 2 of the License, or (at your option) any later version. \n\n\tMAIA Cyberius is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for more details. \n\n\tYou should have received a copy of the GNU General Public License along with MAIA Cyberius; if not, write to the Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA"));

    att_HelpLab = new QLabel(this);//create a label object for help dialog
    att_HelpLab->setWordWrap(true);
    att_HelpLab->setMargin(10);
    att_HelpLab->setAlignment(Qt::AlignTop);
    att_HelpLab->setOpenExternalLinks(true);
    att_HelpLab->setText(tr("<html><head/><body> MAIA Cyberius helps you to manage your informatic park.<br> You can launch all counters at the same time or just launch one at a time.<br> The MAIA Cyberius keeps every session in a log file, a file you can directly print via the actions menu, so you can take a look to the history even after rebooting your computer.<br>It, also, offers you the possibility of changing the Price Per Minute and the country money. <br><br><br> Author: <b>ANDRIAMILAMINA Monge</b>.<br>E-mail: <a href='mailto:mongemilamina@gmail.com'> mongemilamina@gmail.com</a>. <br> Web: <a href='https://andriamilamina.wordpress.com'> MAIA</a>.</body></html>"));

    att_TabWidget = new QTabWidget();//no parent, so this is gonna have its own window
    att_TabWidget->setWindowFlags(Qt::WindowStaysOnTopHint);//make the tabwidget above other application windows
    att_TabWidget->setAttribute(Qt::WA_ShowModal, true);//make the TabWidget Modal
    att_TabWidget->insertTab(1, att_AboutLab, QIcon(":/qrc_icons/icons/MAIA_icon_About.png"), tr("&About"));//adding the appropriate label to the tabBar, with its title
    att_TabWidget->insertTab(1, att_HelpLab, QIcon(":/qrc_icons/icons/MAIA_icon_Help.png"), tr("&Help"));//adding the appropriate label to the tabBar, with its title

    att_TabWidget->setWindowTitle(tr("MAIA Cyberius, About and Help"));
    att_TabWidget->setWindowIcon(QIcon(":/qrc_icons/icons/MAIA_icon.png"));
    att_TabWidget->resize(510, 320);
    att_TabWidget->setMinimumSize(510, 360);
    att_TabWidget->show();
}
//########################################################
void MaiaCyberius::m_printLog()
{
    QFile logFile("../var/Cyberius_log.log");
    if (!logFile.open(QIODevice::ReadOnly))
        return;

    QTextStream logFlux(&logFile);
    logFlux.setCodec(QTextCodec::codecForName("ISO-8859-1"));

    QPrinter logPrinter;
    logFlux.seek(0);

    QString logText = logFile.readAll();

    QTextDocument logDocument(logText);

    QPrintDialog* logDialogPrinter = new QPrintDialog(&logPrinter, this);

    if (logDialogPrinter->exec() == QDialog::Accepted)
    {
        logDocument.print(&logPrinter);
        QMessageBox::information(this, tr("Information"), tr("Log file printed!"), QMessageBox::Ok);
    }

}
//########################################################
void MaiaCyberius::m_handleGlobalDateAndTime()
{
    //Method 1
    //QDateTime att_GlobalDateAndTime = QDateTime::currentDateTime();
    //QString att_Date = att_GlobalDateAndTime.date().toString("dddd d MMMM yyyy");
    //QString att_Time = att_GlobalDateAndTime.time().toString("hh:mm:ss");
    //att_ui->line_date->setText("Date: " + att_Date + "; Time: " + att_Timer);

    //Method 1
    att_ui->line_time->setText(QDateTime::currentDateTime().time().toString("hh:mm:ss"));
}
//########################################################
void MaiaCyberius::m_handleCurrencyFile()
{
    att_CurFile = new QFile("/home/monge/STUFF/DEV_Qt/MaiaCyberius/etc/Cyberius_Currency.txt");
    if (att_CurFile->open(QIODevice::Truncate | QIODevice::ReadWrite) | (QIODevice::Text))//open file for truncate (overwrite content), read & write operation
    {
        QInputDialog att_CurDialog;//open an input dialog t get the currency
        QTextStream att_CurStream(att_CurFile);//send the file to a textstream

        //stream out the input dialog text directly and by overwriting the file content
        bool ok;
        QString att_CurDialogString = att_CurDialog.getText(this, tr("Currency value"), tr("Please enter the currency: Ar or  or $"), QLineEdit::Normal, "Ar", &ok);

        //test if the user clicked on Ok and left the input dialog empty
        if (ok && att_CurDialogString.isEmpty())
        {
            att_CurStream << "Ar";//set the currency to default
            QMessageBox::warning(this, tr("Information"), tr("Empty input!\nCurrency set to default: Ar."), QMessageBox::Ok);
        }
        //test if the user clicked on Calcel
        else if (!ok)
        {
            att_CurStream << "Ar";//set the currency to default
            QMessageBox::warning(this, tr("Information"), tr("Cancel button clicked!\nCurrency set to default: Ar."), QMessageBox::Ok);
        }
        //otherwise, take the inputdialog input
        else
            att_CurStream << att_CurDialogString;

        att_CurFile->close();
    }
}
//########################################################
void MaiaCyberius::m_handlePricePerMinuteFile()
{
    att_PriceFile = new QFile("/home/monge/STUFF/DEV_Qt/MaiaCyberius/etc/Cyberius_PricePerMinute.txt");
    if (att_PriceFile->open(QIODevice::Truncate | QIODevice::ReadWrite) | (QIODevice::Text))//open file for truncate (overwrite content),read & write operation
    {
        QInputDialog att_PriceDialog;//open an input dialog t get the currency
        QTextStream att_PriceStream(att_PriceFile);//send the file to a textstream

        //stream out the input dialog text directly and by overwriting the file content
        bool ok;
        QString att_PriceDialogString = att_PriceDialog.getText(this, tr("Price Per Minute value"), tr("Please enter the Price Per Minute: 5 or 10 or 20"), QLineEdit::Normal, "60", &ok);

        //test if the user clicked on Ok and let the input dialog empty
        if (ok && att_PriceDialogString.isEmpty())
        {
            att_PriceStream << "20";//set the currency to default
            QMessageBox::warning(this, tr("Information"), tr("Empty input!\nPrice Per Minute set to default: 20."), QMessageBox::Ok);
        }
        //test if the user clicked on Calcel
        else if (!ok)
        {
            att_PriceStream << "20";//set the currency to default
            QMessageBox::warning(this, tr("Information"), tr("Cancel button clicked!\nPrice Per Minute set to default: 20."), QMessageBox::Ok);
        }
        //otherwise, take the inputdialog input
        else
            att_PriceStream <<  att_PriceDialogString;

        att_PriceFile->close();
    }
}
//########################################################
void MaiaCyberius::m_handleLogFile()
{
    att_LogFile = new QFile("/home/monge/STUFF/DEV_Qt/MaiaCyberius/var/Cyberius_log.log");
    att_LogFile->open(QIODevice::Append | QIODevice::Text);
    QTextStream att_LogStream(att_LogFile);
    att_LogStream << "MAIA Cyberius log.\n";
    att_LogStream << QDateTime::currentDateTime().toString("dddd d MMMM yyyy; hh:mm:ss") + "\n";
    att_LogStream << "--------------------------------------------------------" "\n";
    att_LogStream << "MCp1: " +att_ui->line_start1->text() + "\t" << att_ui->line_stop1->text() + "\t" << att_ui->line_total1->text() + "\t" << att_ui->line_account1->text() + "\n";
    att_LogStream << "MCp2: " +att_ui->line_start2->text() + "\t" << att_ui->line_stop2->text() + "\t" << att_ui->line_total2->text() + "\t" << att_ui->line_account2->text() + "\n";
    att_LogStream << "MCp3: " +att_ui->line_start3->text() + "\t" << att_ui->line_stop3->text() + "\t" << att_ui->line_total3->text() + "\t" << att_ui->line_account3->text() + "\n";
    att_LogStream << "MCp4: " +att_ui->line_start4->text() + "\t" << att_ui->line_stop4->text() + "\t" << att_ui->line_total4->text() + "\t" << att_ui->line_account4->text() + "\n";
    att_LogStream << "MCp5: " +att_ui->line_start5->text() + "\t" << att_ui->line_stop5->text() + "\t" << att_ui->line_total5->text() + "\t" << att_ui->line_account5->text() + "\n";
    att_LogStream << "MCp6: " +att_ui->line_start6->text() + "\t" << att_ui->line_stop6->text() + "\t" << att_ui->line_total6->text() + "\t" << att_ui->line_account6->text() + "\n";
    att_LogStream << "MCp7: " +att_ui->line_start7->text() + "\t" << att_ui->line_stop7->text() + "\t" << att_ui->line_total7->text() + "\t" << att_ui->line_account7->text() + "\n";
    att_LogStream << "MCp8: " +att_ui->line_start8->text() + "\t" << att_ui->line_stop8->text() + "\t" << att_ui->line_total8->text() + "\t" << att_ui->line_account8->text() + "\n";
    att_LogStream << "MCp9: " +att_ui->line_start9->text() + "\t" << att_ui->line_stop9->text() + "\t" << att_ui->line_total9->text() + "\t" << att_ui->line_account9->text() + "\n";
    att_LogStream << "MCp10: " +att_ui->line_start10->text() + "\t" << att_ui->line_stop10->text() + "\t" << att_ui->line_total10->text() + "\t" << att_ui->line_account10->text() + "\n";
    att_LogStream << "--------------------------------------------------------" "\n";
    att_LogFile->close();
}
//LauchAll
//########################################################
void MaiaCyberius::m_launchAll()
{
    this->m_launch_1();
    this->m_launch_2();
    this->m_launch_3();
    this->m_launch_4();
    this->m_launch_5();
    this->m_launch_6();
    this->m_launch_7();
    this->m_launch_8();
    this->m_launch_9();
    this->m_launch_10();
}
//########################################################

//StopAll
//########################################################
void MaiaCyberius::m_stopAll()
{
    this->m_stop_1();
    this->m_stop_2();
    this->m_stop_3();
    this->m_stop_4();
    this->m_stop_5();
    this->m_stop_6();
    this->m_stop_7();
    this->m_stop_8();
    this->m_stop_9();
    this->m_stop_10();
}
//########################################################

//11111111111111111111111111111111111111111111111111111111
//########################################################
void MaiaCyberius::m_launch_1()
{
    att_Timer_1->start();

    att_ui->b_stop1->setEnabled(true);
    att_ui->b_start1->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start1_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start1->setText(s_start1_time);
    att_ui->line_stop1->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_1()
{
    att_Timer_1->stop();
    incr_1 = 0;
    QString s_stop1_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop1->setText(s_stop1_time);

    att_ui->b_start1->setEnabled(true);
    att_ui->b_stop1->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop1 status is already known(***), no need to test it
    if(att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_1()
{
    incr_1++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total1->setText(QString::number(incr_1, 10) + " Min");
    att_ui->line_account1->setText(QString::number(incr_1 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//11111111111111111111111111111111111111111111111111111111

//22222222222222222222222222222222222222222222222222222222
//########################################################
void MaiaCyberius::m_launch_2()
{
    att_Timer_2->start();

    att_ui->b_stop2->setEnabled(true);
    att_ui->b_start2->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start2_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start2->setText(s_start2_time);
    att_ui->line_stop2->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_2()
{
    att_Timer_2->stop();
    incr_2 = 0;
    QString s_stop2_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop2->setText(s_stop2_time);

    att_ui->b_start2->setEnabled(true);
    att_ui->b_stop2->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop2 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_2()
{
    incr_2++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total2->setText(QString::number(incr_2, 10) + " Min");
    att_ui->line_account2->setText(QString::number(incr_2 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//22222222222222222222222222222222222222222222222222222222

//33333333333333333333333333333333333333333333333333333333
//########################################################
void MaiaCyberius::m_launch_3()
{
    att_Timer_3->start();

    att_ui->b_stop3->setEnabled(true);
    att_ui->b_start3->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start3_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start3->setText(s_start3_time);
    att_ui->line_stop3->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_3()
{
    att_Timer_3->stop();
    incr_3 = 0;
    QString s_stop3_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop3->setText(s_stop3_time);

    att_ui->b_start3->setEnabled(true);
    att_ui->b_stop3->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop3 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_3()
{
    incr_3++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total3->setText(QString::number(incr_3, 10) + " Min");
    att_ui->line_account3->setText(QString::number(incr_3 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//33333333333333333333333333333333333333333333333333333333

//44444444444444444444444444444444444444444444444444444444
//########################################################
void MaiaCyberius::m_launch_4()
{
    att_Timer_4->start();

    att_ui->b_stop4->setEnabled(true);
    att_ui->b_start4->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start4_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start4->setText(s_start4_time);
    att_ui->line_stop4->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_4()
{
    att_Timer_4->stop();
    incr_4 = 0;
    QString s_stop4_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop4->setText(s_stop4_time);

    att_ui->b_start4->setEnabled(true);
    att_ui->b_stop4->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop4 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_4()
{
    incr_4++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total4->setText(QString::number(incr_4, 10) + " Min");
    att_ui->line_account4->setText(QString::number(incr_4 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//44444444444444444444444444444444444444444444444444444444

//55555555555555555555555555555555555555555555555555555555
//########################################################
void MaiaCyberius::m_launch_5()
{
    att_Timer_5->start();

    att_ui->b_stop5->setEnabled(true);
    att_ui->b_start5->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start5_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start5->setText(s_start5_time);
    att_ui->line_stop5->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_5()
{
    att_Timer_5->stop();
    incr_5 = 0;
    QString s_stop5_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop5->setText(s_stop5_time);

    att_ui->b_start5->setEnabled(true);
    att_ui->b_stop5->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop5 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_5()
{
    incr_5++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total5->setText(QString::number(incr_5, 10) + " Min");
    att_ui->line_account5->setText(QString::number(incr_5 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//55555555555555555555555555555555555555555555555555555555

//66666666666666666666666666666666666666666666666666666666
//########################################################
void MaiaCyberius::m_launch_6()
{
    att_Timer_6->start();

    att_ui->b_stop6->setEnabled(true);
    att_ui->b_start6->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start6_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start6->setText(s_start6_time);
    att_ui->line_stop6->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_6()
{
    att_Timer_6->stop();
    incr_6 = 0;
    QString s_stop6_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop6->setText(s_stop6_time);

    att_ui->b_start6->setEnabled(true);
    att_ui->b_stop6->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop6 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_6()
{
    incr_6++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total6->setText(QString::number(incr_6, 10) + " Min");
    att_ui->line_account6->setText(QString::number(incr_6 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//66666666666666666666666666666666666666666666666666666666

//77777777777777777777777777777777777777777777777777777777
//########################################################
void MaiaCyberius::m_launch_7()
{
    att_Timer_7->start();

    att_ui->b_stop7->setEnabled(true);
    att_ui->b_start7->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start7_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start7->setText(s_start7_time);
    att_ui->line_stop7->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_7()
{
    att_Timer_7->stop();
    incr_7 = 0;
    QString s_stop7_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop7->setText(s_stop7_time);

    att_ui->b_start7->setEnabled(true);
    att_ui->b_stop7->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop7 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_7()
{
    incr_7++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total7->setText(QString::number(incr_7, 10) + " Min");
    att_ui->line_account7->setText(QString::number(incr_7 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//77777777777777777777777777777777777777777777777777777777

//88888888888888888888888888888888888888888888888888888888
//########################################################
void MaiaCyberius::m_launch_8()
{
    att_Timer_8->start();

    att_ui->b_stop8->setEnabled(true);
    att_ui->b_start8->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start8_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start8->setText(s_start8_time);
    att_ui->line_stop8->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_8()
{
    att_Timer_8->stop();
    incr_8 = 0;
    QString s_stop8_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop8->setText(s_stop8_time);

    att_ui->b_start8->setEnabled(true);
    att_ui->b_stop8->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop8 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop9->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_8()
{
    incr_8++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total8->setText(QString::number(incr_8, 10) + " Min");
    att_ui->line_account8->setText(QString::number(incr_8 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//88888888888888888888888888888888888888888888888888888888

//99999999999999999999999999999999999999999999999999999999
//########################################################
void MaiaCyberius::m_launch_9()
{
    att_Timer_9->start();

    att_ui->b_stop9->setEnabled(true);
    att_ui->b_start9->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start9_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start9->setText(s_start9_time);
    att_ui->line_stop9->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_9()
{
    att_Timer_9->stop();
    incr_9 = 0;
    QString s_stop9_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop9->setText(s_stop9_time);

    att_ui->b_start9->setEnabled(true);
    att_ui->b_stop9->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop9 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop10->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_9()
{
    incr_9++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total9->setText(QString::number(incr_9, 10) + " Min");
    att_ui->line_account9->setText(QString::number(incr_9 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//99999999999999999999999999999999999999999999999999999999

//10101010101010101010101010101010101010101010101010101010
//########################################################
void MaiaCyberius::m_launch_10()
{
    att_Timer_10->start();

    att_ui->b_stop10->setEnabled(true);
    att_ui->b_start10->setEnabled(false);
    att_ActionQuit->setEnabled(false);
    att_ActionLaunchAll->setEnabled(false);
    att_ActionCurrency->setEnabled(false);
    att_ActionPricePerMinute->setEnabled(false);

    QString s_start10_time = att_GlobalTime->currentTime().toString();
    att_ui->line_start10->setText(s_start10_time);
    att_ui->line_stop10->setText("--h:--m:--s");
    //disable window close button
}
//########################################################
void MaiaCyberius::m_stop_10()
{
    att_Timer_10->stop();
    incr_10 = 0;
    QString s_stop10_time = att_GlobalTime->currentTime().toString();
    att_ui->line_stop10->setText(s_stop10_time);

    att_ui->b_start10->setEnabled(true);
    att_ui->b_stop10->setEnabled(false);//(***)
    //test if one of the counter is still activated (its stop button is activated)
    //b_stop10 status is already known(***), no need to test it
    if(att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled())
    {
        //so the user can NOT make settings or quit the application
        att_ActionQuit->setEnabled(false);
        att_ActionLaunchAll->setEnabled(false);
        att_ActionCurrency->setEnabled(false);
        att_ActionPricePerMinute->setEnabled(false);
    }
    //test if they are all deactivated (their stop buttons are all disable)
    else
    {
        //so the user can make settings or quit the application
        att_ActionQuit->setEnabled(true);
        att_ActionLaunchAll->setEnabled(true);
        att_ActionCurrency->setEnabled(true);
        att_ActionPricePerMinute->setEnabled(true);
        //disable window close button
    }
}
//########################################################
void MaiaCyberius::m_count_10()
{
    incr_10++;

    QFile currF("Cyberius_Currency.txt");//create file
    currF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream CurrStream(&currF);//create stream and link it to the file
    QString CurrStringStream =  CurrStream.readAll();//read the stream and put it into a QString

    QFile PriceF("Cyberius_PricePerMinute.txt");//create file
    PriceF.open(QIODevice::ReadOnly) | (QIODevice::Text);//open the file in read and write mode
    QTextStream PriceStream(&PriceF);//create stream and link it to the file
    bool* ok = 0;//converting catched stream to int for calculation
    int PriceStringStream =  PriceStream.readAll().toInt(ok, 10);//read the stream and put it into a QString

    att_ui->line_total10->setText(QString::number(incr_10, 10) + " Min");
    att_ui->line_account10->setText(QString::number(incr_10 * PriceStringStream, 10) + " " + CurrStringStream);
}
//########################################################
//10101010101010101010101010101010101010101010101010101010

void MaiaCyberius::closeEvent(QCloseEvent *ev)//wait for a QCloseEvent *ev signal sent by close button click
{
    if(ev->type() == QEvent::Close && att_ui->b_stop1->isEnabled() || att_ui->b_stop2->isEnabled() || att_ui->b_stop3->isEnabled() || att_ui->b_stop4->isEnabled() || att_ui->b_stop5->isEnabled() || att_ui->b_stop6->isEnabled() || att_ui->b_stop7->isEnabled() || att_ui->b_stop8->isEnabled() || att_ui->b_stop9->isEnabled())
    {
        //if there is one stop button activated (one counter is activated) ignore close event from the window manager
        ev->ignore();
    }
    else if (ev->type() == QEvent::Close && att_ui->b_start1->isEnabled() && att_ui->b_start2->isEnabled() && att_ui->b_start3->isEnabled() && att_ui->b_start4->isEnabled() && att_ui->b_start5->isEnabled() && att_ui->b_start6->isEnabled() && att_ui->b_start7->isEnabled() && att_ui->b_start8->isEnabled() && att_ui->b_start9->isEnabled())
    {
        QMessageBox::StandardButton reponse;
        reponse = QMessageBox::warning(this, tr("MAIA Cyberius"), tr("Quit the application?"), QMessageBox::No | QMessageBox::Yes);
        if (reponse == QMessageBox::No)
        {
            ev->ignore();
            if(this->isHidden())
                this->show();
        }
        else if (reponse == QMessageBox::Yes)
            this->close();
    }
}
//########################################################
MaiaCyberius::~MaiaCyberius()
{
    delete att_ui;
}
