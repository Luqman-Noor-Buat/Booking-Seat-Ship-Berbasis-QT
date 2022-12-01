#include "daftar.h"
#include "ui_daftar.h"

daftar::daftar(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::daftar)
{
    ui->setupUi(this);
}

daftar::~daftar()
{
    delete ui;
}
