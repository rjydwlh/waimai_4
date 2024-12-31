#include "merchant_infornation.h"
#include "ui_merchant_infornation.h"
#include "commodity.h"
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QPixmap>

merchant::merchant(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::merchant_WANG)
{
    ui->setupUi(this);

    // 固定路径下的.txt文件
    QString txtFilePath = "text_file/商家信息.txt";
    QFile txtFile(txtFilePath);
    if (txtFile.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream txtStream(&txtFile);
        QString firstLine;
        QString remainingText;

        // 读取第一行作为商家名称
        firstLine = txtStream.readLine();
        ui->pushButton->setText(firstLine); // 设置按钮名称为商家名称

        // 读取剩余的文本
        while (!txtStream.atEnd()) {
            remainingText += txtStream.readLine() + "\n";
        }

        txtFile.close();

        // 显示文本
        ui->textBrowser_2->setText(remainingText); // 在textBrowser_2中显示文本
    } else {
        qDebug() << "无法打开文件:" << txtFilePath;
    }

    // 固定路径下的.jpg文件
    QString jpgFilePath = "text_file/牛肉面馆.jpg";
    QPixmap pixmap(jpgFilePath);
    if (pixmap.isNull()) {
        qDebug() << "Failed to load pixmap. Please check the file path and ensure the file is accessible.";
        ui->label->setText("图片加载失败");
    } else {
        ui->label->setPixmap(pixmap.scaled(ui->label->size(), Qt::KeepAspectRatio));
    }
}

merchant::~merchant()
{
    delete ui;
}

void merchant::on_pushButton_clicked()
{
    commodity *Commodity = new commodity;
    Commodity->show();
    this->close();
}
