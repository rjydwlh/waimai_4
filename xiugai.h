#ifndef XIUGAI_H
#define XIUGAI_H

#include <QWidget>
#include <shangp.h>

namespace Ui {
class XiuGai;
}

class XiuGai : public QWidget
{
    Q_OBJECT

public:
    explicit XiuGai(QWidget *parent = nullptr);
    ~XiuGai();

private slots:
    void on_pushButton_clicked();

    void on_Save_clicked();

private:
    Ui::XiuGai *ui;
};

#endif // XIUGAI_H
