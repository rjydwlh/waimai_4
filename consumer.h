#ifndef CONSUMER_H
#define CONSUMER_H
#include<merchant_infornation.h>
#include <QWidget>

namespace Ui {
class consumer;
}

class consumer : public QWidget
{
    Q_OBJECT

public:
    explicit consumer(QWidget *parent = nullptr);
    ~consumer();



private:
    Ui::consumer *ui;
    merchant *Merchant;
};

#endif // CONSUMER_H
