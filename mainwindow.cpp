#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "patient_sign_in.h"
#include "sign_up.h"
#include "doc_sign_in.h"
#include "med_sign_in.h"
#include "class/Myhead.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_pat_clicked()
{
    patient_sign_in patient_sign_in;
    patient_sign_in.setModal(true);
    patient_sign_in.exec();

}



void MainWindow::on_pushButton_reg_clicked()
{
    sign_up sign_up;
    sign_up.exec();

}



void MainWindow::on_pushButton_doc_clicked()
{
    doc_sign_in doc_sign_in;
    doc_sign_in.exec();
}

void MainWindow::on_pushButton_med_clicked()
{
   med_sign_in med_sign_in;
   med_sign_in.exec();
}

void MainWindow::on_pushButton_exit_clicked()
{

}
