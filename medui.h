#ifndef MEDUI_H
#define MEDUI_H

#include <QDialog>

namespace Ui {
class medui;
}

class medui : public QDialog
{
    Q_OBJECT

public:
    explicit medui(QWidget *parent = nullptr);
    ~medui();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::medui *ui;
};

#endif // MEDUI_H
