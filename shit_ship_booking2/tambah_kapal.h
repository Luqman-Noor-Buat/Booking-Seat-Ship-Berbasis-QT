#ifndef TAMBAH_KAPAL_H
#define TAMBAH_KAPAL_H

#include <QDialog>

namespace Ui {
class tambah_kapal;
}

class tambah_kapal : public QDialog
{
    Q_OBJECT

public:
    explicit tambah_kapal(QWidget *parent = nullptr);
    ~tambah_kapal();

private:
    Ui::tambah_kapal *ui;
};

#endif // TAMBAH_KAPAL_H
