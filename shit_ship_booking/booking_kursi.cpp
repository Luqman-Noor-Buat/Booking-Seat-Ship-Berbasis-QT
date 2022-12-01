#include "booking_kursi.h"
#include "ui_booking_kursi.h"

booking_kursi::booking_kursi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::booking_kursi)
{
    ui->setupUi(this);
}

booking_kursi::~booking_kursi()
{
    delete ui;
}
