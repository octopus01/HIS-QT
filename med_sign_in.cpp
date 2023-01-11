#include "med_sign_in.h"
#include "ui_med_sign_in.h"
#include "medui.h"
#include "class/Myhead.h"
med_sign_in::med_sign_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::med_sign_in)
{
    ui->setupUi(this);
}

med_sign_in::~med_sign_in()
{
    delete ui;
}

void med_sign_in::on_pushButton_clicked()
{
    QString name =ui->lineEdit->text();
    QString password =ui->lineEdit_2->text();
    if(name==""||password=="") return;
    string name1=name.toStdString();
    string password1=password.toStdString();
    if(Verify_accout_staff_med(name1, password1))
    {
        QMessageBox::information(this,"login","登录成功");
        medui medui;
        close();
        medui.exec();
    }
    else
    {
         QMessageBox::information(this,"login","用户名或密码错误");
    }
}
