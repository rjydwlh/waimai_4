/********************************************************************************
** Form generated from reading UI file 'discount.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISCOUNT_H
#define UI_DISCOUNT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_discount
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QWidget *discount)
    {
        if (discount->objectName().isEmpty())
            discount->setObjectName("discount");
        discount->resize(400, 300);
        pushButton = new QPushButton(discount);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(260, 50, 61, 31));
        textBrowser = new QTextBrowser(discount);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 40, 151, 51));
        textBrowser_2 = new QTextBrowser(discount);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(30, 120, 151, 61));
        textBrowser_3 = new QTextBrowser(discount);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(30, 210, 151, 61));
        label = new QLabel(discount);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 12, 101, 20));
        label_2 = new QLabel(discount);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 95, 101, 21));
        label_3 = new QLabel(discount);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 190, 111, 20));

        retranslateUi(discount);

        QMetaObject::connectSlotsByName(discount);
    } // setupUi

    void retranslateUi(QWidget *discount)
    {
        discount->setWindowTitle(QCoreApplication::translate("discount", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("discount", "\350\277\224\345\233\236", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("discount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\345\275\223\345\211\215\344\274\230\346\203\240\347\255\211\347\272\247</span></p></body></html>", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("discount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\344\274\230\346\203\240\345\206\205\345\256\271</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("discount", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:16pt; font-weight:700;\">\344\274\230\346\203\240\347\255\211\347\272\247\350\257\264\346\230\216</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("discount", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\345\275\223\345\211\215\344\274\230\346\203\240\347\255\211\347\272\247</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("discount", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\274\230\346\203\240\345\206\205\345\256\271</span></p></body></html>", nullptr));
        label_3->setText(QCoreApplication::translate("discount", "<html><head/><body><p><span style=\" font-size:11pt; font-weight:700;\">\344\274\230\346\203\240\347\255\211\347\272\247\350\257\264\346\230\216</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class discount: public Ui_discount {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISCOUNT_H
