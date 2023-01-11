#ifndef DE_H
#define DE_H

#include <QDialog>

namespace Ui {
class de;
}

class de : public QDialog
{
    Q_OBJECT

public:
    explicit de(QWidget *parent = nullptr);
    ~de();

private slots:
    void on_pushButton_clicked();

private:
    Ui::de *ui;
};

#endif // DE_H
