#ifndef COMMODITY_H
#define COMMODITY_H

#include<oneorder.h>
#include <QWidget>

namespace Ui {
class commodity;
}

class commodity : public QWidget
{
    Q_OBJECT

public:
    explicit commodity(QWidget *parent = nullptr);
    ~commodity();

private slots:
    void on_pushButton_2_clicked();

    void on_pushButton_clicked();

private:
    Ui::commodity *ui;
    oneorder *Oneorder;
};

#endif // COMMODITY_H
