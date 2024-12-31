#ifndef MAINMER_H
#define MAINMER_H

#include <QWidget>  //控件类头文件
#include <shangp.h>
#include <dingd.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class Widget;
}
QT_END_NAMESPACE

class Widget : public QWidget   //创建了一个叫widget的类 继承自共有基类qwidget
{
    Q_OBJECT         //宏定义 使用信号与槽必备 只能写在这个开始的地方

public:
    Widget(QWidget *parent = nullptr,QString id = "");   //构造函数
    ~Widget();                           //析构函数

private slots:

    void on_ButtonToCh_clicked();

    void on_ButtonToDi_clicked();

    // void on_pushButton_clicked();
private:
    QString id;
    Ui::Widget *ui;
};
#endif // MAINMER_H
