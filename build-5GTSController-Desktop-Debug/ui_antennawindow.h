/********************************************************************************
** Form generated from reading UI file 'antennawindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ANTENNAWINDOW_H
#define UI_ANTENNAWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_AntennaWindow
{
public:
    QDialogButtonBox *buttonBox;
    QTableView *tableView;

    void setupUi(QDialog *AntennaWindow)
    {
        if (AntennaWindow->objectName().isEmpty())
            AntennaWindow->setObjectName(QStringLiteral("AntennaWindow"));
        AntennaWindow->resize(814, 388);
        buttonBox = new QDialogButtonBox(AntennaWindow);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(460, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        tableView = new QTableView(AntennaWindow);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 791, 341));

        retranslateUi(AntennaWindow);
        QObject::connect(buttonBox, SIGNAL(accepted()), AntennaWindow, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AntennaWindow, SLOT(reject()));

        QMetaObject::connectSlotsByName(AntennaWindow);
    } // setupUi

    void retranslateUi(QDialog *AntennaWindow)
    {
        AntennaWindow->setWindowTitle(QApplication::translate("AntennaWindow", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class AntennaWindow: public Ui_AntennaWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ANTENNAWINDOW_H
