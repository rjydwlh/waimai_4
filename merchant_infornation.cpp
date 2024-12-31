#include "merchant_infornation.h"
#include "ui_merchant_infornation.h"
#include "commodity.h"

merchant::merchant(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::merchant_WANG)
{
    ui->setupUi(this);
}

merchant::~merchant()
{
    delete ui;
}

void merchant::on_pushButton_clicked()
{
    commodity * Commodity =new commodity;
    Commodity->show();
    this->hide();
}

