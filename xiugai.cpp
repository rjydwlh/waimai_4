#include "xiugai.h"
#include "ui_xiugai.h"

XiuGai::XiuGai(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::XiuGai)
{
    ui->setupUi(this);


}

XiuGai::~XiuGai()
{
    delete ui;
}

void XiuGai::on_pushButton_clicked()
{
    ShangP *father = new ShangP();
    this->close();
    father->show();
}


void XiuGai::on_Save_clicked()
{
    ShangP *father = new ShangP();
    this->close();
    father->show();

}

