#include "fayao.h"
#include "ui_fayao.h"
#include "class/Myhead.h"
fayao::fayao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::fayao)
{
    ui->setupUi(this);
    ui->comboBox->setEditable(true);				//设置可编辑
    ui->comboBox->setDuplicatesEnabled(false);		//此属性保留用户是否可以在组合框中输入重复项
    for (Patient::node = Patient::Person.begin(); Patient::node != Patient::Person.end(); ++Patient::node)
        {
            if (Patient::node->status==2) {
              ui->comboBox->addItem(QString::fromStdString(Patient::node->name));
            }
        }
}

fayao::~fayao()
{
    delete ui;
}

void fayao::on_pushButton_clicked()
{
    for (Patient::node = Patient::Person.begin(); Patient::node != Patient::Person.end(); ++Patient::node)
    {
        if( QString::fromStdString(Patient::node->name) == ui->comboBox->currentText())
        {
        ui->textBrowser->setText(QString::fromStdString(Patient::node->prescription));
        break;
        }
    }
    if(Patient::node==Patient::Person.end()) QMessageBox::information(this,"错误","无法获取");
}

void fayao::on_pushButton_2_clicked()
{
    for (Patient::node = Patient::Person.begin(); Patient::node != Patient::Person.end(); ++Patient::node)
    {
        if(QString::fromStdString(Patient::node->name) == ui->comboBox->currentText())
        {
        break;
        }
    }
    if(Patient::node == Patient::Person.end()|| Patient::node->prescription=="0") return;
    encode();
    writeList_to_File_med();
    QMessageBox::information(this,"发药","成功");
    close();
}
