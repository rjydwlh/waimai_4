#ifndef ONEORDER_H
#define ONEORDER_H

#include <QWidget>

namespace Ui {
class oneorder;
}

class oneorder : public QWidget
{
    Q_OBJECT

public:
    explicit oneorder(QWidget *parent = nullptr);

    ~oneorder();

private:
    Ui::oneorder *ui;
};

#endif // ONEORDER_H
