#ifndef GUAHAO_H
#define GUAHAO_H

#include <QDialog>

namespace Ui {
class guahao;
}

class guahao : public QDialog
{
    Q_OBJECT

public:
    explicit guahao(QWidget *parent = nullptr);
    ~guahao();

private slots:
    void on_pushButton_clicked();

private:
    Ui::guahao *ui;
};

#endif // GUAHAO_H
