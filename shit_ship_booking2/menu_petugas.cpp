#include "menu_petugas.h"
#include "ui_menu_petugas.h"

menu_petugas::menu_petugas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::menu_petugas)
{
    ui->setupUi(this);
}

menu_petugas::~menu_petugas()
{
    delete ui;
}
