#ifndef SHANGP_H
#define SHANGP_H

#include <QWidget>
#include <MainMer.h>
#include <xiugai.h>
#include "merchantinfo_manager.h"
#include "QHBoxLayout"
#include "QVBoxLayout"
#include "QWidget"
namespace Ui {
class ShangP;
}

class ShangP : public QWidget
{
    Q_OBJECT

public:
    explicit ShangP(QWidget *parent = nullptr,QString id = "");
    ~ShangP();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ShangP *ui;
    QString id;
};

#endif // SHANGP_H
