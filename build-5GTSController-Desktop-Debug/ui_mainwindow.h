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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_5;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_2;
    QPushButton *btnStop;
    QPushButton *btnLinkDevice;
    QPushButton *btnSendCmd;
    QLineEdit *txtDataPort;
    QLineEdit *txtDevicePort;
    QLineEdit *txtDeviceIp;
    QLabel *label;
    QPushButton *btnOptimize;
    QPlainTextEdit *txtDeviceCmd;
    QPlainTextEdit *txtDeviceResponse;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_3;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QLineEdit *txtRmtpIP;
    QLabel *label_2;
    QLineEdit *txtRmtpPort;
    QPushButton *btnRmtpListen;
    QPushButton *btnRmtpStop;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *txtRmtpCmd;
    QTextEdit *txtRmtpResponse;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1017, 686);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox->sizePolicy().hasHeightForWidth());
        groupBox->setSizePolicy(sizePolicy);
        verticalLayout_5 = new QVBoxLayout(groupBox);
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setContentsMargins(11, 11, 11, 11);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        verticalLayout_3 = new QVBoxLayout(groupBox_4);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        groupBox_6 = new QGroupBox(groupBox_4);
        groupBox_6->setObjectName(QStringLiteral("groupBox_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(groupBox_6->sizePolicy().hasHeightForWidth());
        groupBox_6->setSizePolicy(sizePolicy1);
        gridLayout_2 = new QGridLayout(groupBox_6);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        gridLayout_2->setHorizontalSpacing(6);
        btnStop = new QPushButton(groupBox_6);
        btnStop->setObjectName(QStringLiteral("btnStop"));

        gridLayout_2->addWidget(btnStop, 4, 3, 1, 1);

        btnLinkDevice = new QPushButton(groupBox_6);
        btnLinkDevice->setObjectName(QStringLiteral("btnLinkDevice"));
        btnLinkDevice->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnLinkDevice, 4, 1, 1, 1);

        btnSendCmd = new QPushButton(groupBox_6);
        btnSendCmd->setObjectName(QStringLiteral("btnSendCmd"));
        btnSendCmd->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnSendCmd, 4, 2, 1, 1);

        txtDataPort = new QLineEdit(groupBox_6);
        txtDataPort->setObjectName(QStringLiteral("txtDataPort"));
        txtDataPort->setMinimumSize(QSize(0, 28));

        gridLayout_2->addWidget(txtDataPort, 0, 3, 1, 1);

        txtDevicePort = new QLineEdit(groupBox_6);
        txtDevicePort->setObjectName(QStringLiteral("txtDevicePort"));
        txtDevicePort->setMinimumSize(QSize(0, 28));

        gridLayout_2->addWidget(txtDevicePort, 0, 2, 1, 1);

        txtDeviceIp = new QLineEdit(groupBox_6);
        txtDeviceIp->setObjectName(QStringLiteral("txtDeviceIp"));
        txtDeviceIp->setMinimumSize(QSize(0, 28));

        gridLayout_2->addWidget(txtDeviceIp, 0, 1, 1, 1);

        label = new QLabel(groupBox_6);
        label->setObjectName(QStringLiteral("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        btnOptimize = new QPushButton(groupBox_6);
        btnOptimize->setObjectName(QStringLiteral("btnOptimize"));
        btnOptimize->setMinimumSize(QSize(0, 31));

        gridLayout_2->addWidget(btnOptimize, 4, 0, 1, 1);


        verticalLayout_3->addWidget(groupBox_6);

        txtDeviceCmd = new QPlainTextEdit(groupBox_4);
        txtDeviceCmd->setObjectName(QStringLiteral("txtDeviceCmd"));

        verticalLayout_3->addWidget(txtDeviceCmd);

        txtDeviceResponse = new QPlainTextEdit(groupBox_4);
        txtDeviceResponse->setObjectName(QStringLiteral("txtDeviceResponse"));

        verticalLayout_3->addWidget(txtDeviceResponse);


        verticalLayout_5->addWidget(groupBox_4);


        gridLayout->addWidget(groupBox, 1, 0, 1, 1);

        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        groupBox_3 = new QGroupBox(groupBox_2);
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
        txtRmtpPort->setMaximumSize(QSize(100, 16777215));

        horizontalLayout->addWidget(txtRmtpPort);

        btnRmtpListen = new QPushButton(groupBox_3);
        btnRmtpListen->setObjectName(QStringLiteral("btnRmtpListen"));

        horizontalLayout->addWidget(btnRmtpListen);

        btnRmtpStop = new QPushButton(groupBox_3);
        btnRmtpStop->setObjectName(QStringLiteral("btnRmtpStop"));

        horizontalLayout->addWidget(btnRmtpStop);


        verticalLayout->addWidget(groupBox_3);

        groupBox_5 = new QGroupBox(groupBox_2);
        groupBox_5->setObjectName(QStringLiteral("groupBox_5"));
        verticalLayout_4 = new QVBoxLayout(groupBox_5);
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setContentsMargins(11, 11, 11, 11);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        txtRmtpCmd = new QTextEdit(groupBox_5);
        txtRmtpCmd->setObjectName(QStringLiteral("txtRmtpCmd"));

        verticalLayout_4->addWidget(txtRmtpCmd);

        txtRmtpResponse = new QTextEdit(groupBox_5);
        txtRmtpResponse->setObjectName(QStringLiteral("txtRmtpResponse"));

        verticalLayout_4->addWidget(txtRmtpResponse);


        verticalLayout->addWidget(groupBox_5);


        gridLayout->addWidget(groupBox_2, 1, 1, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(txtDeviceIp, txtRmtpResponse);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "5GTS Controller", Q_NULLPTR));
        groupBox->setTitle(QString());
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\346\214\207\344\273\244\345\217\221\351\200\201\344\270\216\350\277\224\345\233\236", Q_NULLPTR));
        groupBox_6->setTitle(QApplication::translate("MainWindow", "5GTS \351\205\215\347\275\256", Q_NULLPTR));
        btnStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\346\265\213\345\220\221", Q_NULLPTR));
        btnLinkDevice->setText(QApplication::translate("MainWindow", "\351\223\276\346\216\245\350\256\276\345\244\207", Q_NULLPTR));
        btnSendCmd->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\346\265\213\345\220\221", Q_NULLPTR));
        txtDataPort->setText(QApplication::translate("MainWindow", "5565", Q_NULLPTR));
        txtDevicePort->setText(QApplication::translate("MainWindow", "5563", Q_NULLPTR));
        txtDeviceIp->setText(QApplication::translate("MainWindow", "172.25.69.157", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "IP&Port", Q_NULLPTR));
        btnOptimize->setText(QApplication::translate("MainWindow", "P", Q_NULLPTR));
        txtDeviceCmd->setPlainText(QString());
        groupBox_2->setTitle(QString());
        groupBox_3->setTitle(QApplication::translate("MainWindow", "RMTP\346\234\215\345\212\241\345\231\250", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainWindow", "IP", Q_NULLPTR));
        txtRmtpIP->setText(QApplication::translate("MainWindow", "172.25.65.122", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainWindow", "Port", Q_NULLPTR));
        txtRmtpPort->setText(QApplication::translate("MainWindow", "5000", Q_NULLPTR));
        btnRmtpListen->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\347\233\221\345\220\254", Q_NULLPTR));
        btnRmtpStop->setText(QApplication::translate("MainWindow", "\345\201\234\346\255\242\347\233\221\345\220\254", Q_NULLPTR));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\346\214\207\344\273\244\346\216\245\346\224\266\344\270\216\350\277\224\345\233\236", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
