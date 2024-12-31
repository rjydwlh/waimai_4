#include "admininfo_manager.h"

admininfo_manager::admininfo_manager() {

}

void admininfo_manager::read(QVBoxLayout* list)
{

    QFile datalist("merchantdata\\data.txt");
    bool OK = 0 ;
    qDebug() << (OK = datalist.open(QIODevice::ReadOnly));

    if(!OK){
        // 如果打开目录失败就报告失败!
        return;
    }

    while(!datalist.atEnd()){
        // 逐行读取

        QString tex1 = datalist.readLine().trimmed();
        QString tex2 = datalist.readLine().trimmed();

        QString line1 = QString();
        QHBoxLayout* l1 = new QHBoxLayout();
        QLabel* picture = new QLabel();
        QLabel* name = new QLabel();
        name->setText(tex1);
        picture->setPixmap(QPixmap(QString::fromUtf8(("merchantdata\\"+tex2).toStdString().c_str())));
        l1->addWidget(picture);
        l1->addWidget(name);
        list->addLayout(l1);
    }
    datalist.close();

}

void admininfo_manager::addmer(QString s1,QVBoxLayout* lay){
    QFile f("merchantdata\\"+s1+"\\data.txt");
    f.open(QIODevice::ReadOnly);

    QString dir = "merchantdata\\"+ s1;
    std::string dir_ = dir.toStdString();
    while(!f.atEnd()){
        QString s = QString(f.readLine().trimmed());// 菜名图片
        QString s_ = QString(f.readLine().trimmed());// id
        // 添加图片
        QLabel*  pic = new QLabel();
        pic->setPixmap(QPixmap(QString::fromUtf8(dir_+s.toStdString())));
        pic->setScaledContents(true);

        QHBoxLayout* hbox = new QHBoxLayout();
        hbox->addWidget(pic);
        // 添加文字
        QLabel* text = new QLabel(s_);
        hbox->addWidget(text);
        lay->addLayout(hbox);
    }
}

void admininfo_manager::deletemerchant(QString s1,QString pic)
{
    // QFile f("merchantdata\\")
    QFile f("merchantdata\\data.txt");
    QFile f2 = QFile(pic);
    f.write((s1+"\r\n").toUtf8());
    f.open(QIODevice::Append);
    QDir dir(QDir::currentPath());
    // 创建文件目录
    if(!dir.exists(s1)){

        dir.mkdir(s1);
        dir.cd(s1);
        QDir dir_2 = dir.currentPath();
        f2.copy(dir_2.currentPath());
        f.write((dir_2.currentPath()+"\r\n").toUtf8());

    } else {
        qDebug() << "Error! 文件已存在!";
    }

}


