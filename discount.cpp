#include "discount.h"
#include "ui_discount.h"
#include "pay.h"

discount::discount(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::discount)
{
    ui->setupUi(this);
}

discount::~discount()
{
    delete ui;
}

void discount::on_pushButton_clicked()
{
    pay *Pay=new pay;

    Pay->show();
    this->hide();
}

