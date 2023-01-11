#include "med_manage.h"
#include "ui_med_manage.h"
#include "class/Myhead.h"
#include "med_manage/med_manage_new.h"
#include "med_manage/add.h"
#include "med_manage/de.h"
#include "med_manage/del.h"
#include "med_manage/mod_p.h"
med_manage::med_manage(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::med_manage)
{
    ui->setupUi(this);
}

med_manage::~med_manage()
{
    delete ui;
}

void med_manage::on_pushButton_clicked()
{
    med_manage_new new1;
    new1.exec();
}

void med_manage::on_pushButton_2_clicked()
{
    add add;
    add.exec();
}

void med_manage::on_pushButton_3_clicked()
{
    de de;
    de.exec();
}




void med_manage::on_pushButton_4_clicked()
{
    del del;
    del.exec();
}

void med_manage::on_pushButton_5_clicked()
{
    mod_p mod_p;
    mod_p.exec();
}
