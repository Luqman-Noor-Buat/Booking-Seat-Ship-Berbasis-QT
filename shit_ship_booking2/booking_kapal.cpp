#include "booking_kapal.h"
#include "ui_booking_kapal.h"

booking_kapal::booking_kapal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::booking_kapal)
{
    ui->setupUi(this);
}

booking_kapal::~booking_kapal()
{
    delete ui;
}
