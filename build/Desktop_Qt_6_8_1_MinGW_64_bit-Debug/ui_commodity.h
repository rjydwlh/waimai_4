/********************************************************************************
** Form generated from reading UI file 'commodity.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMMODITY_H
#define UI_COMMODITY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_commodity
{
public:
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *commodity)
    {
        if (commodity->objectName().isEmpty())
            commodity->setObjectName("commodity");
        commodity->resize(776, 479);
        scrollArea = new QScrollArea(commodity);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(9, 29, 561, 411));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 559, 409));
        scrollArea->setWidget(scrollAreaWidgetContents);
        pushButton = new QPushButton(commodity);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 30, 51, 31));
        pushButton_2 = new QPushButton(commodity);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(640, 370, 71, 31));

        retranslateUi(commodity);

        QMetaObject::connectSlotsByName(commodity);
    } // setupUi

    void retranslateUi(QWidget *commodity)
    {
        commodity->setWindowTitle(QCoreApplication::translate("commodity", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("commodity", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("commodity", "\346\237\245\347\234\213\350\256\242\345\215\225", nullptr));
    } // retranslateUi

};

namespace Ui {
    class commodity: public Ui_commodity {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMMODITY_H
