#ifndef INPUT_PETUGAS_H
#define INPUT_PETUGAS_H

#include <QDialog>

namespace Ui {
class input_petugas;
}

class input_petugas : public QDialog
{
    Q_OBJECT

public:
    explicit input_petugas(QWidget *parent = nullptr);
    ~input_petugas();

private:
    Ui::input_petugas *ui;
};

#endif // INPUT_PETUGAS_H
