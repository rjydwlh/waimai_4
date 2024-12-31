#include "TextFileManager.h"
#include <QDebug>

QString TextFileManager::readFirstLine(const QString &filePath) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        QString firstLine = stream.readLine();
        file.close();
        return firstLine;
    } else {
        qDebug() << "无法打开文件:" << filePath;
        return "";
    }
}

QString TextFileManager::readRemainingText(const QString &filePath) {
    QFile file(filePath);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream stream(&file);
        QString remainingText;
        while (!stream.atEnd()) {
            remainingText += stream.readLine() + "\n";
        }
        file.close();
        return remainingText;
    } else {
        qDebug() << "无法打开文件:" << filePath;
        return "";
    }
}
