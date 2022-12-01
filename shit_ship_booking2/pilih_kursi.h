#ifndef PILIH_KURSI_H
#define PILIH_KURSI_H

#include <QDialog>

namespace Ui {
class pilih_kursi;
}

class pilih_kursi : public QDialog
{
    Q_OBJECT

public:
    explicit pilih_kursi(QWidget *parent = nullptr);
    ~pilih_kursi();

private:
    Ui::pilih_kursi *ui;
};

#endif // PILIH_KURSI_H
