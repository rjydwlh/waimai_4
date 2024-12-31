/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QCheckBox *checkBox;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName("login");
        login->resize(667, 427);
        pushButton = new QPushButton(login);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(200, 270, 80, 18));
        pushButton_2 = new QPushButton(login);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(370, 270, 80, 18));
        comboBox = new QComboBox(login);
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(270, 220, 101, 22));
        label = new QLabel(login);
        label->setObjectName("label");
        label->setGeometry(QRect(200, 220, 31, 16));
        label_2 = new QLabel(login);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(200, 170, 31, 16));
        label_3 = new QLabel(login);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(200, 130, 31, 16));
        lineEdit = new QLineEdit(login);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(250, 130, 151, 20));
        lineEdit_2 = new QLineEdit(login);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(250, 170, 151, 20));
        checkBox = new QCheckBox(login);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(80, 170, 81, 18));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("login", "\347\231\273\351\231\206", nullptr));
        pushButton_2->setText(QCoreApplication::translate("login", "\346\263\250\345\206\214", nullptr));
        label->setText(QCoreApplication::translate("login", "\347\224\250\346\210\267", nullptr));
        label_2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QCoreApplication::translate("login", "\350\264\246\345\217\267", nullptr));
        checkBox->setText(QCoreApplication::translate("login", "\346\230\276\347\244\272\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
