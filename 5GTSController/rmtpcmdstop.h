#ifndef RMTPCMDSTOP_H
#define RMTPCMDSTOP_H

#include <QObject>

class RmtpCmdStop : public QObject
{
    Q_OBJECT
public:
    explicit RmtpCmdStop(QObject *parent = nullptr);

signals:

public slots:
};

#endif // RMTPCMDSTOP_H