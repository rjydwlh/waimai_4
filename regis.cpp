
#ifndef REGIS_H
#include "regis.h"
#endif
#include "ui_regis.h"

// Json 文件头文件
#include<QMessageBox>
#include <QFile>

#ifndef KEYMANAGER_H
    #include "keymanager.h"
#endif

regis::regis(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::regis)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    ui->lineEdit_3->setEchoMode(QLineEdit::Password);
    ui->warn1->setText("");
    ui->warn2->setText("");
    ui->warn3->setText("");
}

regis::~regis()
{
    delete ui;
}

void add(QString a , QString b , QString c,QFile& x){
    QString s = a+ "\t"+b+"\t"+c+"\r\n";
    x.write(s.toUtf8());
}

void regis::on_btn_regis_clicked(bool checked)
{
    if(!warn_1 && !warn_2 && !warn_3){
        QString account = ui->lineEdit->text();
        QString key = ui->lineEdit_3->text();
        QString id = ui->ident_com_2->currentText();
        qint32 _id = ui->ident_com_2->currentIndex();
        auto t1 = account.toUtf8();
        auto t2 = key.toUtf8();
        auto t3 = id.toUtf8();
        this->close();
        keymanager solve;
        solve.add(account,key,id);
        QT* signin = new QT(NULL,account, key,id);
        signin->show();
    } else {
        QMessageBox::information(NULL,"warn","注册失败!");
        return;
    }

}


void regis::on_lineEdit_editingFinished()
{
    QString text = ui->lineEdit->text();
    if(!p(text)){
        ui->warn1->setText("格式错误, 由大小写英文字母<br>和数字组成");
        warn_1 = 1;
    }
}


void regis::on_lineEdit_textEdited(const QString &arg1)
{
    warn_1 =0;
    ui->warn1->setText("");
}


void regis::on_lineEdit_2_textEdited(const QString &arg1)
{
    warn_2 = 0;
    ui->warn2->setText("");
}


void regis::on_lineEdit_2_editingFinished()
{
    QString text = ui->lineEdit_2->text();
    if(!p(text)){
        ui->warn2->setText("格式错误, 由大小写英文字母<br>和数字组成");
        warn_2 = 1;
    }
}


void regis::on_lineEdit_3_editingFinished()
{
    QString text = ui->lineEdit_3->text();
    if(!p(text)){
        ui->warn3->setText("格式错误, 由大小写英文字母和数字组成");
    }
    QString text2 = ui->lineEdit_2->text();
    if(text!= text2){
        ui->warn3->setText("两次密码不相同!");
    }
}


void regis::on_lineEdit_3_textEdited(const QString &arg1)
{
    warn_3 = 0;
    ui->warn3->setText("");
}

