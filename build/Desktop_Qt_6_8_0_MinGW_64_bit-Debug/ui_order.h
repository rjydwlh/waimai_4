/********************************************************************************
** Form generated from reading UI file 'order.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ORDER_H
#define UI_ORDER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_order
{
public:
    QTextBrowser *textBrowser;
    QTextBrowser *textBrowser_2;
    QSpinBox *spinBox;

    void setupUi(QWidget *order)
    {
        if (order->objectName().isEmpty())
            order->setObjectName("order");
        order->resize(462, 172);
        textBrowser = new QTextBrowser(order);
        textBrowser->setObjectName("textBrowser");
        textBrowser->setGeometry(QRect(30, 30, 101, 111));
        textBrowser_2 = new QTextBrowser(order);
        textBrowser_2->setObjectName("textBrowser_2");
        textBrowser_2->setGeometry(QRect(170, 40, 81, 31));
        spinBox = new QSpinBox(order);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(170, 100, 81, 31));

        retranslateUi(order);

        QMetaObject::connectSlotsByName(order);
    } // setupUi

    void retranslateUi(QWidget *order)
    {
        order->setWindowTitle(QCoreApplication::translate("order", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class order: public Ui_order {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ORDER_H
