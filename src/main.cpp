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

#include <QApplication>
#include "maiacyberius.h"
#include <QSplashScreen>
#include <QString>
#include <QLocale>
#include <QTranslator>
#include "unistd.h"

int main(int argc, char *argv[])
{
    QApplication myAppli(argc, argv);

    QString myLocaleLang = QLocale::system().name().section("_", 0, 0);

    QTranslator myTranslator;
    myTranslator.load(":qrc_transl/cyberius_" + myLocaleLang);
    //myTranslator.load(":qrc_transl/cyberius_fr");
    myAppli.installTranslator(&myTranslator);

    MaiaCyberius myWindow;
    QPixmap myPixmap(":/qrc_icons/icons/MAIA_Splash_Cyberius.png");
    QSplashScreen mySplash(myPixmap);
    mySplash.show();
    myAppli.processEvents();
    sleep(1);
    myAppli.processEvents();
    sleep(2);
    myAppli.processEvents();
    sleep(2);
    mySplash.close();

    myWindow.setWindowTitle("MAIA Cyberius 1.0");
    myWindow.setWindowIcon(QIcon(":/qrc_icons/icons/MAIA_icon.png"));

    myWindow.setMinimumSize(630, 450);
    myWindow.show();

    return myAppli.exec();
}
