#ifndef VERSIONWINDOW_H
#define VERSIONWINDOW_H

#include <QDialog>

namespace Ui {
class VersionWindow;
}

class VersionWindow : public QDialog
{
    Q_OBJECT

public:
    explicit VersionWindow(QWidget *parent = 0);
    ~VersionWindow();

private:
    Ui::VersionWindow *ui;
};

#endif // VERSIONWINDOW_H
