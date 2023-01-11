#include "reg_staff_med.h"
#include "ui_reg_staff_med.h"
#include "class/Myhead.h"
#include "class/Staff.h"
reg_staff_med::reg_staff_med(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_staff_med)
{
    ui->setupUi(this);
}

reg_staff_med::~reg_staff_med()
{
    delete ui;
}

void reg_staff_med::on_pushButton_clicked()
{
    QString name =ui->lineEdit->text();
    QString password =ui->lineEdit_2->text();
    if(name==""||password=="") return;
    string name1=name.toStdString();
    string password1=password.toStdString();
    if(check_name_staff(name1))
    {
    addNode_to_List_staff_med(name1,password1);
    writeList_to_File_staff();
    QMessageBox::information(this,"login","注册成功");
    close();
    }
    else QMessageBox::information(this,"login","已被注册");
}
