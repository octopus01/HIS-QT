#ifndef FAYAO_H
#define FAYAO_H

#include <QDialog>

namespace Ui {
class fayao;
}

class fayao : public QDialog
{
    Q_OBJECT

public:
    explicit fayao(QWidget *parent = nullptr);
    ~fayao();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::fayao *ui;
};

#endif // FAYAO_H
