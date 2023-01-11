#include "medui.h"
#include "ui_medui.h"
#include "class/Myhead.h"
#include "med_manage.h"
#include "fayao.h"
medui::medui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::medui)
{
    ui->setupUi(this);
}

medui::~medui()
{
    delete ui;
}

void medui::on_pushButton_clicked()
{
    med_manage med_manage;
    med_manage.exec();
}

void medui::on_pushButton_2_clicked()
{
    fayao fayao;
    fayao.exec();
}
