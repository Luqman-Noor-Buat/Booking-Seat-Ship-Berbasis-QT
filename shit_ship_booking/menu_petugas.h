#ifndef MENU_PETUGAS_H
#define MENU_PETUGAS_H

#include <QDialog>

namespace Ui {
class menu_petugas;
}

class menu_petugas : public QDialog
{
    Q_OBJECT

public:
    explicit menu_petugas(QWidget *parent = nullptr);
    ~menu_petugas();

private:
    Ui::menu_petugas *ui;
};

#endif // MENU_PETUGAS_H
