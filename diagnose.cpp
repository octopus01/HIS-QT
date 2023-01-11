#include "diagnose.h"
#include "ui_diagnose.h"
#include "class/Myhead.h"
Diagnose::Diagnose(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Diagnose)
{
    ui->setupUi(this);
}

Diagnose::~Diagnose()
{
    delete ui;
}

void Diagnose::on_pushButton_clicked()
{
    QString diag =ui->lineEdit->text();
    string diag1=diag.toStdString();
    Patient::node->diagnosis = diag1;
    Patient::node->status=1;
    writeList_to_File();
    QMessageBox::information(this,"诊断","诊断成功");
}
