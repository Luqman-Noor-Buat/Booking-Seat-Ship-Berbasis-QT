#include "edit_kapal.h"
#include "ui_edit_kapal.h"

edit_kapal::edit_kapal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::edit_kapal)
{
    ui->setupUi(this);
}

edit_kapal::~edit_kapal()
{
    delete ui;
}
