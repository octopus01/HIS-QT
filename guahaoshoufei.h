#ifndef GUAHAOSHOUFEI_H
#define GUAHAOSHOUFEI_H

#include <QDialog>

namespace Ui {
class guahaoshoufei;
}

class guahaoshoufei : public QDialog
{
    Q_OBJECT

public:
    explicit guahaoshoufei(QWidget *parent = nullptr);
    ~guahaoshoufei();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::guahaoshoufei *ui;
};

#endif // GUAHAOSHOUFEI_H
