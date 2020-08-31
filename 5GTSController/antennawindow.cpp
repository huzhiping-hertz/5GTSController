#include "antennawindow.h"
#include "ui_antennawindow.h"

AntennaWindow::AntennaWindow(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AntennaWindow)
{
    ui->setupUi(this);
}

AntennaWindow::~AntennaWindow()
{
    delete ui;
}
