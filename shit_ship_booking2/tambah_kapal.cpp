#include "tambah_kapal.h"
#include "ui_tambah_kapal.h"

tambah_kapal::tambah_kapal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tambah_kapal)
{
    ui->setupUi(this);
}

tambah_kapal::~tambah_kapal()
{
    delete ui;
}
