#ifndef DOCUI_H
#define DOCUI_H

#include <QDialog>

namespace Ui {
class docui;
}

class docui : public QDialog
{
    Q_OBJECT

public:
    explicit docui(QWidget *parent = nullptr);
    ~docui();

private slots:
    void on_pushButton_clicked();

private:
    Ui::docui *ui;
};

#endif // DOCUI_H
