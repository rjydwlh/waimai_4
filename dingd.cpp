#include "dingd.h"
#include "ui_dingd.h"
#include <vector>
DingD::DingD(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::DingD)
{
    ui->setupUi(this);
}

DingD::~DingD()
{
    delete ui;
}

void DingD::on_pushButton_clicked()
{
    Widget *father = new Widget();
    this->close();
    father->show();
}



