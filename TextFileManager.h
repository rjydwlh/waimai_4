// TextFileManager.h
#ifndef TEXTFILEMANAGER_H
#define TEXTFILEMANAGER_H

#include <QFile>
#include <QTextStream>
#include <QString>

class TextFileManager {
public:
    static QString readFirstLine(const QString &filePath);
    static QString readRemainingText(const QString &filePath);
};

#endif // TEXTFILEMANAGER_H
