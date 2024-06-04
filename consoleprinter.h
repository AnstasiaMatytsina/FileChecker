#ifndef CONSOLEPRINTER_H
#define CONSOLEPRINTER_H
#include <iostream>
#include <QString>
#include <QObject>

using namespace std;

class ConsolePrinter: public QObject
{
public slots:
    static void printExistChanges(QString path, bool isExist, qint64 size);
    static void printSizeChanges(QString path, qint64 size);
};

#endif // CONSOLEPRINTER_H
