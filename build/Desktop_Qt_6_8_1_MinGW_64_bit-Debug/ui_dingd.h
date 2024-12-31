/********************************************************************************
** Form generated from reading UI file 'dingd.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DINGD_H
#define UI_DINGD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DingD
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_20;
    QLabel *label_2;

    void setupUi(QWidget *DingD)
    {
        if (DingD->objectName().isEmpty())
            DingD->setObjectName("DingD");
        DingD->resize(796, 516);
        pushButton = new QPushButton(DingD);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(620, 20, 151, 61));
        label = new QLabel(DingD);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 511, 71));
        scrollArea = new QScrollArea(DingD);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setEnabled(true);
        scrollArea->setGeometry(QRect(60, 169, 581, 341));
        scrollArea->setWidgetResizable(false);
        scrollArea->setAlignment(Qt::AlignmentFlag::AlignLeading|Qt::AlignmentFlag::AlignLeft|Qt::AlignmentFlag::AlignVCenter);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 549, 1498));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_20 = new QLabel(DingD);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(700, 340, 54, 16));
        label_2 = new QLabel(DingD);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(100, 110, 53, 15));

        retranslateUi(DingD);

        QMetaObject::connectSlotsByName(DingD);
    } // setupUi

    void retranslateUi(QWidget *DingD)
    {
        DingD->setWindowTitle(QCoreApplication::translate("DingD", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("DingD", "\350\277\224\345\233\236", nullptr));
        label->setText(QCoreApplication::translate("DingD", "<html><head/><body><p><span style=\" font-size:36pt;\">\346\210\221\347\232\204\350\256\242\345\215\225</span></p></body></html>", nullptr));
        label_20->setText(QString());
        label_2->setText(QCoreApplication::translate("DingD", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DingD: public Ui_DingD {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DINGD_H
