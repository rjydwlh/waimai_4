#include "merchantinfo_manager.h"

merchantinfo_manager::merchantinfo_manager(QString s) {
    getinfo(s);
}

void merchantinfo_manager::getinfo(QString s)
{
    filedir = "customer_data\\"+s+".txt";
    QFile f = QFile(filedir);
    f.open(QIODevice::ReadOnly);
    while(!f.atEnd()){
        QString data1 = f.readLine();
        QStringList datalist = data1.split('\t');
        merchantinfo x;
        // 输入数据
        x.dish=datalist[0];
        x.cost=datalist[1];
        x.detail=datalist[2];
        x.xiaoliang=datalist[3];
        info.push_back(x);
    }

}

void merchantinfo_manager::addinfo(QString name, QString cost , QString detail , QString time){
    info.push_back(merchantinfo{name, cost ,detail , time});
}


void merchantinfo_manager::delinfo(QString name){
    for(int i = 0;i<info.size();i++){
        if(info[i].dish == name){
            // 删除数据
            info.erase(info.begin()+i);
            break;
        }
    }
}

merchantinfo_manager::~merchantinfo_manager(){
    QFile data(filedir);
    for(int i = 0;i<info.size();i++){
        data.write((
            info[i].dish + "\t"
            + info[i].cost + "\t"
            + info[i].detail + info[i].xiaoliang + "\r\n")
                   .toUtf8()
                   );
    }
    data.close();
}

