/********************************************************************************
** Form generated from reading UI file 'merchant.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCHANT_H
#define UI_MERCHANT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_merchant
{
public:
    QTextBrowser *textBrowser;
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;

    void setupUi(QWidget *merchant)
    {
        if (merchant->objectName().isEmpty())
            merchant->setObjectName("merchant");
        merchant->resize(421, 214);
        textBrowser = new QTextBrowser(merchant);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(40, 20, 101, 121));
        pushButton = new QPushButton(merchant);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 20, 80, 31));
        textBrowser_2 = new QTextBrowser(merchant);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(160, 60, 151, 81));

        retranslateUi(merchant);

        QMetaObject::connectSlotsByName(merchant);
    } // setupUi

    void retranslateUi(QWidget *merchant)
    {
        merchant->setWindowTitle(QCoreApplication::translate("merchant", "Form", nullptr));
        textBrowser->setHtml(QCoreApplication::translate("merchant", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\225\206\345\256\266\345\233\276\347\211\207</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("merchant", "\345\225\206\345\256\266\345\220\215\347\247\260", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("merchant", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\225\206\345\256\266\344\277\241\346\201\257</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class merchant: public Ui_merchant {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHANT_H
