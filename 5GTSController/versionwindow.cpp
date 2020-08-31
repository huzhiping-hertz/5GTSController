#include "versionwindow.h"
#include "ui_versionwindow.h"

VersionWindow::VersionWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::VersionWindow)
{
    ui->setupUi(this);
}

VersionWindow::~VersionWindow()
{
    delete ui;
}
