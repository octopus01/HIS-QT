#ifndef DOC_SIGN_IN_H
#define DOC_SIGN_IN_H

#include <QDialog>

namespace Ui {
class doc_sign_in;
}

class doc_sign_in : public QDialog
{
    Q_OBJECT

public:
    explicit doc_sign_in(QWidget *parent = nullptr);
    ~doc_sign_in();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::doc_sign_in *ui;
};

#endif // DOC_SIGN_IN_H
