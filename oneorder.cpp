#include "oneorder.h"
#include "ui_oneorder.h"

oneorder::oneorder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::oneorder)
{
    ui->setupUi(this);

}

oneorder::~oneorder()
{
    delete ui;
}
