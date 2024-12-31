#include "commodity.h"
#include "ui_commodity.h"
#include "pay.h"
#include "consumer.h"
commodity::commodity(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::commodity)
{
    ui->setupUi(this);
    ui->scrollAreaWidgetContents->setGeometry(0,0,500,600);


    // 创建订单界面实例，并设置其父控件为scrollAreaWidgetContents
    Oneorder = new oneorder(ui->scrollAreaWidgetContents);
    Oneorder->setGeometry(0, 0, 400, 400); // 设置订单界面的位置和大小
}

commodity::~commodity()
{
    delete ui;
}

void commodity::on_pushButton_2_clicked()
{
    pay *Pay=new pay;

    Pay->show();
    this->hide();
}


void commodity::on_pushButton_clicked()
{
    consumer *Consumer=new consumer;

    Consumer->show();
    this->hide();
}
