#ifndef KEYMANAGER_H
#define KEYMANAGER_H
#include<QString>
#include<QFile>
class keymanager
{
public:
    keymanager();
    bool check(QString s);
    void add(QString a , QString b , QString c);
};

#endif // KEYMANAGER_H
