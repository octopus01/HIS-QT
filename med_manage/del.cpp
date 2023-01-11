#include "del.h"
#include "ui_del.h"
#include "class/Myhead.h"
del::del(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::del)
{
    ui->setupUi(this);
}

del::~del()
{
    delete ui;
}

void del::on_pushButton_clicked()
{
    QString name=ui->lineEdit->text();
    string name1=name.toStdString();
    if(name=="") return;
    del_med(name1);
    writeList_to_File_med();
    QMessageBox::information(this,"药品管理",name+"删除");
}
