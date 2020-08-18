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
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "qwt_dial.h"
#include "qwt_thermo.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout_2;
    QPlainTextEdit *txtDeviceResponse;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *txtRmtpIP;
    QLabel *label_2;
    QLineEdit *txtRmtpPort;
    QPushButton *btnRmtpListen;
    QPushButton *btnRmtpStop;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QPushButton *btnLinkDevice;
    QPushButton *btnStop;
    QLineEdit *txtDeviceIp;
    QLabel *label;
    QLabel *label_12;
    QLabel *label_4;
    QLineEdit *txtDevicePort;
    QLineEdit *txtDFBW;
    QLabel *label_11;
    QComboBox *combDeMode;
    QLabel *label_14;
    QLineEdit *txtFreq;
    QLabel *label_13;
    QLineEdit *txtIFBW;
    QLabel *label_5;
    QLabel *label_15;
    QComboBox *cbAtenna;
    QComboBox *cbPolar;
    QPushButton *btnSendCmd;
    QPushButton *btnOptimize;
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(931, 744);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        horizontalLayout_2 = new QHBoxLayout(groupBox);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        txtDeviceResponse = new QPlainTextEdit(groupBox);
        txtDeviceResponse->setObjectName(QStringLiteral("txtDeviceResponse"));

        horizontalLayout_2->addWidget(txtDeviceResponse);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_3 = new QGroupBox(groupBox_4);
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


        verticalLayout_3->addWidget(groupBox_3);

        groupBox_6 = new QGroupBox(groupBox_4);
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
        btnLinkDevice = new QPushButton(groupBox_6);
        btnLinkDevice->setObjectName(QStringLiteral("btnLinkDevice"));
        btnLinkDevice->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnLinkDevice, 0, 6, 1, 1);

        btnStop = new QPushButton(groupBox_6);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        gridLayout_2->addWidget(btnStop, 6, 6, 1, 1);

        txtDeviceIp = new QLineEdit(groupBox_6);
        txtDeviceIp->setObjectName(QStringLiteral("txtDeviceIp"));
        txtDeviceIp->setMinimumSize(QSize(100, 28));
        txtDeviceIp->setSizeIncrement(QSize(0, 0));

        gridLayout_2->addWidget(txtDeviceIp, 0, 2, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QStringLiteral("label"));
        label->setMaximumSize(QSize(30, 16777215));

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        label_12 = new QLabel(groupBox_6);
        label_12->setObjectName(QStringLiteral("label_12"));

        gridLayout_2->addWidget(label_12, 5, 1, 1, 1);

        label_4 = new QLabel(groupBox_6);
        label_4->setObjectName(QStringLiteral("label_4"));

        gridLayout_2->addWidget(label_4, 0, 3, 1, 1);

        txtDevicePort = new QLineEdit(groupBox_6);
        txtDevicePort->setObjectName(QStringLiteral("txtDevicePort"));
        txtDevicePort->setMinimumSize(QSize(0, 28));
        txtDevicePort->setMaximumSize(QSize(16777215, 16777215));

        gridLayout_2->addWidget(txtDevicePort, 0, 5, 1, 1);

        txtDFBW = new QLineEdit(groupBox_6);
        txtDFBW->setObjectName(QStringLiteral("txtDFBW"));

        gridLayout_2->addWidget(txtDFBW, 6, 2, 1, 1);

        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QStringLiteral("label_11"));

        gridLayout_2->addWidget(label_11, 6, 3, 1, 1);

        combDeMode = new QComboBox(groupBox_6);
        combDeMode->setObjectName(QStringLiteral("combDeMode"));

        gridLayout_2->addWidget(combDeMode, 6, 5, 1, 1);

        label_14 = new QLabel(groupBox_6);
        label_14->setObjectName(QStringLiteral("label_14"));

        gridLayout_2->addWidget(label_14, 6, 1, 1, 1);

        txtFreq = new QLineEdit(groupBox_6);
        txtFreq->setObjectName(QStringLiteral("txtFreq"));

        gridLayout_2->addWidget(txtFreq, 5, 2, 1, 1);

        label_13 = new QLabel(groupBox_6);
        label_13->setObjectName(QStringLiteral("label_13"));

        gridLayout_2->addWidget(label_13, 5, 3, 1, 1);

        txtIFBW = new QLineEdit(groupBox_6);
        txtIFBW->setObjectName(QStringLiteral("txtIFBW"));

        gridLayout_2->addWidget(txtIFBW, 5, 5, 1, 1);

        label_5 = new QLabel(groupBox_6);
        label_5->setObjectName(QStringLiteral("label_5"));

        gridLayout_2->addWidget(label_5, 7, 1, 1, 1);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QStringLiteral("label_15"));

        gridLayout_2->addWidget(label_15, 7, 3, 1, 1);

        cbAtenna = new QComboBox(groupBox_6);
        cbAtenna->setObjectName(QStringLiteral("cbAtenna"));

        gridLayout_2->addWidget(cbAtenna, 7, 2, 1, 1);

        cbPolar = new QComboBox(groupBox_6);
        cbPolar->setObjectName(QStringLiteral("cbPolar"));

        gridLayout_2->addWidget(cbPolar, 7, 5, 1, 1);

        btnSendCmd = new QPushButton(groupBox_6);
        btnSendCmd->setObjectName(QStringLiteral("btnSendCmd"));
        btnSendCmd->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnSendCmd, 5, 6, 1, 1);

        btnOptimize = new QPushButton(groupBox_6);
        btnOptimize->setObjectName(QStringLiteral("btnOptimize"));
        btnOptimize->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnOptimize, 7, 6, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        groupBox_2 = new QGroupBox(groupBox_4);
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


        verticalLayout_3->addWidget(groupBox_2);


        gridLayout->addWidget(groupBox_4, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "5GTS Controller", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\214\207\344\273\244\345\217\221\351\200\201\344\270\216\350\277\224\345\233\236", Q_NULLPTR));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "RMTP\346\234\215\345\212\241\345\231\250\351\205\215\347\275\256", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "IP", Q_NULLPTR));
        txtRmtpIP->setText(QApplication::translate("MainWindow", "172.25.65.122", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "\346\234\215\345\212\241\347\253\257\345\217\243", Q_NULLPTR));
        txtRmtpPort->setText(QApplication::translate("MainWindow", "5000", Q_NULLPTR));
        btnRmtpListen->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        btnRmtpStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "5GTS \350\256\276\345\244\207\351\205\215\347\275\256", Q_NULLPTR));
        btnLinkDevice->setText(QApplication::translate("MainWindow", "\351\223\276\346\216\245\350\256\276\345\244\207", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\265\213\350\257\225", Q_NULLPTR));
        txtDeviceIp->setText(QApplication::translate("MainWindow", "172.25.69.184", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IP", Q_NULLPTR));
        label_12->setText(QApplication::translate("MainWindow", "\351\242\221\347\216\207(MHz)", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainWindow", "BasePort", Q_NULLPTR));
        txtDevicePort->setText(QApplication::translate("MainWindow", "5555", Q_NULLPTR));
        txtDFBW->setText(QApplication::translate("MainWindow", "25", Q_NULLPTR));
        label_11->setText(QApplication::translate("MainWindow", "\350\247\243\350\260\203", Q_NULLPTR));
        combDeMode->clear();
        combDeMode->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "FM", Q_NULLPTR)
         << QApplication::translate("MainWindow", "AM", Q_NULLPTR)
        );
        label_14->setText(QApplication::translate("MainWindow", "\346\265\213\345\220\221\345\270\246\345\256\275(kHz)", Q_NULLPTR));
        txtFreq->setText(QApplication::translate("MainWindow", "1846.9", Q_NULLPTR));
        label_13->setText(QApplication::translate("MainWindow", "\344\270\255\351\242\221\345\270\246\345\256\275(kHz)", Q_NULLPTR));
        txtIFBW->setText(QApplication::translate("MainWindow", "25", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainWindow", "\345\244\251\347\272\277", Q_NULLPTR));
        label_15->setText(QApplication::translate("MainWindow", "\346\236\201\345\214\226\346\226\271\345\274\217", Q_NULLPTR));
        cbPolar->clear();
        cbPolar->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "VERTICAL", Q_NULLPTR)
         << QApplication::translate("MainWindow", "HORIZONTAL", Q_NULLPTR)
        );
        btnSendCmd->setText(QApplication::translate("MainWindow", "\346\265\213\350\257\225\346\265\213\345\220\221", Q_NULLPTR));
        btnOptimize->setText(QApplication::translate("MainWindow", "\346\225\260\346\215\256\346\240\241\345\207\206", Q_NULLPTR));
        groupBox_2->setTitle(QString());
        label_7->setText(QApplication::translate("MainWindow", "Signal", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainWindow", "Level dBuV/m", Q_NULLPTR));
        label_9->setText(QApplication::translate("MainWindow", "Degree", Q_NULLPTR));
        label_10->setText(QApplication::translate("MainWindow", "Quality", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainWindow", "Frequency  MHz", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
