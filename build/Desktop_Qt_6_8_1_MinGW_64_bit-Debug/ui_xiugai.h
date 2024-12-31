/********************************************************************************
** Form generated from reading UI file 'xiugai.ui'
**
** Created by: Qt User Interface Compiler version 6.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_XIUGAI_H
#define UI_XIUGAI_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XiuGai
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QLineEdit *ShangPName;
    QTextEdit *ShangPInf;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QTextEdit *Jiage;
    QPushButton *Save;

    void setupUi(QWidget *XiuGai)
    {
        if (XiuGai->objectName().isEmpty())
            XiuGai->setObjectName("XiuGai");
        XiuGai->resize(803, 597);
        label = new QLabel(XiuGai);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 0, 511, 61));
        pushButton = new QPushButton(XiuGai);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(640, 20, 151, 61));
        ShangPName = new QLineEdit(XiuGai);
        ShangPName->setObjectName("ShangPName");
        ShangPName->setGeometry(QRect(180, 150, 401, 41));
        ShangPInf = new QTextEdit(XiuGai);
        ShangPInf->setObjectName("ShangPInf");
        ShangPInf->setGeometry(QRect(180, 240, 551, 111));
        label_3 = new QLabel(XiuGai);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(180, 110, 121, 31));
        label_4 = new QLabel(XiuGai);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(180, 200, 121, 31));
        label_5 = new QLabel(XiuGai);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(180, 360, 121, 31));
        Jiage = new QTextEdit(XiuGai);
        Jiage->setObjectName("Jiage");
        Jiage->setGeometry(QRect(300, 360, 104, 31));
        Save = new QPushButton(XiuGai);
        Save->setObjectName("Save");
        Save->setGeometry(QRect(640, 460, 131, 61));

        retranslateUi(XiuGai);

        QMetaObject::connectSlotsByName(XiuGai);
    } // setupUi

    void retranslateUi(QWidget *XiuGai)
    {
        XiuGai->setWindowTitle(QCoreApplication::translate("XiuGai", "Form", nullptr));
        label->setText(QCoreApplication::translate("XiuGai", "<html><head/><body><p><span style=\" font-size:36pt;\">\346\267\273\345\212\240\345\225\206\345\223\201</span></p></body></html>", nullptr));
        pushButton->setText(QCoreApplication::translate("XiuGai", "\350\277\224\345\233\236", nullptr));
        ShangPName->setText(QString());
        label_3->setText(QCoreApplication::translate("XiuGai", "<html><head/><body><p><span style=\" font-size:18pt;\">\345\225\206\345\223\201\345\220\215\347\247\260</span></p></body></html>", nullptr));
        label_4->setText(QCoreApplication::translate("XiuGai", "<html><head/><body><p><span style=\" font-size:18pt;\">\345\225\206\345\223\201\344\277\241\346\201\257</span></p></body></html>", nullptr));
        label_5->setText(QCoreApplication::translate("XiuGai", "<html><head/><body><p><span style=\" font-size:18pt;\">\345\225\206\345\223\201\344\273\267\346\240\274\357\274\232</span></p></body></html>", nullptr));
        Save->setText(QCoreApplication::translate("XiuGai", "\344\277\235   \345\255\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class XiuGai: public Ui_XiuGai {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_XIUGAI_H
