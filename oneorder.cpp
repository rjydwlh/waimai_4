#include "oneorder.h"
#include "ui_oneorder.h"
#include <QFileDialog>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QPixmap>

oneorder::oneorder(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::oneorder)
{
    ui->setupUi(this);

    QString txtFilePath = "text_file/商品信息.txt";
    QFile textfile(txtFilePath); // 参数就是文件的路径
    if (textfile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&textfile);
        QString firstLine;
        QString remainingText;


        firstLine = stream.readLine();
        ui->textBrowser_3->setText(firstLine); // 设置名称为商品价格

        // 读取剩余的文本
        while (!stream.atEnd()) {
            remainingText += stream.readLine() + "\n";
        }

        textfile.close();

        // 显示图片
        QString jpgFilePath = "text_file/牛肉面.jpg";

        QPixmap pixmap(jpgFilePath);
        if (pixmap.isNull()) {
            qDebug() << "Failed to load pixmap. Please check the file path and ensure the file is accessible."; // 输出错误信息
            ui->label->setText("图片加载失败");
        } else {
            ui->label->setPixmap(pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio));
        }

        // 显示文本
        ui->textBrowser_2->setText(remainingText); // 需要在textBrowser_2中显示文本
    } else {
        qDebug() << "无法打开文件";
    }
}

oneorder::~oneorder()
{
    delete ui;
}
