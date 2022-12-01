#ifndef DAFTAR_H
#define DAFTAR_H

#include <QDialog>

namespace Ui {
class daftar;
}

class daftar : public QDialog
{
    Q_OBJECT

public:
    explicit daftar(QWidget *parent = nullptr);
    ~daftar();

private:
    Ui::daftar *ui;
};

#endif // DAFTAR_H
