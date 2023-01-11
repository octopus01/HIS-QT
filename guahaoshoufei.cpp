#include "guahaoshoufei.h"
#include "ui_guahaoshoufei.h"
#include "guahao.h"
#include "class/Myhead.h"
#include <QString>
guahaoshoufei::guahaoshoufei(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::guahaoshoufei)
{
    ui->setupUi(this);
}

guahaoshoufei::~guahaoshoufei()
{
    delete ui;
}

void guahaoshoufei::on_pushButton_clicked()
{
    guahao guahao;
    guahao.exec();
}

void guahaoshoufei::on_pushButton_2_clicked()
{
    if(Patient::node->status!=1){
    QMessageBox::information(this,"收费","Error");
     return;
    }
    float a=Patient::node->fee;
    QString a1= QString("%1").arg(a);
    QMessageBox::information(this,"收费","请付款:"+a1+"圆");
    Patient::node->status=2;
    Patient::node->fee =0;
}
