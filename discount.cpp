#include "discount.h"
#include "ui_discount.h"
#include "pay.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>

discount::discount(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::discount)
{
    ui->setupUi(this);
    QString txtFilePath = "text_file/优惠等级.txt";
    QFile textfile(txtFilePath); // 参数就是文件的路径

    if (textfile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&textfile);
        QString firstLine;
        QString remainingText;
        QString secondLine;

        firstLine = stream.readLine();
        ui->textBrowser->setText(firstLine); // 设置名称为优惠等级
        if (!stream.atEnd()) { // 确保还有内容可读
            secondLine = stream.readLine();
            ui->textBrowser_2->setText(secondLine); // 设置textBrowser_2为优惠内容
        }
        // 读取剩余的文本
        while (!stream.atEnd()) {
            remainingText += stream.readLine() + "\n";
        }

        textfile.close();
        ui->textBrowser_3->setText(remainingText); // 需要在textBrowser_3中显示文本
}

}
discount::~discount()
{
    delete ui;
}

void discount::on_pushButton_clicked()
{
    pay *Pay=new pay;

    Pay->show();
    this->close();
}

