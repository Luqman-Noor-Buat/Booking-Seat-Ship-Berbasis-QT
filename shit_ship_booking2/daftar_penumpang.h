#ifndef DAFTAR_PENUMPANG_H
#define DAFTAR_PENUMPANG_H

#include <QDialog>

namespace Ui {
class daftar_penumpang;
}

class daftar_penumpang : public QDialog
{
    Q_OBJECT

public:
    explicit daftar_penumpang(QWidget *parent = nullptr);
    ~daftar_penumpang();

private:
    Ui::daftar_penumpang *ui;
};

#endif // DAFTAR_PENUMPANG_H
