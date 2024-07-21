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

#ifndef MAIACYBERIUS_H
#define MAIACYBERIUS_H

#include <QMainWindow>
#include <QLabel>
#include <QTimer>
#include <QTime>
#include <QFile>
#include <QTabWidget>
#include <QAction>
#include <QMenu>

namespace Ui {
class MaiaCyberius;
}

class MaiaCyberius : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MaiaCyberius(QWidget *parent = nullptr);
    ~MaiaCyberius();
public slots:

    void m_aboutAndHelp();
    
    void m_handleGlobalDateAndTime();
    void m_handleCurrencyFile();
    void m_handlePricePerMinuteFile();
    void m_handleLogFile();
    
    void m_launch_1();
    void m_count_1();
    void m_stop_1();

    void m_launch_2();
    void m_count_2();
    void m_stop_2();

    void m_launch_3();
    void m_count_3();
    void m_stop_3();

    void m_launch_4();
    void m_count_4();
    void m_stop_4();

    void m_launch_5();
    void m_count_5();
    void m_stop_5();

    void m_launch_6();
    void m_count_6();
    void m_stop_6();

    void m_launch_7();
    void m_count_7();
    void m_stop_7();

    void m_launch_8();
    void m_count_8();
    void m_stop_8();

    void m_launch_9();
    void m_count_9();
    void m_stop_9();

    void m_launch_10();
    void m_count_10();
    void m_stop_10();

    void m_launchAll();
    void m_stopAll();
    void m_printLog();
    
private slots:
    void closeEvent(QCloseEvent *ev);
private:

    QLabel* att_UrlLabel;
    QTime* att_GlobalTime;

    QTimer* att_GlobalTimer;
    QTimer* att_LogTimer;

    QTimer* att_Timer_1;
    QTimer* att_Timer_2;
    QTimer* att_Timer_3;
    QTimer* att_Timer_4;
    QTimer* att_Timer_5;
    QTimer* att_Timer_6;
    QTimer* att_Timer_7;
    QTimer* att_Timer_8;
    QTimer* att_Timer_9;
    QTimer* att_Timer_10;

    QFile* att_LogFile;
    QFile* att_CurFile;
    QFile* att_PriceFile;
    QFile* att_ReadCurFile;
    QFile* att_ReadPriceFile;

    QMenu* att_MenuActions;
    QMenu* att_MenuSettings;
    QMenu* att_MenuAboutAndHelp;

    QAction* att_ActionAboutAndHelp;
    QAction* att_ActionCurrency;
    QAction* att_ActionLaunchAll;
    QAction* att_ActionPricePerMinute;
    QAction* att_ActionPrintLog;
    QAction* att_ActionQuit;
    QAction* att_ActionStopAll;
    
    QTabWidget* att_TabWidget;
    QLabel* att_AboutLab;
    QLabel* att_HelpLab;

    Ui::MaiaCyberius *att_ui;
};

#endif // MAIACYBERIUS_H
