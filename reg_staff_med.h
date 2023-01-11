#ifndef REG_STAFF_MED_H
#define REG_STAFF_MED_H

#include <QDialog>

namespace Ui {
class reg_staff_med;
}

class reg_staff_med : public QDialog
{
    Q_OBJECT

public:
    explicit reg_staff_med(QWidget *parent = nullptr);
    ~reg_staff_med();

private slots:
    void on_pushButton_clicked();

private:
    Ui::reg_staff_med *ui;
};

#endif // REG_STAFF_MED_H
