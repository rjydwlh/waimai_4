#ifndef SEARCH_RESTAURANT_H
#define SEARCH_RESTAURANT_H

#include <QWidget>
#include <QFile>
#include <QVBoxLayout>
#include <QLabel>
#ifndef KEYMANAGER_H
#include "keymanager.h"
#endif
#ifndef ADMININFO_MANAGER_CPP
#include "admininfo_manager.h"
#endif
namespace Ui {
class search_restaurant;
}

class search_restaurant : public QWidget
{
    Q_OBJECT

public:
    explicit search_restaurant(QWidget *parent = nullptr);
    ~search_restaurant();

private slots:
    void on_lineEdit_textEdited(const QString &arg1);

    void on_search_btn_clicked();

    void on_search1_textEdited(const QString &arg1);

    // void addmer(QString s1,QVBoxLayout* lay);

private:
    Ui::search_restaurant *ui;
    QString name;
};

#endif // SEARCH_RESTAURANT_H
