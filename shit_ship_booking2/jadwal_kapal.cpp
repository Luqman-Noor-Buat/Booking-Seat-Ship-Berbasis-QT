#include "jadwal_kapal.h"
#include "ui_jadwal_kapal.h"

jadwal_kapal::jadwal_kapal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::jadwal_kapal)
{
    ui->setupUi(this);
}

jadwal_kapal::~jadwal_kapal()
{
    delete ui;
}
