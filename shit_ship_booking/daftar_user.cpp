#include "daftar_user.h"
#include "ui_daftar_user.h"

daftar_user::daftar_user(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::daftar_user)
{
    ui->setupUi(this);
}

daftar_user::~daftar_user()
{
    delete ui;
}
