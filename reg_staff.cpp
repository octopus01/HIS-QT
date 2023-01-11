#include "reg_staff.h"
#include "ui_reg_staff.h"
#include "class/Staff.h"
#include "class/Myhead.h"
reg_staff::reg_staff(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_staff)
{
    ui->setupUi(this);
}

reg_staff::~reg_staff()
{
    delete ui;
}

void reg_staff::on_pushButton_clicked()
{
    QString name =ui->lineEdit->text();
    QString password =ui->lineEdit_2->text();
    if(name==""||password=="") return;
    string name1=name.toStdString();
    string password1=password.toStdString();
    if(check_name_staff(name1))
    {
    addNode_to_List_staff_doc(name1,password1);
    writeList_to_File_staff();
    QMessageBox::information(this,"login","注册成功");
    close();
    }
    else QMessageBox::information(this,"login","已被注册");
}
