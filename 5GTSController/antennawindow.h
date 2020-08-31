#ifndef ANTENNAWINDOW_H
#define ANTENNAWINDOW_H

#include <QDialog>

namespace Ui {
class AntennaWindow;
}

class AntennaWindow : public QDialog
{
    Q_OBJECT

public:
    explicit AntennaWindow(QWidget *parent = 0);
    ~AntennaWindow();

private:
    Ui::AntennaWindow *ui;
};

#endif // ANTENNAWINDOW_H
