/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QPushButton *btn1;
    QPushButton *btn2;

    void setupUi(QWidget *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName("admin");
        admin->resize(400, 300);
        btn1 = new QPushButton(admin);
        btn1->setObjectName("btn1");
        btn1->setGeometry(QRect(70, 70, 91, 41));
        btn2 = new QPushButton(admin);
        btn2->setObjectName("btn2");
        btn2->setGeometry(QRect(70, 120, 91, 51));

        retranslateUi(admin);

        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QWidget *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "Form", nullptr));
        btn1->setText(QCoreApplication::translate("admin", "\346\237\245\347\234\213\345\225\206\345\256\266", nullptr));
        btn2->setText(QCoreApplication::translate("admin", "\346\237\245\347\234\213\351\224\200\345\224\256\346\227\245\345\277\227", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
