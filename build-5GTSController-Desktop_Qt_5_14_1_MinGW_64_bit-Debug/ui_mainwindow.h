/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>
#include "qwt_dial.h"
#include "qwt_thermo.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action;
    QAction *actionInfo;
    QAction *actionparam;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *txtRmtpIP;
    QLabel *label_2;
    QLineEdit *txtRmtpPort;
    QPushButton *btnRmtpListen;
    QPushButton *btnRmtpStop;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QwtThermo *ThermoLevel;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLCDNumber *lcdLevel;
    QwtDial *DialDegree;
    QLCDNumber *lcdSignal;
    QLCDNumber *lcdDegree;
    QLCDNumber *lcdQuality;
    QLCDNumber *lcdFreq;
    QLabel *label_6;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QLabel *label_13;
    QPushButton *btnLinkDevice;
    QPushButton *btnStop;
    QLineEdit *txtDeviceIp;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_4;
    QLineEdit *txtDevicePort;
    QLabel *label_11;
    QComboBox *combDeMode;
    QLabel *label_14;
    QLabel *label_5;
    QLabel *label_15;
    QComboBox *cbAtenna;
    QComboBox *cbPolar;
    QPushButton *btnSendCmd;
    QLineEdit *txtSpan;
    QLineEdit *txtIFBW;
    QLabel *label_16;
    QPushButton *btnOptimize;
    QLineEdit *txtFreq;
    QComboBox *cbBW;
    QLabel *label_17;
    QLineEdit *txtTime;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *txtDeviceResponse;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(931, 744);
        action = new QAction(MainWindow);
        action->setObjectName(QString::fromUtf8("action"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QString::fromUtf8("actionInfo"));
        actionparam = new QAction(MainWindow);
        actionparam->setObjectName(QString::fromUtf8("actionparam"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout->addWidget(label_3);

        txtRmtpIP = new QLineEdit(groupBox_3);
        txtRmtpIP->setObjectName(QString::fromUtf8("txtRmtpIP"));

        horizontalLayout->addWidget(txtRmtpIP);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        txtRmtpPort = new QLineEdit(groupBox_3);
        txtRmtpPort->setObjectName(QString::fromUtf8("txtRmtpPort"));
        txtRmtpPort->setMinimumSize(QSize(0, 0));
        txtRmtpPort->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(txtRmtpPort);

        btnRmtpListen = new QPushButton(groupBox_3);
        btnRmtpListen->setObjectName(QString::fromUtf8("btnRmtpListen"));

        horizontalLayout->addWidget(btnRmtpListen);

        btnRmtpStop = new QPushButton(groupBox_3);
        btnRmtpStop->setObjectName(QString::fromUtf8("btnRmtpStop"));

        horizontalLayout->addWidget(btnRmtpStop);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        ThermoLevel = new QwtThermo(groupBox_2);
        ThermoLevel->setObjectName(QString::fromUtf8("ThermoLevel"));
        ThermoLevel->setStyleSheet(QString::fromUtf8(""));

        gridLayout_3->addWidget(ThermoLevel, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        gridLayout_3->addWidget(label_9, 3, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1);

        lcdLevel = new QLCDNumber(groupBox_2);
        lcdLevel->setObjectName(QString::fromUtf8("lcdLevel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lcdLevel->setFont(font);
        lcdLevel->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));

        gridLayout_3->addWidget(lcdLevel, 4, 0, 1, 1);

        DialDegree = new QwtDial(groupBox_2);
        DialDegree->setObjectName(QString::fromUtf8("DialDegree"));
        DialDegree->setStyleSheet(QString::fromUtf8("color: rgb(32, 74, 135);"));
        DialDegree->setProperty("upperBound", QVariant(360.000000000000000));
        DialDegree->setProperty("scaleMaxMajor", QVariant(30));
        DialDegree->setProperty("scaleMaxMinor", QVariant(6));
        DialDegree->setProperty("scaleStepSize", QVariant(30.000000000000000));
        DialDegree->setProperty("totalSteps", QVariant(120u));
        DialDegree->setProperty("pageSteps", QVariant(10u));
        DialDegree->setProperty("lineWidth", QVariant(4));
        DialDegree->setProperty("origin", QVariant(0.000000000000000));
        DialDegree->setProperty("minScaleArc", QVariant(-90.000000000000000));

        gridLayout_3->addWidget(DialDegree, 2, 1, 1, 2);

        lcdSignal = new QLCDNumber(groupBox_2);
        lcdSignal->setObjectName(QString::fromUtf8("lcdSignal"));
        lcdSignal->setFont(font);
        lcdSignal->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);\n"
"color: rgb(78, 154, 6);"));

        gridLayout_3->addWidget(lcdSignal, 1, 0, 1, 1);

        lcdDegree = new QLCDNumber(groupBox_2);
        lcdDegree->setObjectName(QString::fromUtf8("lcdDegree"));
        lcdDegree->setFont(font);
        lcdDegree->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));

        gridLayout_3->addWidget(lcdDegree, 4, 1, 1, 2);

        lcdQuality = new QLCDNumber(groupBox_2);
        lcdQuality->setObjectName(QString::fromUtf8("lcdQuality"));
        lcdQuality->setFont(font);
        lcdQuality->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));

        gridLayout_3->addWidget(lcdQuality, 1, 2, 1, 1);

        lcdFreq = new QLCDNumber(groupBox_2);
        lcdFreq->setObjectName(QString::fromUtf8("lcdFreq"));
        lcdFreq->setFont(font);
        lcdFreq->setStyleSheet(QString::fromUtf8("background-color: rgb(85, 87, 83);"));
        lcdFreq->setDigitCount(8);

        gridLayout_3->addWidget(lcdFreq, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        gridLayout_2->addWidget(label_13, 5, 4, 1, 1);

        btnLinkDevice = new QPushButton(groupBox_6);
        btnLinkDevice->setObjectName(QString::fromUtf8("btnLinkDevice"));
        btnLinkDevice->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(btnLinkDevice, 0, 7, 1, 1);

        btnStop = new QPushButton(groupBox_6);
        btnStop->setObjectName(QString::fromUtf8("btnStop"));

        gridLayout_2->addWidget(btnStop, 6, 7, 1, 1);

        txtDeviceIp = new QLineEdit(groupBox_6);
        txtDeviceIp->setObjectName(QString::fromUtf8("txtDeviceIp"));
        txtDeviceIp->setMinimumSize(QSize(0, 0));
        txtDeviceIp->setSizeIncrement(QSize(0, 0));

        gridLayout_2->addWidget(txtDeviceIp, 0, 3, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QString::fromUtf8("label"));
        label->setMaximumSize(QSize(30, 16777215));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        gridLayout_2->addWidget(label_12, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_2->addWidget(label_4, 0, 4, 1, 1);

        txtDevicePort = new QLineEdit(groupBox_6);
        txtDevicePort->setObjectName(QString::fromUtf8("txtDevicePort"));
        txtDevicePort->setMinimumSize(QSize(0, 0));
        txtDevicePort->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(txtDevicePort, 0, 6, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_2->addWidget(label_11, 6, 4, 1, 1);

        combDeMode = new QComboBox(groupBox_6);
        combDeMode->addItem(QString());
        combDeMode->addItem(QString());
        combDeMode->setObjectName(QString::fromUtf8("combDeMode"));

        gridLayout_2->addWidget(combDeMode, 6, 6, 1, 1);

        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        gridLayout_2->addWidget(label_14, 6, 1, 1, 1);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_2->addWidget(label_5, 9, 1, 1, 1);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        gridLayout_2->addWidget(label_15, 9, 4, 1, 1);

        cbAtenna = new QComboBox(groupBox_6);
        cbAtenna->setObjectName(QString::fromUtf8("cbAtenna"));

        gridLayout_2->addWidget(cbAtenna, 9, 3, 1, 1);

        cbPolar = new QComboBox(groupBox_6);
        cbPolar->addItem(QString());
        cbPolar->addItem(QString());
        cbPolar->setObjectName(QString::fromUtf8("cbPolar"));

        gridLayout_2->addWidget(cbPolar, 9, 6, 1, 1);

        btnSendCmd = new QPushButton(groupBox_6);
        btnSendCmd->setObjectName(QString::fromUtf8("btnSendCmd"));
        btnSendCmd->setMinimumSize(QSize(0, 0));

        gridLayout_2->addWidget(btnSendCmd, 5, 7, 1, 1);

        txtSpan = new QLineEdit(groupBox_6);
        txtSpan->setObjectName(QString::fromUtf8("txtSpan"));

        gridLayout_2->addWidget(txtSpan, 8, 3, 1, 1);

        txtIFBW = new QLineEdit(groupBox_6);
        txtIFBW->setObjectName(QString::fromUtf8("txtIFBW"));

        gridLayout_2->addWidget(txtIFBW, 5, 6, 1, 1);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        gridLayout_2->addWidget(label_16, 8, 1, 1, 1);

        btnOptimize = new QPushButton(groupBox_6);
        btnOptimize->setObjectName(QString::fromUtf8("btnOptimize"));
        btnOptimize->setMinimumSize(QSize(0, 31));
        btnOptimize->setAutoDefault(false);
        btnOptimize->setFlat(true);

        gridLayout_2->addWidget(btnOptimize, 9, 7, 1, 1);

        txtFreq = new QLineEdit(groupBox_6);
        txtFreq->setObjectName(QString::fromUtf8("txtFreq"));

        gridLayout_2->addWidget(txtFreq, 5, 3, 1, 1);

        cbBW = new QComboBox(groupBox_6);
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->addItem(QString());
        cbBW->setObjectName(QString::fromUtf8("cbBW"));

        gridLayout_2->addWidget(cbBW, 6, 3, 1, 1);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        gridLayout_2->addWidget(label_17, 8, 4, 1, 1);

        txtTime = new QLineEdit(groupBox_6);
        txtTime->setObjectName(QString::fromUtf8("txtTime"));

        gridLayout_2->addWidget(txtTime, 8, 6, 1, 1);


        gridLayout->addWidget(groupBox_6, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        txtDeviceResponse = new QPlainTextEdit(groupBox);
        txtDeviceResponse->setObjectName(QString::fromUtf8("txtDeviceResponse"));

        horizontalLayout_2->addWidget(txtDeviceResponse);


        gridLayout->addWidget(groupBox, 0, 2, 4, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        btnOptimize->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "5GTS Controller", nullptr));
        action->setText(QCoreApplication::translate("MainWindow", "\345\217\202\346\225\260", nullptr));
        actionInfo->setText(QCoreApplication::translate("MainWindow", "Info", nullptr));
        actionparam->setText(QCoreApplication::translate("MainWindow", "?", nullptr));
        groupBox_3->setTitle(QCoreApplication::translate("MainWindow", "RMTP\346\234\215\345\212\241\345\231\250\351\205\215\347\275\256", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        txtRmtpIP->setText(QCoreApplication::translate("MainWindow", "172.25.65.122", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257\345\217\243", nullptr));
        txtRmtpPort->setText(QCoreApplication::translate("MainWindow", "5000", nullptr));
        btnRmtpListen->setText(QCoreApplication::translate("MainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", nullptr));
        btnRmtpStop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", nullptr));
        groupBox_2->setTitle(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Signal", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Level dBuV/m", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Degree", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Quality", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Frequency  MHz", nullptr));
        groupBox_6->setTitle(QCoreApplication::translate("MainWindow", "5GTS \350\256\276\345\244\207\351\205\215\347\275\256", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "\344\270\255\351\242\221\345\270\246\345\256\275(kHz)", nullptr));
        btnLinkDevice->setText(QCoreApplication::translate("MainWindow", "\351\223\276\346\216\245\350\256\276\345\244\207", nullptr));
        btnStop->setText(QCoreApplication::translate("MainWindow", "\345\201\234\346\255\242\346\265\213\350\257\225", nullptr));
        txtDeviceIp->setText(QCoreApplication::translate("MainWindow", "172.25.69.184", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "IP", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "\351\242\221\347\216\207(MHz)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "BasePort", nullptr));
        txtDevicePort->setText(QCoreApplication::translate("MainWindow", "5555", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "\350\247\243\350\260\203\346\250\241\345\274\217", nullptr));
        combDeMode->setItemText(0, QCoreApplication::translate("MainWindow", "FM", nullptr));
        combDeMode->setItemText(1, QCoreApplication::translate("MainWindow", "AM", nullptr));

        label_14->setText(QCoreApplication::translate("MainWindow", "\346\265\213\345\220\221\345\270\246\345\256\275", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\345\244\251\347\272\277", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "\346\236\201\345\214\226\346\226\271\345\274\217", nullptr));
        cbPolar->setItemText(0, QCoreApplication::translate("MainWindow", "VERTICAL", nullptr));
        cbPolar->setItemText(1, QCoreApplication::translate("MainWindow", "HORIZONTAL", nullptr));

        btnSendCmd->setText(QCoreApplication::translate("MainWindow", "\346\265\213\350\257\225\346\265\213\345\220\221", nullptr));
        txtSpan->setText(QCoreApplication::translate("MainWindow", "500", nullptr));
        txtIFBW->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "\350\267\250\350\267\235(kHz)", nullptr));
        btnOptimize->setText(QString());
        txtFreq->setText(QCoreApplication::translate("MainWindow", "1849.6", nullptr));
        cbBW->setItemText(0, QCoreApplication::translate("MainWindow", "12.5Hz", nullptr));
        cbBW->setItemText(1, QCoreApplication::translate("MainWindow", "20Hz", nullptr));
        cbBW->setItemText(2, QCoreApplication::translate("MainWindow", "25Hz", nullptr));
        cbBW->setItemText(3, QCoreApplication::translate("MainWindow", "31.25Hz", nullptr));
        cbBW->setItemText(4, QCoreApplication::translate("MainWindow", "50Hz", nullptr));
        cbBW->setItemText(5, QCoreApplication::translate("MainWindow", "62.5Hz", nullptr));
        cbBW->setItemText(6, QCoreApplication::translate("MainWindow", "100Hz", nullptr));
        cbBW->setItemText(7, QCoreApplication::translate("MainWindow", "125Hz", nullptr));
        cbBW->setItemText(8, QCoreApplication::translate("MainWindow", "200Hz", nullptr));
        cbBW->setItemText(9, QCoreApplication::translate("MainWindow", "250Hz", nullptr));
        cbBW->setItemText(10, QCoreApplication::translate("MainWindow", "312.5Hz", nullptr));
        cbBW->setItemText(11, QCoreApplication::translate("MainWindow", "500Hz", nullptr));
        cbBW->setItemText(12, QCoreApplication::translate("MainWindow", "625Hz", nullptr));
        cbBW->setItemText(13, QCoreApplication::translate("MainWindow", "1kHz", nullptr));
        cbBW->setItemText(14, QCoreApplication::translate("MainWindow", "1.25kHz", nullptr));
        cbBW->setItemText(15, QCoreApplication::translate("MainWindow", "2kHz", nullptr));
        cbBW->setItemText(16, QCoreApplication::translate("MainWindow", "2.5kHz", nullptr));
        cbBW->setItemText(17, QCoreApplication::translate("MainWindow", "3.125kHz", nullptr));
        cbBW->setItemText(18, QCoreApplication::translate("MainWindow", "5kHz", nullptr));
        cbBW->setItemText(19, QCoreApplication::translate("MainWindow", "6.25kHz", nullptr));
        cbBW->setItemText(20, QCoreApplication::translate("MainWindow", "8.333kHz", nullptr));
        cbBW->setItemText(21, QCoreApplication::translate("MainWindow", "10kHz", nullptr));
        cbBW->setItemText(22, QCoreApplication::translate("MainWindow", "12.5kHz", nullptr));
        cbBW->setItemText(23, QCoreApplication::translate("MainWindow", "20kHz", nullptr));
        cbBW->setItemText(24, QCoreApplication::translate("MainWindow", "25kHz", nullptr));
        cbBW->setItemText(25, QCoreApplication::translate("MainWindow", "50kHz", nullptr));
        cbBW->setItemText(26, QCoreApplication::translate("MainWindow", "100kHz", nullptr));
        cbBW->setItemText(27, QCoreApplication::translate("MainWindow", "200kHz", nullptr));
        cbBW->setItemText(28, QCoreApplication::translate("MainWindow", "500kHz", nullptr));
        cbBW->setItemText(29, QCoreApplication::translate("MainWindow", "1MHz", nullptr));
        cbBW->setItemText(30, QCoreApplication::translate("MainWindow", "2Mhz", nullptr));

        label_17->setText(QCoreApplication::translate("MainWindow", "\347\247\257\345\210\206\346\227\266\351\227\264(ms)", nullptr));
        txtTime->setText(QCoreApplication::translate("MainWindow", "1000", nullptr));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
