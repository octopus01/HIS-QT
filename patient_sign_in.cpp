#include "patient_sign_in.h"
#include "ui_patient_sign_in.h"
#include "guahaoshoufei.h"
#include "class/Myhead.h"
patient_sign_in::patient_sign_in(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::patient_sign_in)
{
    ui->setupUi(this);
}

patient_sign_in::~patient_sign_in()
{
    delete ui;
}

void patient_sign_in::on_pushButton_login_clicked()
{
    QString name =ui->lineEdit_name->text();
    QString password =ui->lineEdit_password->text();
    if(name==""||password=="") return;
    string name1=name.toStdString();
    string password1=password.toStdString();
    if(Verify_accout(name1, password1))
    {
        QMessageBox::information(this,"login","成功登录");
        guahaoshoufei guahaoshoufei;
        close();
        guahaoshoufei.exec();

    }
    else
    {
         QMessageBox::information(this,"login","用户名或密码错误");
    }
}
