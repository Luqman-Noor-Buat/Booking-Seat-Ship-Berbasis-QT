#ifndef BOOKING_KURSI_H
#define BOOKING_KURSI_H

#include <QDialog>

namespace Ui {
class booking_kursi;
}

class booking_kursi : public QDialog
{
    Q_OBJECT

public:
    explicit booking_kursi(QWidget *parent = nullptr);
    ~booking_kursi();

private:
    Ui::booking_kursi *ui;
};

#endif // BOOKING_KURSI_H
