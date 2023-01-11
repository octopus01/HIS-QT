#ifndef MED_MANAGE_H
#define MED_MANAGE_H

#include <QDialog>

namespace Ui {
class med_manage;
}

class med_manage : public QDialog
{
    Q_OBJECT

public:
    explicit med_manage(QWidget *parent = nullptr);
    ~med_manage();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

private:
    Ui::med_manage *ui;
};

#endif // MED_MANAGE_H
