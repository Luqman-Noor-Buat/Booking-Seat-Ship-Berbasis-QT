#include "login_penumpang.h"
#include "ui_login_penumpang.h"

login_penumpang::login_penumpang(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::login_penumpang)
{
    ui->setupUi(this);
}

login_penumpang::~login_penumpang()
{
    delete ui;
}
