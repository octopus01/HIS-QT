#include "add.h"
#include "ui_add.h"
#include <class/Myhead.h>
add::add(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add)
{
    ui->setupUi(this);
}

add::~add()
{
    delete ui;
}

void add::on_pushButton_clicked()
{

    QString name=ui->lineEdit->text();
    QString num =ui->lineEdit_2->text();
    if(name==""||num=="") return;
    string name1=name.toStdString();
    string num1=num.toStdString();
    int num2 =stoi(num1);
    add_med(name1,num2);
    writeList_to_File_med();
    QMessageBox::information(this,"药品管理",name+"增加"+num+"件");

}
