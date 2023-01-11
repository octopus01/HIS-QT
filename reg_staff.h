#ifndef REG_STAFF_H
#define REG_STAFF_H

#include <QDialog>

namespace Ui {
class reg_staff;
}

class reg_staff : public QDialog
{
    Q_OBJECT

public:
    explicit reg_staff(QWidget *parent = nullptr);
    ~reg_staff();

private slots:
    void on_pushButton_clicked();

private:
    Ui::reg_staff *ui;
};

#endif // REG_STAFF_H
