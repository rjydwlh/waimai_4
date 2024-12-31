/********************************************************************************
** Form generated from reading UI file 'shangp.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHANGP_H
#define UI_SHANGP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ShangP
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;

    void setupUi(QWidget *ShangP)
    {
        if (ShangP->objectName().isEmpty())
            ShangP->setObjectName("ShangP");
        ShangP->resize(803, 565);
        pushButton = new QPushButton(ShangP);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 50, 151, 61));
        pushButton_2 = new QPushButton(ShangP);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(640, 490, 151, 61));
        label = new QLabel(ShangP);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 10, 511, 61));
        scrollArea = new QScrollArea(ShangP);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setEnabled(true);
        scrollArea->setGeometry(QRect(70, 90, 571, 400));
        scrollArea->setWidgetResizable(false);
        scrollArea->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 1498));
        scrollArea->setWidget(scrollAreaWidgetContents);

        retranslateUi(ShangP);

        QMetaObject::connectSlotsByName(ShangP);
    } // setupUi

    void retranslateUi(QWidget *ShangP)
    {
        ShangP->setWindowTitle(QCoreApplication::translate("ShangP", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("ShangP", "\350\277\224\345\233\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ShangP", "\346\267\273\345\212\240\345\225\206\345\223\201", nullptr));
        label->setText(QCoreApplication::translate("ShangP", "<html><head/><body><p><span style=\" font-size:36pt;\">\346\210\221\347\232\204\345\225\206\345\223\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShangP: public Ui_ShangP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHANGP_H
