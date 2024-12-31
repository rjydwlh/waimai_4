#ifndef REGIS_H
#define REGIS_H
#pragma once

#ifndef  QT_H
#include "qt.h"
#endif

#include <QWidget>
namespace Ui {
class regis;
}

class regis : public QWidget
{
    Q_OBJECT

public:
    explicit regis(QWidget *parent = nullptr);
    ~regis();

private slots:
    void on_btn_regis_clicked(bool checked);

    void on_lineEdit_editingFinished();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_lineEdit_2_textEdited(const QString &arg1);

    void on_lineEdit_2_editingFinished();

    void on_lineEdit_3_editingFinished();

    void on_lineEdit_3_textEdited(const QString &arg1);

private:
    bool warn_1 = 0;// 代表名字是否合法
    bool warn_2 = 0;// 代表密码是否合法
    bool warn_3 = 0;// 代表两次密码是否一致
    Ui::regis *ui;
};

#endif // REGIS_H
