#include "input_petugas.h"
#include "ui_input_petugas.h"

input_petugas::input_petugas(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::input_petugas)
{
    ui->setupUi(this);
}

input_petugas::~input_petugas()
{
    delete ui;
}
