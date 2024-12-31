#include "shangp.h"
#include "ui_shangp.h"

QHBoxLayout* showinfo(merchantinfo_manager::merchantinfo x){
    QHBoxLayout* L = new QHBoxLayout();

    QLabel* data0 = new QLabel();
    data0->setText(x.dish);
    L->addWidget(data0);

    QLabel* data1 = new QLabel();
    data1->setText(x.cost);
    L->addWidget(data1);

    QLabel* data2 = new QLabel();
    data2->setText(x.detail);
    L->addWidget(data2);

    QLabel* data3 = new QLabel();
    data3->setText(x.xiaoliang);
    L->addWidget(data3);
    L->setSpacing(40);
    return L;
}
QLabel* settex(QString data){
    QLabel* ret = new QLabel();
    ret->setText(data);
    return ret;
}

ShangP::ShangP(QWidget *parent,QString id)
    : QWidget(parent)
    , ui(new Ui::ShangP)
{
    this->id = id;
    ui->setupUi(this);
    merchantinfo_manager solve("merchant\\" + id);
    QWidget* w = new QWidget();
    QVBoxLayout * s = new QVBoxLayout(w);
    QHBoxLayout* headers = new QHBoxLayout();

    headers->addWidget(settex("菜名\t"));
    headers->addWidget(settex("销量\t"));
    headers->addWidget(settex("价格\t"));
    headers->addWidget(settex("详情\t"));
    headers->setSpacing(40);

    s->addLayout(headers);

    for(int i = 0;i<solve.info.size();i++){
        QHBoxLayout* ans = showinfo(solve.info[i]);
        s->addLayout(ans);
    }
    ui->scrollArea->setWidget(w);
}

ShangP::~ShangP()
{
    delete ui;
}

void ShangP::on_pushButton_clicked()
{
    Widget *father = new Widget();
    this->close();
    father->show();
}


void ShangP::on_pushButton_2_clicked()
{
    this->close();                   //关闭该界面 打开目标界面
    XiuGai *pic = new XiuGai();
    pic->show();
}

