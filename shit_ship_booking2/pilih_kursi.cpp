#include "pilih_kursi.h"
#include "ui_pilih_kursi.h"

pilih_kursi::pilih_kursi(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::pilih_kursi)
{
    ui->setupUi(this);
}

pilih_kursi::~pilih_kursi()
{
    delete ui;
}
