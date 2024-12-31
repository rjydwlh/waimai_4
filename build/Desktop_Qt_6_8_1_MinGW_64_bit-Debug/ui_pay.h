/********************************************************************************
** Form generated from reading UI file 'pay.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAY_H
#define UI_PAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_pay
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label;
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;

    void setupUi(QWidget *pay)
    {
        if (pay->objectName().isEmpty())
            pay->setObjectName("pay");
        pay->resize(756, 454);
        scrollArea = new QScrollArea(pay);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(20, 40, 531, 331));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 529, 329));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label = new QLabel(pay);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 12, 81, 20));
        pushButton = new QPushButton(pay);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 390, 80, 31));
        textBrowser = new QTextBrowser(pay);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(200, 390, 131, 31));
        textBrowser_2 = new QTextBrowser(pay);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(350, 390, 71, 31));
        pushButton_2 = new QPushButton(pay);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(620, 40, 80, 31));
        pushButton_3 = new QPushButton(pay);
        pushButton_3->setObjectName("pushButton_3");
        pushButton_3->setGeometry(QRect(620, 190, 80, 41));

        retranslateUi(pay);

        QMetaObject::connectSlotsByName(pay);
    } // setupUi

    void retranslateUi(QWidget *pay)
    {
        pay->setWindowTitle(QCoreApplication::translate("pay", "Form", nullptr));
        label->setText(QCoreApplication::translate("pay", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\345\267\262\351\200\211\345\225\206\345\223\201</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("pay", "\345\216\273\346\224\257\344\273\230", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("pay", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\346\200\273\351\207\221\351\242\235</span></p></body></html>", nullptr));
        pushButton_2->setText(QCoreApplication::translate("pay", "\350\277\224\345\233\236", nullptr));
        pushButton_3->setText(QCoreApplication::translate("pay", "\346\237\245\347\234\213\344\274\230\346\203\240\347\255\211\347\272\247", nullptr));
    } // retranslateUi

};

namespace Ui {
    class pay: public Ui_pay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAY_H
