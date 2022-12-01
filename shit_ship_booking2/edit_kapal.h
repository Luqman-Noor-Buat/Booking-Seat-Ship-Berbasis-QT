#ifndef EDIT_KAPAL_H
#define EDIT_KAPAL_H

#include <QDialog>

namespace Ui {
class edit_kapal;
}

class edit_kapal : public QDialog
{
    Q_OBJECT

public:
    explicit edit_kapal(QWidget *parent = nullptr);
    ~edit_kapal();

private:
    Ui::edit_kapal *ui;
};

#endif // EDIT_KAPAL_H
