#ifndef DIAGNOSE_H
#define DIAGNOSE_H

#include <QDialog>

namespace Ui {
class Diagnose;
}

class Diagnose : public QDialog
{
    Q_OBJECT

public:
    explicit Diagnose(QWidget *parent = nullptr);
    ~Diagnose();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Diagnose *ui;
};

#endif // DIAGNOSE_H
