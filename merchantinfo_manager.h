#ifndef MERCHANTINFO_MANAGER_H
#define MERCHANTINFO_MANAGER_H
#include<QString>

#include "cx_header.h"

#include<QFile>
class merchantinfo_manager
{
public:
    struct merchantinfo{
        QString dish;
        QString xiaoliang;
        QString cost;
        QString detail;

    public:
        void setRestaurant_name(const QString &newRestaurant_name);
    };
    merchantinfo_manager(QString s);
    ~merchantinfo_manager();
    void getinfo(QString s);
    void delinfo(QString name);
    void addinfo(QString name, QString cost , QString detail , QString time);
    std::vector<merchantinfo>info;
private:
    QString filedir;
};

#endif // MERCHANTINFO_MANAGER_H
