#include "med_manage_new.h"
#include "ui_med_manage_new.h"
#include "class/Myhead.h"
#include "class/Medicine.h"
med_manage_new::med_manage_new(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::med_manage_new)
{
    ui->setupUi(this);
}

med_manage_new::~med_manage_new()
{
    delete ui;
}

void med_manage_new::on_pushButton_clicked()
{
    QString name =ui->lineEdit->text();
    QString num =ui->lineEdit_2->text();
    QString price=ui->lineEdit_3->text();
    if(name==""||num==""||price=="") return;
    string name1=name.toStdString();
    string num1=num.toStdString();
    string price1=price.toStdString();
    int num2=stoi(num1);
    float price2=stof(price1);
    if(check_name_med(name1))
    {
    addNode_to_List_medcine( name1, num2,  price2);
    writeList_to_File_med();
    QMessageBox::information(this,"药品管理","添加成功");
    }
    else  QMessageBox::information(this,"药品管理","已有药品");
}
