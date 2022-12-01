#include "booking_user.h"
#include "ui_booking_user.h"

booking_user::booking_user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::booking_user)
{
    ui->setupUi(this);
}

booking_user::~booking_user()
{
    delete ui;
}
