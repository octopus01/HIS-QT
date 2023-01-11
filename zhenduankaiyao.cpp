#include "zhenduankaiyao.h"
#include "ui_zhenduankaiyao.h"
#include "diagnose.h"
#include "kaiyao.h"
zhenduankaiyao::zhenduankaiyao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::zhenduankaiyao)
{
    ui->setupUi(this);
}

zhenduankaiyao::~zhenduankaiyao()
{
    delete ui;
}

void zhenduankaiyao::on_pushButton_clicked()
{
    Diagnose diagnose;
    diagnose.exec();
}

void zhenduankaiyao::on_pushButton_2_clicked()
{
    kaiyao kaiyao;
    kaiyao.exec();
}
