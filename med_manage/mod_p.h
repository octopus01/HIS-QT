#ifndef MOD_P_H
#define MOD_P_H

#include <QDialog>

namespace Ui {
class mod_p;
}

class mod_p : public QDialog
{
    Q_OBJECT

public:
    explicit mod_p(QWidget *parent = nullptr);
    ~mod_p();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mod_p *ui;
};

#endif // MOD_P_H
