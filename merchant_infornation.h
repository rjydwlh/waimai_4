#ifndef MERCHANT_INFORNATION_H
#define MERCHANT_INFORNATION_H
#include <QWidget>

namespace Ui {
class merchant_WANG;
}

class merchant : public QWidget
{
    Q_OBJECT

public:
    explicit merchant(QWidget *parent = nullptr);
    ~merchant();

private slots:
    void on_pushButton_clicked();

private:
    Ui::merchant_WANG *ui;

};

#endif // MERCHANT_INFORNATION_H
