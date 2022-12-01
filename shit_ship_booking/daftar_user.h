#ifndef DAFTAR_USER_H
#define DAFTAR_USER_H

#include <QDialog>

namespace Ui {
class daftar_user;
}

class daftar_user : public QDialog
{
    Q_OBJECT

public:
    explicit daftar_user(QWidget *parent = nullptr);
    ~daftar_user();

private:
    Ui::daftar_user *ui;
};

#endif // DAFTAR_USER_H
