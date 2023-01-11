#include "reg_pat.h"
#include "ui_reg_pat.h"
#include "class/Myhead.h"
#include "class/Patient.h"
reg_pat::reg_pat(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::reg_pat)
{
    ui->setupUi(this);
}

reg_pat::~reg_pat()
{
    delete ui;
}

void reg_pat::on_pushButton_clicked()
{
    QString name =ui->lineEdit_name->text();
    QString password =ui->lineEdit_2_password->text();
    if(name==""||password=="") return;
    string name1=name.toStdString();
    string password1=password.toStdString();
    if(check_name(name1))
    {
    addNode_to_List(name1, password1);
    writeList_to_File();
    QMessageBox::information(this,"login","注册成功");
    close();
    }
    else  QMessageBox::information(this,"login","已被注册");
}
