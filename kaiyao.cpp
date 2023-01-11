#include "kaiyao.h"
#include "ui_kaiyao.h"
#include "class/Myhead.h"
kaiyao::kaiyao(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::kaiyao)
{
    ui->setupUi(this);
    ui->comboBox->setEditable(true);				//设置可编辑
    ui->comboBox->setDuplicatesEnabled(false);		//此属性保留用户是否可以在组合框中输入重复项
    for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
        {
            if (Medicine::node2->inventory > 0) {
              ui->comboBox->addItem(QString::fromStdString(Medicine::node2->name));
            }
        }

}

kaiyao::~kaiyao()
{
    delete ui;
}

void kaiyao::on_pushButton_clicked()
{
  int i=0;
  static int k=0;
  QString num =ui->lineEdit->text();
  int num1=num.toInt();
  string num2 =num.toStdString();
  for (Medicine::node2 = Medicine::Medicine_list.begin(); Medicine::node2 != Medicine::Medicine_list.end(); ++Medicine::node2)
  {
      if (QString::fromStdString(Medicine::node2->name) == ui->comboBox->currentText() && num1<=Medicine::node2->inventory)
     {
          i=1;
          break;
      }
   }
      if(i==1)
      {
      float   fee1=Medicine::node2->price*num1;
      Patient::node->fee+=fee1;
      if ((*Patient::node).prescription == "0") (*Patient::node).prescription = "";
      string presciption1="_" +Medicine::node2->name+ "*" + num2;
      Patient::node->prescription =Patient::node->prescription+presciption1 ;
      string pre=Patient::node->prescription;
      k++;
      while(pre.find("_")!=-1)
      pre=pre.replace(pre.find("_"),1," ");
      ui->textBrowser->setText(QString::fromStdString(pre));
      writeList_to_File();
      }
      else QMessageBox::information(this,"开药","库存不足或输入非法");
}

void kaiyao::on_pushButton_2_clicked()
{

}

void kaiyao::on_pushButton_3_clicked()
{
    ui->textBrowser->setText("");
    Patient::node->prescription="0";
    writeList_to_File();
}
