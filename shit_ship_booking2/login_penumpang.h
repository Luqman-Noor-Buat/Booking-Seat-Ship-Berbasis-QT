#ifndef LOGIN_PENUMPANG_H
#define LOGIN_PENUMPANG_H

#include <QDialog>

namespace Ui {
class login_penumpang;
}

class login_penumpang : public QDialog
{
    Q_OBJECT

public:
    explicit login_penumpang(QWidget *parent = nullptr);
    ~login_penumpang();

private:
    Ui::login_penumpang *ui;
};

#endif // LOGIN_PENUMPANG_H
