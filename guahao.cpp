#include "guahao.h"
#include "ui_guahao.h"
#include "class/Myhead.h"
#include "class/Staff.h"

guahao::guahao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guahao)
{
    ui->setupUi(this);
    for (Staff::node1 = Staff::Staff_list.begin(); Staff::node1 != Staff::Staff_list.end(); ++Staff::node1)
        {
            if (Staff::node1->type == "医护") {
              ui->listWidget->addItem(QString::fromStdString(Staff::node1->name));
            }
        }


}

guahao::~guahao()
{
    delete ui;
}

void guahao::on_pushButton_clicked()
{
    for (Staff::node1 = Staff::Staff_list.begin(); Staff::node1 != Staff::Staff_list.end(); ++Staff::node1)
        {
            if (QString::fromStdString(Staff::node1->name) == ui->listWidget->currentItem()->text())
           {
                break;
            }
        }
    if(Patient::node == Patient::Person.end())
    {
        QMessageBox::information(this,"HIS","不能为空");
        return;
    }
    Patient::node->doctor=Staff::node1->name;
    writeList_to_File();
    QMessageBox::information(this,"挂号","挂号成功");

}
