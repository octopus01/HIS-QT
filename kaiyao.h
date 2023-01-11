#ifndef KAIYAO_H
#define KAIYAO_H

#include <QDialog>

namespace Ui {
class kaiyao;
}

class kaiyao : public QDialog
{
    Q_OBJECT

public:
    explicit kaiyao(QWidget *parent = nullptr);
    ~kaiyao();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::kaiyao *ui;
};

#endif // KAIYAO_H
