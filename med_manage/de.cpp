#include "de.h"
#include "ui_de.h"
#include "class/Myhead.h"
de::de(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::de)
{
    ui->setupUi(this);
}

de::~de()
{
    delete ui;
}

void de::on_pushButton_clicked()
{
    QString name=ui->lineEdit->text();
    QString num =ui->lineEdit_2->text();
    if(name==""||num=="") return;
    string name1=name.toStdString();
    string num1=num.toStdString();
    int num2 =stoi(num1);
    de_med(name1,num2);
    writeList_to_File_med();
    QMessageBox::information(this,"药品管理",name+"减少"+num+"件");
}
