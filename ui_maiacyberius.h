/********************************************************************************
** Form generated from reading UI file 'maiacyberius.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIACYBERIUS_H
#define UI_MAIACYBERIUS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MaiaCyberius
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_17;
    QLineEdit *line_date;
    QLabel *label_18;
    QLineEdit *line_time;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_6;
    QLabel *label_10;
    QLabel *label_15;
    QLabel *label_3;
    QLabel *label_14;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_12;
    QLabel *label_5;
    QLabel *label_2;
    QLabel *label_9;
    QLabel *label_11;
    QLineEdit *line_start1;
    QLineEdit *line_start2;
    QLineEdit *line_start3;
    QLineEdit *line_start4;
    QLineEdit *line_start5;
    QLineEdit *line_start6;
    QLineEdit *line_start7;
    QLineEdit *line_start8;
    QLineEdit *line_start9;
    QLineEdit *line_start10;
    QLineEdit *line_stop1;
    QLineEdit *line_stop2;
    QLineEdit *line_stop3;
    QLineEdit *line_stop4;
    QLineEdit *line_stop5;
    QLineEdit *line_stop6;
    QLineEdit *line_stop7;
    QLineEdit *line_stop8;
    QLineEdit *line_stop9;
    QLineEdit *line_stop10;
    QLineEdit *line_total1;
    QLineEdit *line_total2;
    QLineEdit *line_total3;
    QLineEdit *line_total4;
    QLineEdit *line_total5;
    QLineEdit *line_total6;
    QLineEdit *line_total7;
    QLineEdit *line_total8;
    QLineEdit *line_total9;
    QLineEdit *line_total10;
    QLineEdit *line_account1;
    QLineEdit *line_account2;
    QLineEdit *line_account3;
    QLineEdit *line_account4;
    QLineEdit *line_account5;
    QLineEdit *line_account6;
    QLineEdit *line_account7;
    QLineEdit *line_account8;
    QLineEdit *line_account9;
    QLineEdit *line_account10;
    QHBoxLayout *horizontalLayout;
    QPushButton *b_start1;
    QPushButton *b_stop1;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *b_start2;
    QPushButton *b_stop2;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *b_start3;
    QPushButton *b_stop3;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *b_start4;
    QPushButton *b_stop4;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *b_start5;
    QPushButton *b_stop5;
    QHBoxLayout *horizontalLayout_6;
    QPushButton *b_start6;
    QPushButton *b_stop6;
    QHBoxLayout *horizontalLayout_7;
    QPushButton *b_start7;
    QPushButton *b_stop7;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *b_start8;
    QPushButton *b_stop8;
    QHBoxLayout *horizontalLayout_9;
    QPushButton *b_start9;
    QPushButton *b_stop9;
    QHBoxLayout *horizontalLayout_10;
    QPushButton *b_start10;
    QPushButton *b_stop10;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MaiaCyberius)
    {
        if (MaiaCyberius->objectName().isEmpty())
            MaiaCyberius->setObjectName(QStringLiteral("MaiaCyberius"));
        MaiaCyberius->resize(630, 450);
        MaiaCyberius->setMinimumSize(QSize(630, 450));
        centralWidget = new QWidget(MaiaCyberius);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(2);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(2, 2, 2, 2);
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(2);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        label_17 = new QLabel(centralWidget);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setMinimumSize(QSize(45, 30));

        horizontalLayout_11->addWidget(label_17);

        line_date = new QLineEdit(centralWidget);
        line_date->setObjectName(QStringLiteral("line_date"));
        line_date->setMinimumSize(QSize(342, 30));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        line_date->setFont(font);
        line_date->setAlignment(Qt::AlignCenter);
        line_date->setReadOnly(true);

        horizontalLayout_11->addWidget(line_date);

        label_18 = new QLabel(centralWidget);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMinimumSize(QSize(50, 30));

        horizontalLayout_11->addWidget(label_18);

        line_time = new QLineEdit(centralWidget);
        line_time->setObjectName(QStringLiteral("line_time"));
        line_time->setMinimumSize(QSize(150, 30));
        line_time->setFont(font);
        line_time->setAlignment(Qt::AlignCenter);
        line_time->setReadOnly(true);

        horizontalLayout_11->addWidget(line_time);


        verticalLayout->addLayout(horizontalLayout_11);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(2);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMinimumSize(QSize(72, 26));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        label_4->setFont(font1);
        label_4->setFrameShape(QFrame::Box);
        label_4->setFrameShadow(QFrame::Sunken);
        label_4->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMinimumSize(QSize(72, 26));
        label_6->setFont(font1);
        label_6->setFrameShape(QFrame::Box);
        label_6->setFrameShadow(QFrame::Sunken);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_6, 7, 0, 1, 1);

        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMinimumSize(QSize(72, 26));
        label_10->setFont(font1);
        label_10->setFrameShape(QFrame::Box);
        label_10->setFrameShadow(QFrame::Sunken);
        label_10->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label_15 = new QLabel(centralWidget);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setMinimumSize(QSize(100, 26));
        label_15->setFont(font1);
        label_15->setFrameShape(QFrame::Box);
        label_15->setFrameShadow(QFrame::Sunken);
        label_15->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_15, 0, 4, 1, 1);

        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setMinimumSize(QSize(72, 26));
        label_3->setFont(font1);
        label_3->setFrameShape(QFrame::Box);
        label_3->setFrameShadow(QFrame::Sunken);
        label_3->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        label_14 = new QLabel(centralWidget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMinimumSize(QSize(100, 26));
        label_14->setFont(font1);
        label_14->setFrameShape(QFrame::Box);
        label_14->setFrameShadow(QFrame::Sunken);
        label_14->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_14, 0, 3, 1, 1);

        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setMinimumSize(QSize(72, 26));
        label_7->setFont(font1);
        label_7->setFrameShape(QFrame::Box);
        label_7->setFrameShadow(QFrame::Sunken);
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_7, 4, 0, 1, 1);

        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setMinimumSize(QSize(72, 26));
        label_8->setFont(font1);
        label_8->setFrameShape(QFrame::Box);
        label_8->setFrameShadow(QFrame::Sunken);
        label_8->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_8, 5, 0, 1, 1);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setMinimumSize(QSize(72, 26));
        label->setMaximumSize(QSize(16777215, 26));
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(158, 155, 154, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        label->setPalette(palette);
        label->setFont(font1);
        label->setFrameShape(QFrame::Box);
        label->setFrameShadow(QFrame::Sunken);
        label->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_13 = new QLabel(centralWidget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setMinimumSize(QSize(100, 26));
        label_13->setFont(font1);
        label_13->setFrameShape(QFrame::Box);
        label_13->setFrameShadow(QFrame::Sunken);
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 0, 2, 1, 1);

        label_16 = new QLabel(centralWidget);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setMinimumSize(QSize(100, 26));
        label_16->setFont(font1);
        label_16->setFrameShape(QFrame::Box);
        label_16->setFrameShadow(QFrame::Sunken);
        label_16->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_16, 0, 5, 1, 1);

        label_12 = new QLabel(centralWidget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMinimumSize(QSize(100, 26));
        label_12->setFont(font1);
        label_12->setFrameShape(QFrame::Box);
        label_12->setFrameShadow(QFrame::Sunken);
        label_12->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_12, 0, 1, 1, 1);

        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMinimumSize(QSize(72, 26));
        label_5->setFont(font1);
        label_5->setFrameShape(QFrame::Box);
        label_5->setFrameShadow(QFrame::Sunken);
        label_5->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_5, 6, 0, 1, 1);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setMinimumSize(QSize(72, 26));
        label_2->setFont(font1);
        label_2->setFrameShape(QFrame::Box);
        label_2->setFrameShadow(QFrame::Sunken);
        label_2->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setMinimumSize(QSize(72, 26));
        label_9->setFont(font1);
        label_9->setFrameShape(QFrame::Box);
        label_9->setFrameShadow(QFrame::Sunken);
        label_9->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_9, 8, 0, 1, 1);

        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setMinimumSize(QSize(72, 26));
        label_11->setFont(font1);
        label_11->setFrameShape(QFrame::Box);
        label_11->setFrameShadow(QFrame::Sunken);
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 10, 0, 1, 1);

        line_start1 = new QLineEdit(centralWidget);
        line_start1->setObjectName(QStringLiteral("line_start1"));
        line_start1->setMinimumSize(QSize(100, 26));
        line_start1->setAlignment(Qt::AlignCenter);
        line_start1->setReadOnly(true);

        gridLayout->addWidget(line_start1, 1, 1, 1, 1);

        line_start2 = new QLineEdit(centralWidget);
        line_start2->setObjectName(QStringLiteral("line_start2"));
        line_start2->setMinimumSize(QSize(100, 26));
        line_start2->setAlignment(Qt::AlignCenter);
        line_start2->setReadOnly(true);

        gridLayout->addWidget(line_start2, 2, 1, 1, 1);

        line_start3 = new QLineEdit(centralWidget);
        line_start3->setObjectName(QStringLiteral("line_start3"));
        line_start3->setMinimumSize(QSize(100, 26));
        line_start3->setAlignment(Qt::AlignCenter);
        line_start3->setReadOnly(true);

        gridLayout->addWidget(line_start3, 3, 1, 1, 1);

        line_start4 = new QLineEdit(centralWidget);
        line_start4->setObjectName(QStringLiteral("line_start4"));
        line_start4->setMinimumSize(QSize(100, 26));
        line_start4->setAlignment(Qt::AlignCenter);
        line_start4->setReadOnly(true);

        gridLayout->addWidget(line_start4, 4, 1, 1, 1);

        line_start5 = new QLineEdit(centralWidget);
        line_start5->setObjectName(QStringLiteral("line_start5"));
        line_start5->setMinimumSize(QSize(100, 26));
        line_start5->setAlignment(Qt::AlignCenter);
        line_start5->setReadOnly(true);

        gridLayout->addWidget(line_start5, 5, 1, 1, 1);

        line_start6 = new QLineEdit(centralWidget);
        line_start6->setObjectName(QStringLiteral("line_start6"));
        line_start6->setMinimumSize(QSize(100, 26));
        line_start6->setAlignment(Qt::AlignCenter);
        line_start6->setReadOnly(true);

        gridLayout->addWidget(line_start6, 6, 1, 1, 1);

        line_start7 = new QLineEdit(centralWidget);
        line_start7->setObjectName(QStringLiteral("line_start7"));
        line_start7->setMinimumSize(QSize(100, 26));
        line_start7->setAlignment(Qt::AlignCenter);
        line_start7->setReadOnly(true);

        gridLayout->addWidget(line_start7, 7, 1, 1, 1);

        line_start8 = new QLineEdit(centralWidget);
        line_start8->setObjectName(QStringLiteral("line_start8"));
        line_start8->setMinimumSize(QSize(100, 26));
        line_start8->setAlignment(Qt::AlignCenter);
        line_start8->setReadOnly(true);

        gridLayout->addWidget(line_start8, 8, 1, 1, 1);

        line_start9 = new QLineEdit(centralWidget);
        line_start9->setObjectName(QStringLiteral("line_start9"));
        line_start9->setMinimumSize(QSize(100, 26));
        line_start9->setAlignment(Qt::AlignCenter);
        line_start9->setReadOnly(true);

        gridLayout->addWidget(line_start9, 9, 1, 1, 1);

        line_start10 = new QLineEdit(centralWidget);
        line_start10->setObjectName(QStringLiteral("line_start10"));
        line_start10->setMinimumSize(QSize(100, 26));
        line_start10->setAlignment(Qt::AlignCenter);
        line_start10->setReadOnly(true);

        gridLayout->addWidget(line_start10, 10, 1, 1, 1);

        line_stop1 = new QLineEdit(centralWidget);
        line_stop1->setObjectName(QStringLiteral("line_stop1"));
        line_stop1->setMinimumSize(QSize(100, 26));
        line_stop1->setAlignment(Qt::AlignCenter);
        line_stop1->setReadOnly(true);

        gridLayout->addWidget(line_stop1, 1, 2, 1, 1);

        line_stop2 = new QLineEdit(centralWidget);
        line_stop2->setObjectName(QStringLiteral("line_stop2"));
        line_stop2->setMinimumSize(QSize(100, 26));
        line_stop2->setAlignment(Qt::AlignCenter);
        line_stop2->setReadOnly(true);

        gridLayout->addWidget(line_stop2, 2, 2, 1, 1);

        line_stop3 = new QLineEdit(centralWidget);
        line_stop3->setObjectName(QStringLiteral("line_stop3"));
        line_stop3->setMinimumSize(QSize(100, 26));
        line_stop3->setAlignment(Qt::AlignCenter);
        line_stop3->setReadOnly(true);

        gridLayout->addWidget(line_stop3, 3, 2, 1, 1);

        line_stop4 = new QLineEdit(centralWidget);
        line_stop4->setObjectName(QStringLiteral("line_stop4"));
        line_stop4->setMinimumSize(QSize(100, 26));
        line_stop4->setAlignment(Qt::AlignCenter);
        line_stop4->setReadOnly(true);

        gridLayout->addWidget(line_stop4, 4, 2, 1, 1);

        line_stop5 = new QLineEdit(centralWidget);
        line_stop5->setObjectName(QStringLiteral("line_stop5"));
        line_stop5->setMinimumSize(QSize(100, 26));
        line_stop5->setAlignment(Qt::AlignCenter);
        line_stop5->setReadOnly(true);

        gridLayout->addWidget(line_stop5, 5, 2, 1, 1);

        line_stop6 = new QLineEdit(centralWidget);
        line_stop6->setObjectName(QStringLiteral("line_stop6"));
        line_stop6->setMinimumSize(QSize(100, 26));
        line_stop6->setAlignment(Qt::AlignCenter);
        line_stop6->setReadOnly(true);

        gridLayout->addWidget(line_stop6, 6, 2, 1, 1);

        line_stop7 = new QLineEdit(centralWidget);
        line_stop7->setObjectName(QStringLiteral("line_stop7"));
        line_stop7->setMinimumSize(QSize(100, 26));
        line_stop7->setAlignment(Qt::AlignCenter);
        line_stop7->setReadOnly(true);

        gridLayout->addWidget(line_stop7, 7, 2, 1, 1);

        line_stop8 = new QLineEdit(centralWidget);
        line_stop8->setObjectName(QStringLiteral("line_stop8"));
        line_stop8->setMinimumSize(QSize(100, 26));
        line_stop8->setAlignment(Qt::AlignCenter);
        line_stop8->setReadOnly(true);

        gridLayout->addWidget(line_stop8, 8, 2, 1, 1);

        line_stop9 = new QLineEdit(centralWidget);
        line_stop9->setObjectName(QStringLiteral("line_stop9"));
        line_stop9->setMinimumSize(QSize(100, 26));
        line_stop9->setAlignment(Qt::AlignCenter);
        line_stop9->setReadOnly(true);

        gridLayout->addWidget(line_stop9, 9, 2, 1, 1);

        line_stop10 = new QLineEdit(centralWidget);
        line_stop10->setObjectName(QStringLiteral("line_stop10"));
        line_stop10->setMinimumSize(QSize(100, 26));
        line_stop10->setAlignment(Qt::AlignCenter);
        line_stop10->setReadOnly(true);

        gridLayout->addWidget(line_stop10, 10, 2, 1, 1);

        line_total1 = new QLineEdit(centralWidget);
        line_total1->setObjectName(QStringLiteral("line_total1"));
        line_total1->setMinimumSize(QSize(100, 26));
        QPalette palette1;
        QBrush brush2(QColor(43, 110, 253, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        QBrush brush3(QColor(166, 165, 165, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total1->setPalette(palette1);
        line_total1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total1->setReadOnly(true);

        gridLayout->addWidget(line_total1, 1, 3, 1, 1);

        line_total2 = new QLineEdit(centralWidget);
        line_total2->setObjectName(QStringLiteral("line_total2"));
        line_total2->setMinimumSize(QSize(100, 26));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette2.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total2->setPalette(palette2);
        line_total2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total2->setReadOnly(true);

        gridLayout->addWidget(line_total2, 2, 3, 1, 1);

        line_total3 = new QLineEdit(centralWidget);
        line_total3->setObjectName(QStringLiteral("line_total3"));
        line_total3->setMinimumSize(QSize(100, 26));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette3.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total3->setPalette(palette3);
        line_total3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total3->setReadOnly(true);

        gridLayout->addWidget(line_total3, 3, 3, 1, 1);

        line_total4 = new QLineEdit(centralWidget);
        line_total4->setObjectName(QStringLiteral("line_total4"));
        line_total4->setMinimumSize(QSize(100, 26));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette4.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total4->setPalette(palette4);
        line_total4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total4->setReadOnly(true);

        gridLayout->addWidget(line_total4, 4, 3, 1, 1);

        line_total5 = new QLineEdit(centralWidget);
        line_total5->setObjectName(QStringLiteral("line_total5"));
        line_total5->setMinimumSize(QSize(100, 26));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette5.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total5->setPalette(palette5);
        line_total5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total5->setReadOnly(true);

        gridLayout->addWidget(line_total5, 5, 3, 1, 1);

        line_total6 = new QLineEdit(centralWidget);
        line_total6->setObjectName(QStringLiteral("line_total6"));
        line_total6->setMinimumSize(QSize(100, 26));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette6.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total6->setPalette(palette6);
        line_total6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total6->setReadOnly(true);

        gridLayout->addWidget(line_total6, 6, 3, 1, 1);

        line_total7 = new QLineEdit(centralWidget);
        line_total7->setObjectName(QStringLiteral("line_total7"));
        line_total7->setMinimumSize(QSize(100, 26));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette7.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total7->setPalette(palette7);
        line_total7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total7->setReadOnly(true);

        gridLayout->addWidget(line_total7, 7, 3, 1, 1);

        line_total8 = new QLineEdit(centralWidget);
        line_total8->setObjectName(QStringLiteral("line_total8"));
        line_total8->setMinimumSize(QSize(100, 26));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette8.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total8->setPalette(palette8);
        line_total8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total8->setReadOnly(true);

        gridLayout->addWidget(line_total8, 8, 3, 1, 1);

        line_total9 = new QLineEdit(centralWidget);
        line_total9->setObjectName(QStringLiteral("line_total9"));
        line_total9->setMinimumSize(QSize(100, 26));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette9.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total9->setPalette(palette9);
        line_total9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total9->setReadOnly(true);

        gridLayout->addWidget(line_total9, 9, 3, 1, 1);

        line_total10 = new QLineEdit(centralWidget);
        line_total10->setObjectName(QStringLiteral("line_total10"));
        line_total10->setMinimumSize(QSize(100, 26));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette10.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_total10->setPalette(palette10);
        line_total10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_total10->setReadOnly(true);

        gridLayout->addWidget(line_total10, 10, 3, 1, 1);

        line_account1 = new QLineEdit(centralWidget);
        line_account1->setObjectName(QStringLiteral("line_account1"));
        line_account1->setMinimumSize(QSize(100, 26));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette11.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account1->setPalette(palette11);
        line_account1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account1->setReadOnly(true);

        gridLayout->addWidget(line_account1, 1, 4, 1, 1);

        line_account2 = new QLineEdit(centralWidget);
        line_account2->setObjectName(QStringLiteral("line_account2"));
        line_account2->setMinimumSize(QSize(100, 26));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette12.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account2->setPalette(palette12);
        line_account2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account2->setReadOnly(true);

        gridLayout->addWidget(line_account2, 2, 4, 1, 1);

        line_account3 = new QLineEdit(centralWidget);
        line_account3->setObjectName(QStringLiteral("line_account3"));
        line_account3->setMinimumSize(QSize(100, 26));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette13.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account3->setPalette(palette13);
        line_account3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account3->setReadOnly(true);

        gridLayout->addWidget(line_account3, 3, 4, 1, 1);

        line_account4 = new QLineEdit(centralWidget);
        line_account4->setObjectName(QStringLiteral("line_account4"));
        line_account4->setMinimumSize(QSize(100, 26));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette14.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account4->setPalette(palette14);
        line_account4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account4->setReadOnly(true);

        gridLayout->addWidget(line_account4, 4, 4, 1, 1);

        line_account5 = new QLineEdit(centralWidget);
        line_account5->setObjectName(QStringLiteral("line_account5"));
        line_account5->setMinimumSize(QSize(100, 26));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette15.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account5->setPalette(palette15);
        line_account5->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account5->setReadOnly(true);

        gridLayout->addWidget(line_account5, 5, 4, 1, 1);

        line_account6 = new QLineEdit(centralWidget);
        line_account6->setObjectName(QStringLiteral("line_account6"));
        line_account6->setMinimumSize(QSize(100, 26));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette16.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account6->setPalette(palette16);
        line_account6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account6->setReadOnly(true);

        gridLayout->addWidget(line_account6, 6, 4, 1, 1);

        line_account7 = new QLineEdit(centralWidget);
        line_account7->setObjectName(QStringLiteral("line_account7"));
        line_account7->setMinimumSize(QSize(100, 26));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette17.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account7->setPalette(palette17);
        line_account7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account7->setReadOnly(true);

        gridLayout->addWidget(line_account7, 7, 4, 1, 1);

        line_account8 = new QLineEdit(centralWidget);
        line_account8->setObjectName(QStringLiteral("line_account8"));
        line_account8->setMinimumSize(QSize(100, 26));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette18.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account8->setPalette(palette18);
        line_account8->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account8->setReadOnly(true);

        gridLayout->addWidget(line_account8, 8, 4, 1, 1);

        line_account9 = new QLineEdit(centralWidget);
        line_account9->setObjectName(QStringLiteral("line_account9"));
        line_account9->setMinimumSize(QSize(100, 26));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette19.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account9->setPalette(palette19);
        line_account9->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account9->setReadOnly(true);

        gridLayout->addWidget(line_account9, 9, 4, 1, 1);

        line_account10 = new QLineEdit(centralWidget);
        line_account10->setObjectName(QStringLiteral("line_account10"));
        line_account10->setMinimumSize(QSize(100, 26));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Inactive, QPalette::Text, brush2);
        palette20.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        line_account10->setPalette(palette20);
        line_account10->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        line_account10->setReadOnly(true);

        gridLayout->addWidget(line_account10, 10, 4, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        b_start1 = new QPushButton(centralWidget);
        b_start1->setObjectName(QStringLiteral("b_start1"));
        b_start1->setMinimumSize(QSize(50, 26));
        QIcon icon;
        icon.addFile(QStringLiteral(":/qrc_icons/icons/MAIA_icon_Lauch.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_start1->setIcon(icon);
        b_start1->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(b_start1);

        b_stop1 = new QPushButton(centralWidget);
        b_stop1->setObjectName(QStringLiteral("b_stop1"));
        b_stop1->setEnabled(false);
        b_stop1->setMinimumSize(QSize(50, 26));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/qrc_icons/icons/MAIA_icon_Stop.png"), QSize(), QIcon::Normal, QIcon::Off);
        b_stop1->setIcon(icon1);
        b_stop1->setIconSize(QSize(20, 20));

        horizontalLayout->addWidget(b_stop1);


        gridLayout->addLayout(horizontalLayout, 1, 5, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(2);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        b_start2 = new QPushButton(centralWidget);
        b_start2->setObjectName(QStringLiteral("b_start2"));
        b_start2->setMinimumSize(QSize(50, 26));
        b_start2->setIcon(icon);
        b_start2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(b_start2);

        b_stop2 = new QPushButton(centralWidget);
        b_stop2->setObjectName(QStringLiteral("b_stop2"));
        b_stop2->setEnabled(false);
        b_stop2->setMinimumSize(QSize(50, 26));
        b_stop2->setIcon(icon1);
        b_stop2->setIconSize(QSize(20, 20));

        horizontalLayout_2->addWidget(b_stop2);


        gridLayout->addLayout(horizontalLayout_2, 2, 5, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        b_start3 = new QPushButton(centralWidget);
        b_start3->setObjectName(QStringLiteral("b_start3"));
        b_start3->setMinimumSize(QSize(50, 26));
        b_start3->setIcon(icon);
        b_start3->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(b_start3);

        b_stop3 = new QPushButton(centralWidget);
        b_stop3->setObjectName(QStringLiteral("b_stop3"));
        b_stop3->setEnabled(false);
        b_stop3->setMinimumSize(QSize(50, 26));
        b_stop3->setIcon(icon1);
        b_stop3->setIconSize(QSize(20, 20));

        horizontalLayout_3->addWidget(b_stop3);


        gridLayout->addLayout(horizontalLayout_3, 3, 5, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(2);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        b_start4 = new QPushButton(centralWidget);
        b_start4->setObjectName(QStringLiteral("b_start4"));
        b_start4->setMinimumSize(QSize(50, 26));
        b_start4->setIcon(icon);
        b_start4->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(b_start4);

        b_stop4 = new QPushButton(centralWidget);
        b_stop4->setObjectName(QStringLiteral("b_stop4"));
        b_stop4->setEnabled(false);
        b_stop4->setMinimumSize(QSize(50, 26));
        b_stop4->setIcon(icon1);
        b_stop4->setIconSize(QSize(20, 20));

        horizontalLayout_4->addWidget(b_stop4);


        gridLayout->addLayout(horizontalLayout_4, 4, 5, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(2);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        b_start5 = new QPushButton(centralWidget);
        b_start5->setObjectName(QStringLiteral("b_start5"));
        b_start5->setMinimumSize(QSize(50, 26));
        b_start5->setIcon(icon);
        b_start5->setIconSize(QSize(20, 20));

        horizontalLayout_5->addWidget(b_start5);

        b_stop5 = new QPushButton(centralWidget);
        b_stop5->setObjectName(QStringLiteral("b_stop5"));
        b_stop5->setEnabled(false);
        b_stop5->setMinimumSize(QSize(50, 26));
        b_stop5->setIcon(icon1);
        b_stop5->setIconSize(QSize(20, 20));

        horizontalLayout_5->addWidget(b_stop5);


        gridLayout->addLayout(horizontalLayout_5, 5, 5, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(2);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        b_start6 = new QPushButton(centralWidget);
        b_start6->setObjectName(QStringLiteral("b_start6"));
        b_start6->setMinimumSize(QSize(50, 26));
        b_start6->setIcon(icon);
        b_start6->setIconSize(QSize(20, 20));

        horizontalLayout_6->addWidget(b_start6);

        b_stop6 = new QPushButton(centralWidget);
        b_stop6->setObjectName(QStringLiteral("b_stop6"));
        b_stop6->setEnabled(false);
        b_stop6->setMinimumSize(QSize(50, 26));
        b_stop6->setIcon(icon1);
        b_stop6->setIconSize(QSize(20, 20));

        horizontalLayout_6->addWidget(b_stop6);


        gridLayout->addLayout(horizontalLayout_6, 6, 5, 1, 1);

        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setSpacing(2);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        b_start7 = new QPushButton(centralWidget);
        b_start7->setObjectName(QStringLiteral("b_start7"));
        b_start7->setMinimumSize(QSize(50, 26));
        b_start7->setIcon(icon);
        b_start7->setIconSize(QSize(20, 20));

        horizontalLayout_7->addWidget(b_start7);

        b_stop7 = new QPushButton(centralWidget);
        b_stop7->setObjectName(QStringLiteral("b_stop7"));
        b_stop7->setEnabled(false);
        b_stop7->setMinimumSize(QSize(50, 26));
        b_stop7->setIcon(icon1);
        b_stop7->setIconSize(QSize(20, 20));

        horizontalLayout_7->addWidget(b_stop7);


        gridLayout->addLayout(horizontalLayout_7, 7, 5, 1, 1);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(2);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        b_start8 = new QPushButton(centralWidget);
        b_start8->setObjectName(QStringLiteral("b_start8"));
        b_start8->setMinimumSize(QSize(50, 26));
        b_start8->setIcon(icon);
        b_start8->setIconSize(QSize(20, 20));

        horizontalLayout_8->addWidget(b_start8);

        b_stop8 = new QPushButton(centralWidget);
        b_stop8->setObjectName(QStringLiteral("b_stop8"));
        b_stop8->setEnabled(false);
        b_stop8->setMinimumSize(QSize(50, 26));
        b_stop8->setIcon(icon1);
        b_stop8->setIconSize(QSize(20, 20));

        horizontalLayout_8->addWidget(b_stop8);


        gridLayout->addLayout(horizontalLayout_8, 8, 5, 1, 1);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(2);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        b_start9 = new QPushButton(centralWidget);
        b_start9->setObjectName(QStringLiteral("b_start9"));
        b_start9->setMinimumSize(QSize(50, 26));
        b_start9->setIcon(icon);
        b_start9->setIconSize(QSize(20, 20));

        horizontalLayout_9->addWidget(b_start9);

        b_stop9 = new QPushButton(centralWidget);
        b_stop9->setObjectName(QStringLiteral("b_stop9"));
        b_stop9->setEnabled(false);
        b_stop9->setMinimumSize(QSize(50, 26));
        b_stop9->setIcon(icon1);
        b_stop9->setIconSize(QSize(20, 20));

        horizontalLayout_9->addWidget(b_stop9);


        gridLayout->addLayout(horizontalLayout_9, 9, 5, 1, 1);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(2);
        horizontalLayout_10->setObjectName(QStringLiteral("horizontalLayout_10"));
        b_start10 = new QPushButton(centralWidget);
        b_start10->setObjectName(QStringLiteral("b_start10"));
        b_start10->setMinimumSize(QSize(50, 26));
        b_start10->setIcon(icon);
        b_start10->setIconSize(QSize(20, 20));

        horizontalLayout_10->addWidget(b_start10);

        b_stop10 = new QPushButton(centralWidget);
        b_stop10->setObjectName(QStringLiteral("b_stop10"));
        b_stop10->setEnabled(false);
        b_stop10->setMinimumSize(QSize(50, 26));
        b_stop10->setIcon(icon1);
        b_stop10->setIconSize(QSize(20, 20));

        horizontalLayout_10->addWidget(b_stop10);


        gridLayout->addLayout(horizontalLayout_10, 10, 5, 1, 1);


        verticalLayout->addLayout(gridLayout);

        MaiaCyberius->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MaiaCyberius);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 630, 19));
        MaiaCyberius->setMenuBar(menuBar);
        QWidget::setTabOrder(b_start1, b_stop1);
        QWidget::setTabOrder(b_stop1, b_start2);
        QWidget::setTabOrder(b_start2, b_stop2);
        QWidget::setTabOrder(b_stop2, b_start3);
        QWidget::setTabOrder(b_start3, b_stop3);
        QWidget::setTabOrder(b_stop3, b_start4);
        QWidget::setTabOrder(b_start4, b_stop4);
        QWidget::setTabOrder(b_stop4, b_start5);
        QWidget::setTabOrder(b_start5, b_stop5);
        QWidget::setTabOrder(b_stop5, b_start6);
        QWidget::setTabOrder(b_start6, b_stop6);
        QWidget::setTabOrder(b_stop6, b_start7);
        QWidget::setTabOrder(b_start7, b_stop7);
        QWidget::setTabOrder(b_stop7, b_start8);
        QWidget::setTabOrder(b_start8, b_stop8);
        QWidget::setTabOrder(b_stop8, b_start9);
        QWidget::setTabOrder(b_start9, b_stop9);
        QWidget::setTabOrder(b_stop9, b_start10);
        QWidget::setTabOrder(b_start10, b_stop10);
        QWidget::setTabOrder(b_stop10, line_start1);
        QWidget::setTabOrder(line_start1, line_stop1);
        QWidget::setTabOrder(line_stop1, line_total1);
        QWidget::setTabOrder(line_total1, line_account1);
        QWidget::setTabOrder(line_account1, line_start2);
        QWidget::setTabOrder(line_start2, line_stop2);
        QWidget::setTabOrder(line_stop2, line_total2);
        QWidget::setTabOrder(line_total2, line_account2);
        QWidget::setTabOrder(line_account2, line_start3);
        QWidget::setTabOrder(line_start3, line_stop3);
        QWidget::setTabOrder(line_stop3, line_total3);
        QWidget::setTabOrder(line_total3, line_account3);
        QWidget::setTabOrder(line_account3, line_start4);
        QWidget::setTabOrder(line_start4, line_stop4);
        QWidget::setTabOrder(line_stop4, line_total4);
        QWidget::setTabOrder(line_total4, line_account4);
        QWidget::setTabOrder(line_account4, line_start5);
        QWidget::setTabOrder(line_start5, line_stop5);
        QWidget::setTabOrder(line_stop5, line_total5);
        QWidget::setTabOrder(line_total5, line_account5);
        QWidget::setTabOrder(line_account5, line_start6);
        QWidget::setTabOrder(line_start6, line_stop6);
        QWidget::setTabOrder(line_stop6, line_total6);
        QWidget::setTabOrder(line_total6, line_account6);
        QWidget::setTabOrder(line_account6, line_start7);
        QWidget::setTabOrder(line_start7, line_stop7);
        QWidget::setTabOrder(line_stop7, line_total7);
        QWidget::setTabOrder(line_total7, line_account7);
        QWidget::setTabOrder(line_account7, line_start8);
        QWidget::setTabOrder(line_start8, line_stop8);
        QWidget::setTabOrder(line_stop8, line_total8);
        QWidget::setTabOrder(line_total8, line_account8);
        QWidget::setTabOrder(line_account8, line_start9);
        QWidget::setTabOrder(line_start9, line_stop9);
        QWidget::setTabOrder(line_stop9, line_total9);
        QWidget::setTabOrder(line_total9, line_account9);
        QWidget::setTabOrder(line_account9, line_start10);
        QWidget::setTabOrder(line_start10, line_stop10);
        QWidget::setTabOrder(line_stop10, line_total10);
        QWidget::setTabOrder(line_total10, line_account10);
        QWidget::setTabOrder(line_account10, line_date);

        retranslateUi(MaiaCyberius);

        QMetaObject::connectSlotsByName(MaiaCyberius);
    } // setupUi

    void retranslateUi(QMainWindow *MaiaCyberius)
    {
        MaiaCyberius->setWindowTitle(QString());
        label_17->setText(QApplication::translate("MaiaCyberius", "Date:", 0));
        line_date->setText(QApplication::translate("MaiaCyberius", "Current date", 0));
        label_18->setText(QApplication::translate("MaiaCyberius", "Time:", 0));
        line_time->setText(QApplication::translate("MaiaCyberius", "Current time", 0));
        label_4->setText(QApplication::translate("MaiaCyberius", "MC3", 0));
        label_6->setText(QApplication::translate("MaiaCyberius", "MC7", 0));
        label_10->setText(QApplication::translate("MaiaCyberius", "MC9", 0));
        label_15->setText(QApplication::translate("MaiaCyberius", "Account", 0));
        label_3->setText(QApplication::translate("MaiaCyberius", "MC2", 0));
        label_14->setText(QApplication::translate("MaiaCyberius", "Total", 0));
        label_7->setText(QApplication::translate("MaiaCyberius", "MC4", 0));
        label_8->setText(QApplication::translate("MaiaCyberius", "MC5", 0));
        label->setText(QApplication::translate("MaiaCyberius", "MCs", 0));
        label_13->setText(QApplication::translate("MaiaCyberius", "Stop", 0));
        label_16->setText(QApplication::translate("MaiaCyberius", "MCs Status", 0));
        label_12->setText(QApplication::translate("MaiaCyberius", "Start", 0));
        label_5->setText(QApplication::translate("MaiaCyberius", "MC6", 0));
        label_2->setText(QApplication::translate("MaiaCyberius", "MC1", 0));
        label_9->setText(QApplication::translate("MaiaCyberius", "MC8", 0));
        label_11->setText(QApplication::translate("MaiaCyberius", "MC10", 0));
        b_start1->setText(QString());
        b_stop1->setText(QString());
        b_start2->setText(QString());
        b_stop2->setText(QString());
        b_start3->setText(QString());
        b_stop3->setText(QString());
        b_start4->setText(QString());
        b_stop4->setText(QString());
        b_start5->setText(QString());
        b_stop5->setText(QString());
        b_start6->setText(QString());
        b_stop6->setText(QString());
        b_start7->setText(QString());
        b_stop7->setText(QString());
        b_start8->setText(QString());
        b_stop8->setText(QString());
        b_start9->setText(QString());
        b_stop9->setText(QString());
        b_start10->setText(QString());
        b_stop10->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MaiaCyberius: public Ui_MaiaCyberius {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIACYBERIUS_H
