#ifndef patient_sign_in_H
#define patient_sign_in_H

#include <QDialog>

namespace Ui {
class patient_sign_in;
}

class patient_sign_in : public QDialog
{
    Q_OBJECT

public:
    explicit patient_sign_in(QWidget *parent = nullptr);
    ~patient_sign_in();

private slots:
    void on_pushButton_login_clicked();

private:
    Ui::patient_sign_in *ui;
};

#endif // patient_sign_in_H
