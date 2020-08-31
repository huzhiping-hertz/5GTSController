/********************************************************************************
** Form generated from reading UI file 'versionwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VERSIONWINDOW_H
#define UI_VERSIONWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_VersionWindow
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *btnInfo;

    void setupUi(QDialog *VersionWindow)
    {
        if (VersionWindow->objectName().isEmpty())
            VersionWindow->setObjectName(QStringLiteral("VersionWindow"));
        VersionWindow->resize(416, 203);
        label = new QLabel(VersionWindow);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 20, 151, 31));
        label_2 = new QLabel(VersionWindow);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 60, 161, 17));
        label_3 = new QLabel(VersionWindow);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(50, 90, 161, 17));
        btnInfo = new QPushButton(VersionWindow);
        btnInfo->setObjectName(QStringLiteral("btnInfo"));
        btnInfo->setGeometry(QRect(310, 160, 89, 25));

        retranslateUi(VersionWindow);
        QObject::connect(btnInfo, SIGNAL(clicked()), VersionWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(VersionWindow);
    } // setupUi

    void retranslateUi(QDialog *VersionWindow)
    {
        VersionWindow->setWindowTitle(QApplication::translate("VersionWindow", "Infomation About Version", Q_NULLPTR));
        label->setText(QApplication::translate("VersionWindow", "\347\211\210\346\234\254\344\277\241\346\201\257: V1.0", Q_NULLPTR));
        label_2->setText(QApplication::translate("VersionWindow", "RMTP Server v1.1", Q_NULLPTR));
        label_3->setText(QApplication::translate("VersionWindow", "5GTS", Q_NULLPTR));
        btnInfo->setText(QApplication::translate("VersionWindow", "OK", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class VersionWindow: public Ui_VersionWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VERSIONWINDOW_H
