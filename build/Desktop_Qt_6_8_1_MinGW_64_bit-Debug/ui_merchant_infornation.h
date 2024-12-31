/********************************************************************************
** Form generated from reading UI file 'merchant_infornation.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MERCHANT_INFORNATION_H
#define UI_MERCHANT_INFORNATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_merchant_WANG
{
public:
    QPushButton *pushButton;
    QTextBrowser *textBrowser_2;
    QLabel *label;

    void setupUi(QWidget *merchant_WANG)
    {
        if (merchant_WANG->objectName().isEmpty())
            merchant_WANG->setObjectName("merchant_WANG");
        merchant_WANG->resize(421, 214);
        pushButton = new QPushButton(merchant_WANG);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(240, 10, 101, 31));
        textBrowser_2 = new QTextBrowser(merchant_WANG);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(180, 60, 191, 91));
        label = new QLabel(merchant_WANG);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 21, 131, 131));

        retranslateUi(merchant_WANG);

        QMetaObject::connectSlotsByName(merchant_WANG);
    } // setupUi

    void retranslateUi(QWidget *merchant_WANG)
    {
        merchant_WANG->setWindowTitle(QCoreApplication::translate("merchant_WANG", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("merchant_WANG", "\345\225\206\345\256\266\345\220\215\347\247\260", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("merchant_WANG", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\225\206\345\256\266\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("merchant_WANG", "\345\225\206\345\256\266\345\233\276\347\211\207", nullptr));
    } // retranslateUi

};

namespace Ui {
    class merchant_WANG: public Ui_merchant_WANG {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MERCHANT_INFORNATION_H
