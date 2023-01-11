#ifndef ZHENDUANKAIYAO_H
#define ZHENDUANKAIYAO_H

#include <QDialog>

namespace Ui {
class zhenduankaiyao;
}

class zhenduankaiyao : public QDialog
{
    Q_OBJECT

public:
    explicit zhenduankaiyao(QWidget *parent = nullptr);
    ~zhenduankaiyao();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::zhenduankaiyao *ui;
};

#endif // ZHENDUANKAIYAO_H
