#ifndef PAY_H
#define PAY_H
#include<oneorder.h>
#include <QWidget>

namespace Ui {
class pay;
}

class pay : public QWidget
{
    Q_OBJECT

public:
    explicit pay(QWidget *parent = nullptr);
    ~pay();


private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::pay *ui;
    oneorder *Oneorder;

};

#endif // PAY_H
