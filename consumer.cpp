#include "consumer.h"
#include "ui_consumer.h"


consumer::consumer(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::consumer)

{
    ui->setupUi(this);
    ui->scrollAreaWidgetContents->setGeometry(0,0,800,1200);


    // 创建商家界面实例，并设置其父控件为scrollAreaWidgetContents
    Merchant = new merchant(ui->scrollAreaWidgetContents);
    Merchant->setGeometry(0, 0, 400, 300); // 设置商家界面的位置和大小
}

consumer::~consumer()
{
    delete ui;
}


