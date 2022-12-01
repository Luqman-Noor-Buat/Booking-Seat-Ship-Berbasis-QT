#ifndef JADWAL_KAPAL_H
#define JADWAL_KAPAL_H

#include <QDialog>

namespace Ui {
class jadwal_kapal;
}

class jadwal_kapal : public QDialog
{
    Q_OBJECT

public:
    explicit jadwal_kapal(QWidget *parent = nullptr);
    ~jadwal_kapal();

private:
    Ui::jadwal_kapal *ui;
};

#endif // JADWAL_KAPAL_H
