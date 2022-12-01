#include "daftar_penumpang.h"
#include "ui_daftar_penumpang.h"

daftar_penumpang::daftar_penumpang(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::daftar_penumpang)
{
    ui->setupUi(this);
}

daftar_penumpang::~daftar_penumpang()
{
    delete ui;
}
