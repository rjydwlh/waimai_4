#ifndef KEYMANAGER_H
#include "keymanager.h"
#endif
keymanager::keymanager() {}


bool keymanager::check(QString s){
    QFile f("ident.txt");
    f.open(QIODevice::ReadOnly);
    QByteArray aim = s.toUtf8();

    QByteArray line ;

    while(!f.atEnd()){
        line = f.readLine();
        // qDebug() << QString(line)<<"\n";
        if(aim == line){
            f.close();
            return true;
        }
    }
    f.close();
    return false;
}
void keymanager::add(QString a , QString b , QString c){
    QFile data= QFile("ident.txt");
    data.open(QIODevice::ReadWrite|QIODevice::Append);
    QString s = a+ "\t"+b+"\t"+c+"\r\n";
    data.write(s.toUtf8());
    data.close();
}
