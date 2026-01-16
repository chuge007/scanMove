/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *IP_Edit;
    QLabel *label_2;
    QLineEdit *port_Edit;
    QPushButton *connectBtn;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout;
    QWidget *widget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_10;
    QLineEdit *x_velocity;
    QLabel *label_14;
    QWidget *widget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_11;
    QLineEdit *y_velocity;
    QLabel *label_15;
    QWidget *widget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_13;
    QLineEdit *jog_velocity;
    QLabel *label_19;
    QWidget *widget_5;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_20;
    QLineEdit *backOrigin_velocity;
    QLabel *label_32;
    QWidget *widget_6;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_21;
    QLineEdit *scan_velocity;
    QLabel *label_33;
    QWidget *widget_7;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_22;
    QLineEdit *jog_add_sub_velocity;
    QLabel *label_34;
    QHBoxLayout *horizontalLayout_14;
    QPushButton *setMachineBtn;
    QPushButton *setLimitBtn;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_3;
    QLineEdit *x_lenght;
    QLabel *label_16;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_4;
    QLineEdit *y_lenght;
    QLabel *label_17;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_5;
    QLineEdit *y_step;
    QLabel *label_18;
    QHBoxLayout *horizontalLayout_11;
    QPushButton *startScanBtn;
    QPushButton *stopScanBtn;
    QPushButton *endScanBtn;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout_15;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_12;
    QPushButton *alarmResetBtn;
    QPushButton *setOriginBtn;
    QCheckBox *singleScan;
    QGridLayout *gridLayout_3;
    QLabel *label_6;
    QLabel *xCurPos;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *yCurPos;
    QLabel *label_9;
    QTabWidget *tabWidget;
    QWidget *widget;
    QHBoxLayout *horizontalLayout_13;
    QGridLayout *gridLayout;
    QPushButton *xAddBtn;
    QPushButton *xSubBtn;
    QPushButton *yAddBtn;
    QPushButton *ySubBtn;
    QPushButton *zAddBtn;
    QPushButton *zSubBtn;
    QPushButton *rAddBtn;
    QPushButton *rSubBtn;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_12;
    QRadioButton *jogStep_5;
    QRadioButton *jogStep_1;
    QRadioButton *jogStep_10;
    QWidget *tabWidgetPage2;
    QGridLayout *gridLayout_2;
    QPushButton *xAddBtn_2;
    QPushButton *yAddBtn_2;
    QPushButton *ySubBtn_2;
    QPushButton *xSubBtn_2;
    QPushButton *zAddBtn_2;
    QPushButton *zSubBtn_2;
    QPushButton *rAddBtn_2;
    QPushButton *rSubBtn_2;
    QWidget *tab;
    QGridLayout *gridLayout_6;
    QVBoxLayout *verticalLayout_5;
    QGridLayout *gridLayout_5;
    QLabel *label_24;
    QDoubleSpinBox *yTargetPos;
    QLabel *label_23;
    QDoubleSpinBox *xTargetPos;
    QLabel *label_25;
    QLabel *label_26;
    QPushButton *pushButton;
    QWidget *tab_2;
    QCheckBox *manualBox;
    QPushButton *nextBtn;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(702, 671);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout_4 = new QGridLayout(centralWidget);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        QFont font;
        font.setPointSize(15);
        groupBox->setFont(font);
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label);

        IP_Edit = new QLineEdit(groupBox);
        IP_Edit->setObjectName(QString::fromUtf8("IP_Edit"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(IP_Edit->sizePolicy().hasHeightForWidth());
        IP_Edit->setSizePolicy(sizePolicy);
        IP_Edit->setFont(font);

        horizontalLayout->addWidget(IP_Edit);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);
        label_2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        horizontalLayout->addWidget(label_2);

        port_Edit = new QLineEdit(groupBox);
        port_Edit->setObjectName(QString::fromUtf8("port_Edit"));
        sizePolicy.setHeightForWidth(port_Edit->sizePolicy().hasHeightForWidth());
        port_Edit->setSizePolicy(sizePolicy);
        port_Edit->setFont(font);

        horizontalLayout->addWidget(port_Edit);

        connectBtn = new QPushButton(groupBox);
        connectBtn->setObjectName(QString::fromUtf8("connectBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(connectBtn->sizePolicy().hasHeightForWidth());
        connectBtn->setSizePolicy(sizePolicy1);
        connectBtn->setMinimumSize(QSize(130, 0));
        connectBtn->setFont(font);

        horizontalLayout->addWidget(connectBtn);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 3);
        horizontalLayout->setStretch(2, 1);
        horizontalLayout->setStretch(3, 1);

        gridLayout_4->addWidget(groupBox, 0, 0, 1, 2);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        QFont font1;
        font1.setPointSize(14);
        groupBox_4->setFont(font1);
        verticalLayout = new QVBoxLayout(groupBox_4);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(12, 12, 12, 12);
        widget_2 = new QWidget(groupBox_4);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        horizontalLayout_2 = new QHBoxLayout(widget_2);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(widget_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_2->addWidget(label_10);

        x_velocity = new QLineEdit(widget_2);
        x_velocity->setObjectName(QString::fromUtf8("x_velocity"));
        sizePolicy.setHeightForWidth(x_velocity->sizePolicy().hasHeightForWidth());
        x_velocity->setSizePolicy(sizePolicy);
        x_velocity->setFont(font);

        horizontalLayout_2->addWidget(x_velocity);

        label_14 = new QLabel(widget_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        horizontalLayout_2->addWidget(label_14);


        verticalLayout->addWidget(widget_2);

        widget_3 = new QWidget(groupBox_4);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        horizontalLayout_3 = new QHBoxLayout(widget_3);
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_11 = new QLabel(widget_3);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_3->addWidget(label_11);

        y_velocity = new QLineEdit(widget_3);
        y_velocity->setObjectName(QString::fromUtf8("y_velocity"));
        sizePolicy.setHeightForWidth(y_velocity->sizePolicy().hasHeightForWidth());
        y_velocity->setSizePolicy(sizePolicy);
        y_velocity->setFont(font);

        horizontalLayout_3->addWidget(y_velocity);

        label_15 = new QLabel(widget_3);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_3->addWidget(label_15);


        verticalLayout->addWidget(widget_3);

        widget_4 = new QWidget(groupBox_4);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        horizontalLayout_4 = new QHBoxLayout(widget_4);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_13 = new QLabel(widget_4);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_4->addWidget(label_13);

        jog_velocity = new QLineEdit(widget_4);
        jog_velocity->setObjectName(QString::fromUtf8("jog_velocity"));
        sizePolicy.setHeightForWidth(jog_velocity->sizePolicy().hasHeightForWidth());
        jog_velocity->setSizePolicy(sizePolicy);
        jog_velocity->setFont(font);

        horizontalLayout_4->addWidget(jog_velocity);

        label_19 = new QLabel(widget_4);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_4->addWidget(label_19);


        verticalLayout->addWidget(widget_4);

        widget_5 = new QWidget(groupBox_4);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        horizontalLayout_5 = new QHBoxLayout(widget_5);
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_20 = new QLabel(widget_5);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_5->addWidget(label_20);

        backOrigin_velocity = new QLineEdit(widget_5);
        backOrigin_velocity->setObjectName(QString::fromUtf8("backOrigin_velocity"));
        sizePolicy.setHeightForWidth(backOrigin_velocity->sizePolicy().hasHeightForWidth());
        backOrigin_velocity->setSizePolicy(sizePolicy);
        backOrigin_velocity->setFont(font);

        horizontalLayout_5->addWidget(backOrigin_velocity);

        label_32 = new QLabel(widget_5);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_5->addWidget(label_32);


        verticalLayout->addWidget(widget_5);

        widget_6 = new QWidget(groupBox_4);
        widget_6->setObjectName(QString::fromUtf8("widget_6"));
        horizontalLayout_6 = new QHBoxLayout(widget_6);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_6->setContentsMargins(0, 0, 0, 0);
        label_21 = new QLabel(widget_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_6->addWidget(label_21);

        scan_velocity = new QLineEdit(widget_6);
        scan_velocity->setObjectName(QString::fromUtf8("scan_velocity"));
        sizePolicy.setHeightForWidth(scan_velocity->sizePolicy().hasHeightForWidth());
        scan_velocity->setSizePolicy(sizePolicy);
        scan_velocity->setFont(font);

        horizontalLayout_6->addWidget(scan_velocity);

        label_33 = new QLabel(widget_6);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_6->addWidget(label_33);


        verticalLayout->addWidget(widget_6);

        widget_7 = new QWidget(groupBox_4);
        widget_7->setObjectName(QString::fromUtf8("widget_7"));
        horizontalLayout_7 = new QHBoxLayout(widget_7);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        horizontalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_22 = new QLabel(widget_7);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_7->addWidget(label_22);

        jog_add_sub_velocity = new QLineEdit(widget_7);
        jog_add_sub_velocity->setObjectName(QString::fromUtf8("jog_add_sub_velocity"));
        sizePolicy.setHeightForWidth(jog_add_sub_velocity->sizePolicy().hasHeightForWidth());
        jog_add_sub_velocity->setSizePolicy(sizePolicy);
        jog_add_sub_velocity->setFont(font);

        horizontalLayout_7->addWidget(jog_add_sub_velocity);

        label_34 = new QLabel(widget_7);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_7->addWidget(label_34);


        verticalLayout->addWidget(widget_7);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setSpacing(6);
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        setMachineBtn = new QPushButton(groupBox_4);
        setMachineBtn->setObjectName(QString::fromUtf8("setMachineBtn"));
        sizePolicy1.setHeightForWidth(setMachineBtn->sizePolicy().hasHeightForWidth());
        setMachineBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(setMachineBtn);

        setLimitBtn = new QPushButton(groupBox_4);
        setLimitBtn->setObjectName(QString::fromUtf8("setLimitBtn"));
        sizePolicy1.setHeightForWidth(setLimitBtn->sizePolicy().hasHeightForWidth());
        setLimitBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_14->addWidget(setLimitBtn);


        verticalLayout->addLayout(horizontalLayout_14);


        gridLayout_4->addWidget(groupBox_4, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox_2);
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setContentsMargins(11, 11, 11, 11);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(12, 12, 12, 12);
        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_3 = new QLabel(groupBox_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout_8->addWidget(label_3);

        x_lenght = new QLineEdit(groupBox_2);
        x_lenght->setObjectName(QString::fromUtf8("x_lenght"));
        sizePolicy.setHeightForWidth(x_lenght->sizePolicy().hasHeightForWidth());
        x_lenght->setSizePolicy(sizePolicy);
        x_lenght->setFont(font);

        horizontalLayout_8->addWidget(x_lenght);

        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_8->addWidget(label_16);


        verticalLayout_2->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setFont(font);

        horizontalLayout_9->addWidget(label_4);

        y_lenght = new QLineEdit(groupBox_2);
        y_lenght->setObjectName(QString::fromUtf8("y_lenght"));
        sizePolicy.setHeightForWidth(y_lenght->sizePolicy().hasHeightForWidth());
        y_lenght->setSizePolicy(sizePolicy);
        y_lenght->setFont(font);

        horizontalLayout_9->addWidget(y_lenght);

        label_17 = new QLabel(groupBox_2);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_9->addWidget(label_17);


        verticalLayout_2->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setSpacing(6);
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_5 = new QLabel(groupBox_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setFont(font);

        horizontalLayout_10->addWidget(label_5);

        y_step = new QLineEdit(groupBox_2);
        y_step->setObjectName(QString::fromUtf8("y_step"));
        sizePolicy.setHeightForWidth(y_step->sizePolicy().hasHeightForWidth());
        y_step->setSizePolicy(sizePolicy);
        y_step->setFont(font);

        horizontalLayout_10->addWidget(y_step);

        label_18 = new QLabel(groupBox_2);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_10->addWidget(label_18);


        verticalLayout_2->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        startScanBtn = new QPushButton(groupBox_2);
        startScanBtn->setObjectName(QString::fromUtf8("startScanBtn"));
        sizePolicy1.setHeightForWidth(startScanBtn->sizePolicy().hasHeightForWidth());
        startScanBtn->setSizePolicy(sizePolicy1);
        startScanBtn->setFont(font1);

        horizontalLayout_11->addWidget(startScanBtn);

        stopScanBtn = new QPushButton(groupBox_2);
        stopScanBtn->setObjectName(QString::fromUtf8("stopScanBtn"));
        sizePolicy1.setHeightForWidth(stopScanBtn->sizePolicy().hasHeightForWidth());
        stopScanBtn->setSizePolicy(sizePolicy1);
        stopScanBtn->setFont(font1);

        horizontalLayout_11->addWidget(stopScanBtn);

        endScanBtn = new QPushButton(groupBox_2);
        endScanBtn->setObjectName(QString::fromUtf8("endScanBtn"));
        sizePolicy1.setHeightForWidth(endScanBtn->sizePolicy().hasHeightForWidth());
        endScanBtn->setSizePolicy(sizePolicy1);
        endScanBtn->setFont(font1);

        horizontalLayout_11->addWidget(endScanBtn);


        verticalLayout_2->addLayout(horizontalLayout_11);


        gridLayout_4->addWidget(groupBox_2, 1, 1, 1, 1);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setFont(font1);
        horizontalLayout_15 = new QHBoxLayout(groupBox_3);
        horizontalLayout_15->setSpacing(6);
        horizontalLayout_15->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        alarmResetBtn = new QPushButton(groupBox_3);
        alarmResetBtn->setObjectName(QString::fromUtf8("alarmResetBtn"));
        sizePolicy1.setHeightForWidth(alarmResetBtn->sizePolicy().hasHeightForWidth());
        alarmResetBtn->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(alarmResetBtn);

        setOriginBtn = new QPushButton(groupBox_3);
        setOriginBtn->setObjectName(QString::fromUtf8("setOriginBtn"));
        sizePolicy1.setHeightForWidth(setOriginBtn->sizePolicy().hasHeightForWidth());
        setOriginBtn->setSizePolicy(sizePolicy1);
        setOriginBtn->setFont(font1);

        horizontalLayout_12->addWidget(setOriginBtn);

        singleScan = new QCheckBox(groupBox_3);
        singleScan->setObjectName(QString::fromUtf8("singleScan"));
        sizePolicy1.setHeightForWidth(singleScan->sizePolicy().hasHeightForWidth());
        singleScan->setSizePolicy(sizePolicy1);

        horizontalLayout_12->addWidget(singleScan);


        verticalLayout_4->addLayout(horizontalLayout_12);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_6 = new QLabel(groupBox_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setFont(font);
        label_6->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_6, 0, 0, 1, 1);

        xCurPos = new QLabel(groupBox_3);
        xCurPos->setObjectName(QString::fromUtf8("xCurPos"));
        xCurPos->setFont(font);

        gridLayout_3->addWidget(xCurPos, 0, 1, 1, 1);

        label_8 = new QLabel(groupBox_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setFont(font);

        gridLayout_3->addWidget(label_8, 0, 2, 1, 1);

        label_7 = new QLabel(groupBox_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setFont(font);
        label_7->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        gridLayout_3->addWidget(label_7, 1, 0, 1, 1);

        yCurPos = new QLabel(groupBox_3);
        yCurPos->setObjectName(QString::fromUtf8("yCurPos"));
        yCurPos->setFont(font);

        gridLayout_3->addWidget(yCurPos, 1, 1, 1, 1);

        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setFont(font);

        gridLayout_3->addWidget(label_9, 1, 2, 1, 1);

        gridLayout_3->setColumnStretch(0, 2);
        gridLayout_3->setColumnStretch(1, 2);
        gridLayout_3->setColumnStretch(2, 1);

        verticalLayout_4->addLayout(gridLayout_3);

        verticalLayout_4->setStretch(0, 1);
        verticalLayout_4->setStretch(1, 2);

        horizontalLayout_15->addLayout(verticalLayout_4);

        tabWidget = new QTabWidget(groupBox_3);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setEnabled(true);
        tabWidget->setFont(font1);
        widget = new QWidget();
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setEnabled(false);
        horizontalLayout_13 = new QHBoxLayout(widget);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        xAddBtn = new QPushButton(widget);
        xAddBtn->setObjectName(QString::fromUtf8("xAddBtn"));
        sizePolicy1.setHeightForWidth(xAddBtn->sizePolicy().hasHeightForWidth());
        xAddBtn->setSizePolicy(sizePolicy1);
        xAddBtn->setAutoRepeat(true);
        xAddBtn->setAutoExclusive(false);

        gridLayout->addWidget(xAddBtn, 0, 0, 1, 1);

        xSubBtn = new QPushButton(widget);
        xSubBtn->setObjectName(QString::fromUtf8("xSubBtn"));
        sizePolicy1.setHeightForWidth(xSubBtn->sizePolicy().hasHeightForWidth());
        xSubBtn->setSizePolicy(sizePolicy1);
        xSubBtn->setAutoRepeat(true);
        xSubBtn->setAutoExclusive(false);

        gridLayout->addWidget(xSubBtn, 0, 1, 1, 1);

        yAddBtn = new QPushButton(widget);
        yAddBtn->setObjectName(QString::fromUtf8("yAddBtn"));
        sizePolicy1.setHeightForWidth(yAddBtn->sizePolicy().hasHeightForWidth());
        yAddBtn->setSizePolicy(sizePolicy1);
        yAddBtn->setAutoRepeat(true);
        yAddBtn->setAutoExclusive(false);

        gridLayout->addWidget(yAddBtn, 1, 0, 1, 1);

        ySubBtn = new QPushButton(widget);
        ySubBtn->setObjectName(QString::fromUtf8("ySubBtn"));
        sizePolicy1.setHeightForWidth(ySubBtn->sizePolicy().hasHeightForWidth());
        ySubBtn->setSizePolicy(sizePolicy1);
        ySubBtn->setAutoRepeat(true);
        ySubBtn->setAutoExclusive(false);

        gridLayout->addWidget(ySubBtn, 1, 1, 1, 1);

        zAddBtn = new QPushButton(widget);
        zAddBtn->setObjectName(QString::fromUtf8("zAddBtn"));

        gridLayout->addWidget(zAddBtn, 0, 2, 1, 1);

        zSubBtn = new QPushButton(widget);
        zSubBtn->setObjectName(QString::fromUtf8("zSubBtn"));

        gridLayout->addWidget(zSubBtn, 0, 3, 1, 1);

        rAddBtn = new QPushButton(widget);
        rAddBtn->setObjectName(QString::fromUtf8("rAddBtn"));

        gridLayout->addWidget(rAddBtn, 1, 2, 1, 1);

        rSubBtn = new QPushButton(widget);
        rSubBtn->setObjectName(QString::fromUtf8("rSubBtn"));

        gridLayout->addWidget(rSubBtn, 1, 3, 1, 1);


        horizontalLayout_13->addLayout(gridLayout);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        label_12 = new QLabel(widget);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setFont(font1);

        verticalLayout_3->addWidget(label_12);

        jogStep_5 = new QRadioButton(widget);
        jogStep_5->setObjectName(QString::fromUtf8("jogStep_5"));
        jogStep_5->setFont(font1);
        jogStep_5->setChecked(false);

        verticalLayout_3->addWidget(jogStep_5);

        jogStep_1 = new QRadioButton(widget);
        jogStep_1->setObjectName(QString::fromUtf8("jogStep_1"));
        jogStep_1->setFont(font1);
        jogStep_1->setChecked(true);

        verticalLayout_3->addWidget(jogStep_1);

        jogStep_10 = new QRadioButton(widget);
        jogStep_10->setObjectName(QString::fromUtf8("jogStep_10"));
        jogStep_10->setFont(font1);

        verticalLayout_3->addWidget(jogStep_10);


        horizontalLayout_13->addLayout(verticalLayout_3);

        horizontalLayout_13->setStretch(0, 1);
        tabWidget->addTab(widget, QString());
        tabWidgetPage2 = new QWidget();
        tabWidgetPage2->setObjectName(QString::fromUtf8("tabWidgetPage2"));
        gridLayout_2 = new QGridLayout(tabWidgetPage2);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        xAddBtn_2 = new QPushButton(tabWidgetPage2);
        xAddBtn_2->setObjectName(QString::fromUtf8("xAddBtn_2"));
        sizePolicy1.setHeightForWidth(xAddBtn_2->sizePolicy().hasHeightForWidth());
        xAddBtn_2->setSizePolicy(sizePolicy1);
        xAddBtn_2->setAutoRepeat(false);
        xAddBtn_2->setAutoExclusive(false);

        gridLayout_2->addWidget(xAddBtn_2, 0, 0, 1, 1);

        yAddBtn_2 = new QPushButton(tabWidgetPage2);
        yAddBtn_2->setObjectName(QString::fromUtf8("yAddBtn_2"));
        sizePolicy1.setHeightForWidth(yAddBtn_2->sizePolicy().hasHeightForWidth());
        yAddBtn_2->setSizePolicy(sizePolicy1);
        yAddBtn_2->setAutoRepeat(false);
        yAddBtn_2->setAutoExclusive(false);

        gridLayout_2->addWidget(yAddBtn_2, 1, 0, 1, 1);

        ySubBtn_2 = new QPushButton(tabWidgetPage2);
        ySubBtn_2->setObjectName(QString::fromUtf8("ySubBtn_2"));
        sizePolicy1.setHeightForWidth(ySubBtn_2->sizePolicy().hasHeightForWidth());
        ySubBtn_2->setSizePolicy(sizePolicy1);
        ySubBtn_2->setAutoRepeat(false);
        ySubBtn_2->setAutoExclusive(false);

        gridLayout_2->addWidget(ySubBtn_2, 1, 1, 1, 1);

        xSubBtn_2 = new QPushButton(tabWidgetPage2);
        xSubBtn_2->setObjectName(QString::fromUtf8("xSubBtn_2"));
        sizePolicy1.setHeightForWidth(xSubBtn_2->sizePolicy().hasHeightForWidth());
        xSubBtn_2->setSizePolicy(sizePolicy1);
        xSubBtn_2->setAutoRepeat(false);
        xSubBtn_2->setAutoExclusive(false);

        gridLayout_2->addWidget(xSubBtn_2, 0, 1, 1, 1);

        zAddBtn_2 = new QPushButton(tabWidgetPage2);
        zAddBtn_2->setObjectName(QString::fromUtf8("zAddBtn_2"));

        gridLayout_2->addWidget(zAddBtn_2, 0, 2, 1, 1);

        zSubBtn_2 = new QPushButton(tabWidgetPage2);
        zSubBtn_2->setObjectName(QString::fromUtf8("zSubBtn_2"));

        gridLayout_2->addWidget(zSubBtn_2, 0, 3, 1, 1);

        rAddBtn_2 = new QPushButton(tabWidgetPage2);
        rAddBtn_2->setObjectName(QString::fromUtf8("rAddBtn_2"));

        gridLayout_2->addWidget(rAddBtn_2, 1, 2, 1, 1);

        rSubBtn_2 = new QPushButton(tabWidgetPage2);
        rSubBtn_2->setObjectName(QString::fromUtf8("rSubBtn_2"));

        gridLayout_2->addWidget(rSubBtn_2, 1, 3, 1, 1);

        tabWidget->addTab(tabWidgetPage2, QString());
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        gridLayout_6 = new QGridLayout(tab);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_24 = new QLabel(tab);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        gridLayout_5->addWidget(label_24, 1, 0, 1, 1);

        yTargetPos = new QDoubleSpinBox(tab);
        yTargetPos->setObjectName(QString::fromUtf8("yTargetPos"));
        yTargetPos->setButtonSymbols(QAbstractSpinBox::NoButtons);
        yTargetPos->setMinimum(0.000000000000000);
        yTargetPos->setMaximum(100.000000000000000);
        yTargetPos->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(yTargetPos, 1, 1, 1, 1);

        label_23 = new QLabel(tab);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        gridLayout_5->addWidget(label_23, 0, 0, 1, 1);

        xTargetPos = new QDoubleSpinBox(tab);
        xTargetPos->setObjectName(QString::fromUtf8("xTargetPos"));
        xTargetPos->setButtonSymbols(QAbstractSpinBox::NoButtons);
        xTargetPos->setMinimum(0.000000000000000);
        xTargetPos->setMaximum(100.000000000000000);
        xTargetPos->setSingleStep(0.000000000000000);

        gridLayout_5->addWidget(xTargetPos, 0, 1, 1, 1);

        label_25 = new QLabel(tab);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_5->addWidget(label_25, 0, 2, 1, 1);

        label_26 = new QLabel(tab);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_5->addWidget(label_26, 1, 2, 1, 1);

        gridLayout_5->setColumnStretch(0, 2);
        gridLayout_5->setColumnStretch(1, 3);
        gridLayout_5->setColumnStretch(2, 1);

        verticalLayout_5->addLayout(gridLayout_5);

        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        verticalLayout_5->addWidget(pushButton);


        gridLayout_6->addLayout(verticalLayout_5, 0, 0, 1, 1);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        manualBox = new QCheckBox(tab_2);
        manualBox->setObjectName(QString::fromUtf8("manualBox"));
        manualBox->setGeometry(QRect(60, 20, 121, 41));
        nextBtn = new QPushButton(tab_2);
        nextBtn->setObjectName(QString::fromUtf8("nextBtn"));
        nextBtn->setGeometry(QRect(60, 70, 121, 41));
        tabWidget->addTab(tab_2, QString());

        horizontalLayout_15->addWidget(tabWidget);


        gridLayout_4->addWidget(groupBox_3, 2, 0, 1, 2);

        gridLayout_4->setRowStretch(0, 1);
        gridLayout_4->setRowStretch(1, 3);
        gridLayout_4->setRowStretch(2, 3);
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 702, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QApplication::translate("MainWindow", "Connect Modbus Server", nullptr));
        label->setText(QApplication::translate("MainWindow", "IP:", nullptr));
        IP_Edit->setText(QApplication::translate("MainWindow", "192.168.1.88", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Port:", nullptr));
        port_Edit->setText(QApplication::translate("MainWindow", "502", nullptr));
        connectBtn->setText(QApplication::translate("MainWindow", "connect", nullptr));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "Scan Set", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "X\350\275\264\351\200\237\345\272\246\357\274\232", nullptr));
        label_14->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "Y\350\275\264\351\200\237\345\272\246\357\274\232", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "\347\202\271\345\212\250\351\200\237\345\272\246\357\274\232", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "\345\233\236\345\216\237\347\202\271\351\200\237\345\272\246\357\274\232", nullptr));
        label_32->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "\346\211\253\346\237\245\351\200\237\345\272\246\357\274\232", nullptr));
        label_33->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "\347\202\271\345\212\250\345\212\240\345\207\217\351\200\237\357\274\232", nullptr));
        label_34->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        setMachineBtn->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\234\272\346\242\260\345\216\237\347\202\271", nullptr));
        setLimitBtn->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\346\234\272\346\242\260\346\236\201\351\231\220\347\202\271", nullptr));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "Scan Config", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\211\253\346\237\245X\350\275\264\357\274\232", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\211\253\346\237\245Y\350\275\264\357\274\232", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "Y\350\275\264\346\255\245\350\277\233\357\274\232", nullptr));
        label_18->setText(QApplication::translate("MainWindow", "mm", nullptr));
        startScanBtn->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\211\253\346\237\245", nullptr));
        stopScanBtn->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234\346\211\253\346\237\245", nullptr));
        endScanBtn->setText(QApplication::translate("MainWindow", "\347\273\223\346\235\237\346\211\253\346\237\245", nullptr));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "Scan Control", nullptr));
        alarmResetBtn->setText(QApplication::translate("MainWindow", "\346\212\245\350\255\246\345\244\215\344\275\215", nullptr));
        setOriginBtn->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256\350\265\267\347\202\271", nullptr));
        singleScan->setText(QApplication::translate("MainWindow", "\345\215\225\350\276\271\346\250\241\345\274\217", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "x\350\275\264\344\275\215\347\275\256\357\274\232", nullptr));
        xCurPos->setText(QString());
        label_8->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "y\350\275\264\344\275\215\347\275\256\357\274\232", nullptr));
        yCurPos->setText(QString());
        label_9->setText(QApplication::translate("MainWindow", "mm", nullptr));
        xAddBtn->setText(QApplication::translate("MainWindow", "X+", nullptr));
        xSubBtn->setText(QApplication::translate("MainWindow", "X-", nullptr));
        yAddBtn->setText(QApplication::translate("MainWindow", "Y+", nullptr));
        ySubBtn->setText(QApplication::translate("MainWindow", "Y-", nullptr));
        zAddBtn->setText(QApplication::translate("MainWindow", "Z+", nullptr));
        zSubBtn->setText(QApplication::translate("MainWindow", "Z-", nullptr));
        rAddBtn->setText(QApplication::translate("MainWindow", "R+", nullptr));
        rSubBtn->setText(QApplication::translate("MainWindow", "R-", nullptr));
        label_12->setText(QApplication::translate("MainWindow", "\347\202\271\345\212\250\346\255\245\350\277\233\357\274\232", nullptr));
        jogStep_5->setText(QApplication::translate("MainWindow", "X5", nullptr));
        jogStep_1->setText(QApplication::translate("MainWindow", "X1", nullptr));
        jogStep_10->setText(QApplication::translate("MainWindow", "X10", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(widget), QApplication::translate("MainWindow", "\345\257\270\345\212\250", nullptr));
        xAddBtn_2->setText(QApplication::translate("MainWindow", "X+", nullptr));
        yAddBtn_2->setText(QApplication::translate("MainWindow", "Y+", nullptr));
        ySubBtn_2->setText(QApplication::translate("MainWindow", "Y-", nullptr));
        xSubBtn_2->setText(QApplication::translate("MainWindow", "X-", nullptr));
        zAddBtn_2->setText(QApplication::translate("MainWindow", "Z+", nullptr));
        zSubBtn_2->setText(QApplication::translate("MainWindow", "Z-", nullptr));
        rAddBtn_2->setText(QApplication::translate("MainWindow", "R+", nullptr));
        rSubBtn_2->setText(QApplication::translate("MainWindow", "R-", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabWidgetPage2), QApplication::translate("MainWindow", "\347\202\271\345\212\250", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "Y\347\233\256\346\240\207\344\275\215\347\275\256\357\274\232", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "X\347\233\256\346\240\207\344\275\215\347\275\256\357\274\232", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "mm", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\347\247\273\345\212\250", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "\350\276\223\345\205\245\347\247\273\345\212\250", nullptr));
        manualBox->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250\346\211\253\346\237\245", nullptr));
        nextBtn->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\255\245", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "\351\241\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
