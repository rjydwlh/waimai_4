#ifndef DINGD_H
#define DINGD_H

#include <QWidget>
#include <MainMer.h>

namespace Ui {
class DingD;
}

class DingD : public QWidget
{
    Q_OBJECT

public:
    explicit DingD(QWidget *parent = nullptr);
    ~DingD();

private slots:
    void on_pushButton_clicked();

    // void on_pushButton_10_clicked();

private:
    Ui::DingD *ui;
};

#endif // DINGD_H
