#ifndef BOOKING_KAPAL_H
#define BOOKING_KAPAL_H

#include <QDialog>

namespace Ui {
class booking_kapal;
}

class booking_kapal : public QDialog
{
    Q_OBJECT

public:
    explicit booking_kapal(QWidget *parent = nullptr);
    ~booking_kapal();

private:
    Ui::booking_kapal *ui;
};

#endif // BOOKING_KAPAL_H
