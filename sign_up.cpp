
#include "sign_up.h"
#include "ui_sign_up.h"
#include "reg_pat.h"
#include "reg_staff.h"
#include "reg_staff_med.h"
sign_up::sign_up(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::sign_up)
{
    ui->setupUi(this);
}

sign_up::~sign_up()
{
    delete ui;
}

void sign_up::on_pushButton_2_clicked()
{

  reg_pat reg_pat;
  reg_pat.exec();
}

void sign_up::on_pushButton_4_clicked()
{
    reg_staff reg_staff;
    reg_staff.exec();

}

void sign_up::on_pushButton_3_clicked()
{
    reg_staff_med reg_staff_med;
    reg_staff_med.exec();
}
