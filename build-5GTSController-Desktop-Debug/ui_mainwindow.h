/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(931, 744);
        action = new QAction(MainWindow);
        action->setObjectName(QStringLiteral("action"));
        actionInfo = new QAction(MainWindow);
        actionInfo->setObjectName(QStringLiteral("actionInfo"));
        actionparam = new QAction(MainWindow);
        actionparam->setObjectName(QStringLiteral("actionparam"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        horizontalLayout = new QHBoxLayout(groupBox_3);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label_3 = new QLabel(groupBox_3);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout->addWidget(label_3);

        txtRmtpIP = new QLineEdit(groupBox_3);
        txtRmtpIP->setObjectName(QStringLiteral("txtRmtpIP"));

        horizontalLayout->addWidget(txtRmtpIP);

        label_2 = new QLabel(groupBox_3);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout->addWidget(label_2);

        txtRmtpPort = new QLineEdit(groupBox_3);
        txtRmtpPort->setObjectName(QStringLiteral("txtRmtpPort"));
        txtRmtpPort->setMinimumSize(QSize(0, 28));
        txtRmtpPort->setMaximumSize(QSize(80, 16777215));

        horizontalLayout->addWidget(txtRmtpPort);

        btnRmtpListen = new QPushButton(groupBox_3);
        btnRmtpListen->setObjectName(QStringLiteral("btnRmtpListen"));

        horizontalLayout->addWidget(btnRmtpListen);

        btnRmtpStop = new QPushButton(groupBox_3);
        btnRmtpStop->setObjectName(QStringLiteral("btnRmtpStop"));

        horizontalLayout->addWidget(btnRmtpStop);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setMinimumSize(QSize(300, 0));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        ThermoLevel = new QwtThermo(groupBox_2);
        ThermoLevel->setObjectName(QStringLiteral("ThermoLevel"));
        ThermoLevel->setStyleSheet(QStringLiteral(""));

        gridLayout_3->addWidget(ThermoLevel, 2, 0, 1, 1);

        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_3->addWidget(label_7, 0, 0, 1, 1);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QStringLiteral("label_8"));

        gridLayout_3->addWidget(label_8, 3, 0, 1, 1);

        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QStringLiteral("label_9"));

        gridLayout_3->addWidget(label_9, 3, 2, 1, 1);

        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QStringLiteral("label_10"));

        gridLayout_3->addWidget(label_10, 0, 2, 1, 1);

        lcdLevel = new QLCDNumber(groupBox_2);
        lcdLevel->setObjectName(QStringLiteral("lcdLevel"));
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        lcdLevel->setFont(font);
        lcdLevel->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));

        gridLayout_3->addWidget(lcdLevel, 4, 0, 1, 1);

        DialDegree = new QwtDial(groupBox_2);
        DialDegree->setObjectName(QStringLiteral("DialDegree"));
        DialDegree->setStyleSheet(QStringLiteral("color: rgb(32, 74, 135);"));
        DialDegree->setUpperBound(360);
        DialDegree->setScaleMaxMajor(30);
        DialDegree->setScaleMaxMinor(6);
        DialDegree->setScaleStepSize(30);
        DialDegree->setTotalSteps(120u);
        DialDegree->setPageSteps(10u);
        DialDegree->setLineWidth(4);
        DialDegree->setMode(QwtDial::RotateNeedle);
        DialDegree->setOrigin(0);
        DialDegree->setMinScaleArc(-90);

        gridLayout_3->addWidget(DialDegree, 2, 1, 1, 2);

        lcdSignal = new QLCDNumber(groupBox_2);
        lcdSignal->setObjectName(QStringLiteral("lcdSignal"));
        lcdSignal->setFont(font);
        lcdSignal->setStyleSheet(QLatin1String("background-color: rgb(85, 87, 83);\n"
"color: rgb(78, 154, 6);"));

        gridLayout_3->addWidget(lcdSignal, 1, 0, 1, 1);

        lcdDegree = new QLCDNumber(groupBox_2);
        lcdDegree->setObjectName(QStringLiteral("lcdDegree"));
        lcdDegree->setFont(font);
        lcdDegree->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));

        gridLayout_3->addWidget(lcdDegree, 4, 1, 1, 2);

        lcdQuality = new QLCDNumber(groupBox_2);
        lcdQuality->setObjectName(QStringLiteral("lcdQuality"));
        lcdQuality->setFont(font);
        lcdQuality->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));

        gridLayout_3->addWidget(lcdQuality, 1, 2, 1, 1);

        lcdFreq = new QLCDNumber(groupBox_2);
        lcdFreq->setObjectName(QStringLiteral("lcdFreq"));
        lcdFreq->setFont(font);
        lcdFreq->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));
        lcdFreq->setDigitCount(8);

        gridLayout_3->addWidget(lcdFreq, 1, 1, 1, 1);

        label_6 = new QLabel(groupBox_2);
        label_6->setObjectName(QStringLiteral("label_6"));

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 2, 0, 1, 1);

        groupBox_6 = new QGroupBox(centralWidget);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy);
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 5, 4, 1, 1);

        btnLinkDevice = new QPushButton(groupBox_6);
        btnLinkDevice->setObjectName(QStringLiteral("btnLinkDevice"));
        btnLinkDevice->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnLinkDevice, 0, 7, 1, 1);

        btnStop = new QPushButton(groupBox_6);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        gridLayout_2->addWidget(btnStop, 6, 7, 1, 1);

        txtDeviceIp = new QLineEdit(groupBox_6);
        txtDeviceIp->setObjectName(QStringLiteral("txtDeviceIp"));
        txtDeviceIp->setMinimumSize(QSize(100, 28));
        txtDeviceIp->setSizeIncrement(QSize(0, 0));

        gridLayout_2->addWidget(txtDeviceIp, 0, 3, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(30, 16777215));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 4, 1, 1);

        txtDevicePort = new QLineEdit(groupBox_6);
        txtDevicePort->setObjectName(QStringLiteral("txtDevicePort"));
        txtDevicePort->setMinimumSize(QSize(0, 28));
        txtDevicePort->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(txtDevicePort, 0, 6, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 6, 4, 1, 1);

        combDeMode = new QComboBox(groupBox_6);
        combDeMode->setObjectName(QStringLiteral("combDeMode"));

        gridLayout_2->addWidget(combDeMode, 6, 6, 1, 1);

        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 6, 1, 1, 1);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 9, 1, 1, 1);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 9, 4, 1, 1);

        cbAtenna = new QComboBox(groupBox_6);
        cbAtenna->setObjectName(QStringLiteral("cbAtenna"));

        gridLayout_2->addWidget(cbAtenna, 9, 3, 1, 1);

        cbPolar = new QComboBox(groupBox_6);
        cbPolar->setObjectName(QStringLiteral("cbPolar"));

        gridLayout_2->addWidget(cbPolar, 9, 6, 1, 1);

        btnSendCmd = new QPushButton(groupBox_6);
        btnSendCmd->setObjectName(QStringLiteral("btnSendCmd"));
        btnSendCmd->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnSendCmd, 5, 7, 1, 1);

        txtSpan = new QLineEdit(groupBox_6);
        txtSpan->setObjectName(QStringLiteral("txtSpan"));

        gridLayout_2->addWidget(txtSpan, 8, 3, 1, 1);

        txtIFBW = new QLineEdit(groupBox_6);
        txtIFBW->setObjectName(QStringLiteral("txtIFBW"));

        gridLayout_2->addWidget(txtIFBW, 5, 6, 1, 1);

        label_16 = new QLabel(groupBox_6);
        label_16->setObjectName(QStringLiteral("label_16"));

        gridLayout_2->addWidget(label_16, 8, 1, 1, 1);

        btnOptimize = new QPushButton(groupBox_6);
        btnOptimize->setObjectName(QStringLiteral("btnOptimize"));
        btnOptimize->setMinimumSize(QSize(0, 31));
        btnOptimize->setAutoDefault(false);
        btnOptimize->setFlat(true);

        gridLayout_2->addWidget(btnOptimize, 9, 7, 1, 1);

        txtFreq = new QLineEdit(groupBox_6);
        txtFreq->setObjectName(QStringLiteral("txtFreq"));

        gridLayout_2->addWidget(txtFreq, 5, 3, 1, 1);

        cbBW = new QComboBox(groupBox_6);
        cbBW->setObjectName(QStringLiteral("cbBW"));

        gridLayout_2->addWidget(cbBW, 6, 3, 1, 1);

        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QStringLiteral("label_17"));

        gridLayout_2->addWidget(label_17, 8, 4, 1, 1);

        txtTime = new QLineEdit(groupBox_6);
        txtTime->setObjectName(QStringLiteral("txtTime"));

        gridLayout_2->addWidget(txtTime, 8, 6, 1, 1);


        gridLayout->addWidget(groupBox_6, 1, 0, 1, 1);

        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        txtDeviceResponse = new QPlainTextEdit(groupBox);
        txtDeviceResponse->setObjectName(QStringLiteral("txtDeviceResponse"));

        horizontalLayout_2->addWidget(txtDeviceResponse);


        gridLayout->addWidget(groupBox, 0, 2, 4, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        btnOptimize->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "5GTS Controller", Q_NULLPTR));
        action->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260", Q_NULLPTR));
        actionInfo->setText(QApplication::translate("MainWindow", "Info", Q_NULLPTR));
        actionparam->setText(QApplication::translate("MainWindow", "?", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "RMTP\346\234\215\345\212\241\345\231\250\351\205\215\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "IP", Q_NULLPTR));
        txtRmtpIP->setText(QApplication::translate("MainWindow", "172.25.65.122", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257\345\217\243", Q_NULLPTR));
        txtRmtpPort->setText(QApplication::translate("MainWindow", "5000", Q_NULLPTR));
        btnRmtpListen->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        btnRmtpStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "Signal", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Level dBuV/m", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Degree", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Quality", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Frequency  MHz", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "5GTS \350\256\276\345\244\207\351\205\215\347\275\256", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\344\270\255\351\242\221\345\270\246\345\256\275(kHz)", Q_NULLPTR));
        btnLinkDevice->setText(QApplication::translate("MainWindow", "\351\223\276\346\216\245\350\256\276\345\244\207", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\265\213\350\257\225", Q_NULLPTR));
        txtDeviceIp->setText(QApplication::translate("MainWindow", "172.25.69.184", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IP", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\351\242\221\347\216\207(MHz)", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "BasePort", Q_NULLPTR));
        txtDevicePort->setText(QApplication::translate("MainWindow", "5555", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\350\247\243\350\260\203\346\250\241\345\274\217", Q_NULLPTR));
        combDeMode->clear();
        combDeMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "FM", Q_NULLPTR)
         << QApplication::translate("MainWindow", "AM", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("MainWindow", "\346\265\213\345\220\221\345\270\246\345\256\275", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\244\251\347\272\277", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\346\236\201\345\214\226\346\226\271\345\274\217", Q_NULLPTR));
        cbPolar->clear();
        cbPolar->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "VERTICAL", Q_NULLPTR)
         << QApplication::translate("MainWindow", "HORIZONTAL", Q_NULLPTR)
        );
        btnSendCmd->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\265\213\345\220\221", Q_NULLPTR));
        txtSpan->setText(QApplication::translate("MainWindow", "500", Q_NULLPTR));
        txtIFBW->setText(QApplication::translate("MainWindow", "25", Q_NULLPTR));
        label_16->setText(QApplication::translate("MainWindow", "\350\267\250\350\267\235(kHz)", Q_NULLPTR));
        btnOptimize->setText(QString());
        txtFreq->setText(QApplication::translate("MainWindow", "463.2", Q_NULLPTR));
        cbBW->clear();
        cbBW->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "12.5Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "20Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "25Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "31.25Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "50Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "62.5Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "100Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "125Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "200Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "250Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "312.5Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "500Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "625Hz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1.25kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2.5kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "3.125kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "5kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "6.25kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "8.333kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "10kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "12.5kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "20kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "25kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "50kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "100kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "200kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "500kHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "1MHz", Q_NULLPTR)
         << QApplication::translate("MainWindow", "2Mhz", Q_NULLPTR)
        );
        label_17->setText(QApplication::translate("MainWindow", "\347\247\257\345\210\206\346\227\266\351\227\264(ms)", Q_NULLPTR));
        txtTime->setText(QApplication::translate("MainWindow", "1000", Q_NULLPTR));
        groupBox->setTitle(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
