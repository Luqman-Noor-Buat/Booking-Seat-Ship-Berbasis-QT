#ifndef LOGIN_PETUGAS_H
#define LOGIN_PETUGAS_H

#include <QDialog>

namespace Ui {
class login_petugas;
}

class login_petugas : public QDialog
{
    Q_OBJECT

public:
    explicit login_petugas(QWidget *parent = nullptr);
    ~login_petugas();

private:
    Ui::login_petugas *ui;
};

#endif // LOGIN_PETUGAS_H
