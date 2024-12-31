#include "pay.h"
#include "ui_pay.h"
#include "commodity.h"
#include "discount.h"
#include <QMessageBox>

pay::pay(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::pay)
{
    ui->setupUi(this);
    ui->scrollAreaWidgetContents->setGeometry(0,0,800,1200);


    // 创建已下订单界面实例，并设置其父控件为scrollAreaWidgetContents
    Oneorder = new oneorder(ui->scrollAreaWidgetContents);
    Oneorder->setGeometry(0, 0, 400, 300); // 设置商家界面的位置和大小
}

pay::~pay()
{
    delete ui;
}


void pay::on_pushButton_2_clicked()
{
    commodity *Commodity=new commodity;

    Commodity->show();
    this->hide();
}


void pay::on_pushButton_3_clicked()
{
    discount *Discount=new discount;

    Discount->show();
    this->hide();
}


void pay::on_pushButton_clicked()
{
    QMessageBox::information(this, "提示", "成功支付！");
}
