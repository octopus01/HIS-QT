#include "docui.h"
#include "ui_docui.h"
#include "class/Myhead.h"
#include "zhenduankaiyao.h"
docui::docui(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::docui)
{
    ui->setupUi(this);
    for (Patient::node = Patient::Person.begin(); Patient::node != Patient::Person.end(); ++Patient::node)
        {
            if (Patient::node->doctor == Staff::node1->name&&Patient::node->status==0) {
              ui->listWidget->addItem(QString::fromStdString(Patient::node->name));
            }
        }

}

docui::~docui()
{
    delete ui;
}

void docui::on_pushButton_clicked()
{
    for (Patient::node = Patient::Person.begin(); Patient::node != Patient::Person.end(); ++Patient::node)
        {
            if (QString::fromStdString(Patient::node->name) == ui->listWidget->currentItem()->text())
           {
                break;
            }
        }
    if(Patient::node == Patient::Person.end())
    {
        QMessageBox::information(this,"HIS","不能为空");
        return;
    }

    zhenduankaiyao zhen;
    zhen.exec();
}
