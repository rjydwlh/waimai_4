#ifndef ADMININFO_MANAGER_H
#define ADMININFO_MANAGER_H
#include <QVBoxLayout>
#include<QFile>
#include <QLabel>
#include <QString>
#include <string>
#include <QPixmap>
#include<QDir>
class admininfo_manager
{
public:
    admininfo_manager();

    void read(QVBoxLayout* list);

    void addmer(QString s1,QVBoxLayout* lay);

    void addmer(QString s3,QString pic);

    void deletemerchant(QString s1);

    void deletemerchant(QString s1,QString pic);
};

#endif // ADMININFO_MANAGER_H
