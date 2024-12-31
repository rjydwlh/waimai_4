
#include "mainwindow.h"
#include "qt.h"
#include "./ui_qt.h"
#ifndef REGIS_H
    #include "regis.h"
#endif
#ifndef MAINMER_H
    #include "MainMer.h"
#endif
#ifndef  CONSUMER_H
    #include"consumer.h"
#endif
#ifndef KEYMANAGER_H
#include "keymanager.h"
#endif


#ifndef ADMIN_H
#include "admin.h"2
#endif
#include <QFile>
QT::QT(QWidget *parent,QString s1, QString s2,QString s3)
    : QMainWindow(parent)
    , ui(new Ui::sign_in_widget)
{
    ui->setupUi(this);
    ui->account_line->setText(s1);
    ui->key_line->setText(s2);
    ui->key_line->setEchoMode(QLineEdit::Password);
    ui->ident_com->setCurrentText(s3);
}

QT::~QT()
{
    delete ui;
}

void QT::on_sign_in_btn_clicked(bool checked)
{
    auto  result = QMessageBox::information(NULL,"text","sign in successfully",QMessageBox::Yes|QMessageBox::No);
    QString accountinfo = ui->account_line->text();
    QString keyinfo = ui->key_line->text();
    int id = ui->ident_com->currentIndex();
    QString s = ui->ident_com->currentText();
    keymanager solve;
    bool OK = solve.check(accountinfo+"\t"+keyinfo+"\t"+s+"\r\n");
    if(!OK){
        QMessageBox::information(NULL,"warn","密码错误!!!");
        return;
    }
    if(id==0){
        consumer* next = new consumer();
        this->close();
        next->show();

    } else if(id == 1){

        this->close();
        Widget* next = new Widget(NULL,accountinfo);
        next->show();

    } else {
        this->close();
        admin* next = new admin();
        next->show();

    }

    return;
}


void QT::on_account_line_editingFinished()
{
    QString tex = ui->account_line->text();
    if(!p(tex)){
        ui->w1->setText("格式错误, 由大小写英文字母<br>和数字组成");
    }
}






void QT::on_key_line_editingFinished()
{
    QString tex = ui->key_line->text();
    if(!p(tex)){
        ui->w2->setText("格式错误, 由大小写英文字母<br>和数字组成");
    }
}


void QT::on_account_line_textEdited(const QString &arg1)
{
    ui->w1->setText("");
}


void QT::on_key_line_textEdited(const QString &arg1)
{
      ui->w2->setText("");
}


void QT::on_regis_btn_clicked(bool checked)
{
    this->close();
    regis* son = new regis();
    son->show();
}


void QT::on_regis_btn_clicked()
{

}

