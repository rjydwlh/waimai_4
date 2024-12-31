#ifndef DISCOUNT_H
#define DISCOUNT_H

#include <QWidget>

namespace Ui {
class discount;
}

class discount : public QWidget
{
    Q_OBJECT

public:
    explicit discount(QWidget *parent = nullptr);
    ~discount();

private slots:
    void on_pushButton_clicked();

private:
    Ui::discount *ui;
};

#endif // DISCOUNT_H
