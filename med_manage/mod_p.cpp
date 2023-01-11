#include "mod_p.h"
#include "ui_mod_p.h"
#include "class/Myhead.h"
mod_p::mod_p(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mod_p)
{
    ui->setupUi(this);
}

mod_p::~mod_p()
{
    delete ui;
}

void mod_p::on_pushButton_clicked()
{
    QString name=ui->lineEdit->text();
    QString num =ui->lineEdit_2->text();
    if(name==""||num=="") return;
    string name1=name.toStdString();
    string num1=num.toStdString();
    float num2 =stof(num1);
    mod_p_med(name1,num2);
    writeList_to_File_med();
    QMessageBox::information(this,"药品管理",name+"定价修改为:"+num);
}
