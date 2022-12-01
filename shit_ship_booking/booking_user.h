#ifndef BOOKING_USER_H
#define BOOKING_USER_H

#include <QDialog>

namespace Ui {
class booking_user;
}

class booking_user : public QDialog
{
    Q_OBJECT

public:
    explicit booking_user(QWidget *parent = nullptr);
    ~booking_user();

private:
    Ui::booking_user *ui;
};

#endif // BOOKING_USER_H
