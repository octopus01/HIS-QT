#ifndef DEL_H
#define DEL_H

#include <QDialog>

namespace Ui {
class del;
}

class del : public QDialog
{
    Q_OBJECT

public:
    explicit del(QWidget *parent = nullptr);
    ~del();

private slots:
    void on_pushButton_clicked();

private:
    Ui::del *ui;
};

#endif // DEL_H
