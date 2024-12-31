#include "admin.h"
#include "ui_admin.h"
#ifndef INFO_RESTAURANT_H
#include "info_restaurant.h"
#endif
#ifndef SEARCH_RESTAURANT
#include "search_restaurant.h"
#endif
#ifndef SALES_LOG_CPP
#include "sales_log.h"
#endif
admin::admin(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::admin)
{
    ui->setupUi(this);
}

admin::~admin()
{
    delete ui;
}




void admin::on_btn1_clicked()
{
    search_restaurant* data = new search_restaurant();
    data->show();
}


void admin::on_btn2_clicked()
{
    sales_log* next = new sales_log();
    next->show();
}

