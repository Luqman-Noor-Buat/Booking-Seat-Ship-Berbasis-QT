#include "daftar_petugas.h"
#include "ui_daftar_petugas.h"

daftar_petugas::daftar_petugas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::daftar_petugas)
{
    ui->setupUi(this);
}

daftar_petugas::~daftar_petugas()
{
    delete ui;
}
