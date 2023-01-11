#ifndef MED_MANAGE_NEW_H
#define MED_MANAGE_NEW_H

#include <QDialog>

namespace Ui {
class med_manage_new;
}

class med_manage_new : public QDialog
{
    Q_OBJECT

public:
    explicit med_manage_new(QWidget *parent = nullptr);
    ~med_manage_new();

private slots:
    void on_pushButton_clicked();

private:
    Ui::med_manage_new *ui;
};

#endif // MED_MANAGE_NEW_H
