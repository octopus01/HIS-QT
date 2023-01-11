#ifndef REG_PAT_H
#define REG_PAT_H

#include <QDialog>

namespace Ui {
class reg_pat;
}

class reg_pat : public QDialog
{
    Q_OBJECT

public:
    explicit reg_pat(QWidget *parent = nullptr);
    ~reg_pat();

private slots:
    void on_pushButton_clicked();

private:
    Ui::reg_pat *ui;
};

#endif // REG_PAT_H
