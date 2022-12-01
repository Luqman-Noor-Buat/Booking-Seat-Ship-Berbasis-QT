#include "edit_data_kapal.h"
#include "ui_edit_data_kapal.h"

edit_data_kapal::edit_data_kapal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_data_kapal)
{
    ui->setupUi(this);
}

edit_data_kapal::~edit_data_kapal()
{
    delete ui;
}
