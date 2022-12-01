#include "login_petugas.h"
#include "ui_login_petugas.h"

login_petugas::login_petugas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_petugas)
{
    ui->setupUi(this);
}

login_petugas::~login_petugas()
{
    delete ui;
}
