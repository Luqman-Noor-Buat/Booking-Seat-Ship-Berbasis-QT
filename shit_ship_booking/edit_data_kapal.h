#ifndef EDIT_DATA_KAPAL_H
#define EDIT_DATA_KAPAL_H

#include <QDialog>

namespace Ui {
class edit_data_kapal;
}

class edit_data_kapal : public QDialog
{
    Q_OBJECT

public:
    explicit edit_data_kapal(QWidget *parent = nullptr);
    ~edit_data_kapal();

private:
    Ui::edit_data_kapal *ui;
};

#endif // EDIT_DATA_KAPAL_H
