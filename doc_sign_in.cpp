#include "doc_sign_in.h"
#include "ui_doc_sign_in.h"
#include "class/Myhead.h"
#include "docui.h"
doc_sign_in::doc_sign_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::doc_sign_in)
{
    ui->setupUi(this);
}

doc_sign_in::~doc_sign_in()
{
    delete ui;
}

void doc_sign_in::on_pushButton_clicked()
{
    QString name =ui->lineEdit->text();
    QString password =ui->lineEdit_2->text();
    string name1=name.toStdString();
    string password1=password.toStdString();
    if(Verify_accout_staff_doc(name1, password1))
    {
        QMessageBox::information(this,"login","登录成功");
        docui docui;
        close();
        docui.exec();
    }
    else
    {
         QMessageBox::information(this,"login","用户名或密码错误");
    }
}

void doc_sign_in::on_pushButton_2_clicked()
{

}
