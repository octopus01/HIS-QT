#ifndef MED_SIGN_IN_H
#define MED_SIGN_IN_H

#include <QDialog>

namespace Ui {
class med_sign_in;
}

class med_sign_in : public QDialog
{
    Q_OBJECT

public:
    explicit med_sign_in(QWidget *parent = nullptr);
    ~med_sign_in();

private slots:
    void on_pushButton_clicked();

private:
    Ui::med_sign_in *ui;
};

#endif // MED_SIGN_IN_H
