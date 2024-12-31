/********************************************************************************
** Form generated from reading UI file 'consumer.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONSUMER_H
#define UI_CONSUMER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_consumer
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QLabel *label_2;

    void setupUi(QWidget *consumer)
    {
        if (consumer->objectName().isEmpty())
            consumer->setObjectName("consumer");
        consumer->resize(721, 494);
        pushButton = new QPushButton(consumer);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(460, 30, 80, 18));
        lineEdit = new QLineEdit(consumer);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(130, 30, 301, 20));
        label = new QLabel(consumer);
        label->setObjectName("label");
        label->setGeometry(QRect(40, 30, 61, 21));
        scrollArea = new QScrollArea(consumer);
        scrollArea->setObjectName("scrollArea");
        scrollArea->setGeometry(QRect(29, 99, 601, 371));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName("scrollAreaWidgetContents");
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 599, 369));
        scrollArea->setWidget(scrollAreaWidgetContents);
        label_2 = new QLabel(consumer);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(130, 61, 111, 31));

        retranslateUi(consumer);

        QMetaObject::connectSlotsByName(consumer);
    } // setupUi

    void retranslateUi(QWidget *consumer)
    {
        consumer->setWindowTitle(QCoreApplication::translate("consumer", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("consumer", "\346\220\234\347\264\242", nullptr));
        label->setText(QCoreApplication::translate("consumer", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\346\220\234\344\270\200\346\220\234</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("consumer", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:700;\">\346\254\242\350\277\216\347\202\271\345\215\225\357\274\201</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class consumer: public Ui_consumer {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONSUMER_H
