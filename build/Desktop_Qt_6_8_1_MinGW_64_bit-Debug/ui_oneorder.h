/********************************************************************************
** Form generated from reading UI file 'oneorder.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEORDER_H
#define UI_ONEORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oneorder
{
public:
    QTextBrowser *textBrowser_2;
    QTextBrowser *textBrowser_3;
    QSpinBox *spinBox;
    QLabel *label;

    void setupUi(QWidget *oneorder)
    {
        if (oneorder->objectName().isEmpty())
            oneorder->setObjectName("oneorder");
        oneorder->resize(409, 266);
        textBrowser_2 = new QTextBrowser(oneorder);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(190, 100, 151, 91));
        textBrowser_3 = new QTextBrowser(oneorder);
        textBrowser_3->setObjectName("textBrowser_3");
        textBrowser_3->setGeometry(QRect(190, 40, 81, 31));
        spinBox = new QSpinBox(oneorder);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(300, 40, 51, 21));
        label = new QLabel(oneorder);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 41, 141, 141));

        retranslateUi(oneorder);

        QMetaObject::connectSlotsByName(oneorder);
    } // setupUi

    void retranslateUi(QWidget *oneorder)
    {
        oneorder->setWindowTitle(QCoreApplication::translate("oneorder", "Form", nullptr));
        textBrowser_2->setHtml(QCoreApplication::translate("oneorder", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:14pt; font-weight:700;\">\345\225\206\345\223\201\347\256\200\344\273\213</span></p></body></html>", nullptr));
        textBrowser_3->setHtml(QCoreApplication::translate("oneorder", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><meta charset=\"utf-8\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"hr { height: 1px; border-width: 0; }\n"
"li.unchecked::marker { content: \"\\2610\"; }\n"
"li.checked::marker { content: \"\\2612\"; }\n"
"</style></head><body style=\" font-family:'Microsoft YaHei UI'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt; font-weight:700;\">\345\225\206\345\223\201\344\273\267\346\240\274</span></p></body></html>", nullptr));
        label->setText(QCoreApplication::translate("oneorder", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:700;\">\345\225\206\345\223\201\345\233\276\347\211\207</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class oneorder: public Ui_oneorder {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEORDER_H
