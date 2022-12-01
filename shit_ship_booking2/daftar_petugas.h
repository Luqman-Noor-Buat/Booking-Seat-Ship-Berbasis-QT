#ifndef DAFTAR_PETUGAS_H
#define DAFTAR_PETUGAS_H

#include <QDialog>

namespace Ui {
class daftar_petugas;
}

class daftar_petugas : public QDialog
{
    Q_OBJECT

public:
    explicit daftar_petugas(QWidget *parent = nullptr);
    ~daftar_petugas();

private:
    Ui::daftar_petugas *ui;
};

#endif // DAFTAR_PETUGAS_H
