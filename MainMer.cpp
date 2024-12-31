#include "MainMer.h"   //包含了一头文件
#include "ui_MainMer.h"

Widget::Widget(QWidget *parent,QString id)
    : QWidget(parent)       //初始化参数列表 调用了父类的函数
    , ui(new Ui::Widget)
{
    this->id = id;
    ui->setupUi(this);


}

Widget::~Widget()
{
    delete ui;
}





void Widget::on_ButtonToCh_clicked()
{
    this->close();                   //关闭该界面 打开目标界面
    ShangP *pic = new ShangP(NULL,id);
    pic->show();
}


void Widget::on_ButtonToDi_clicked()
{
    this->close();                   //关闭该界面 打开目标界面
    DingD *pic = new DingD();
    pic->show();
}



