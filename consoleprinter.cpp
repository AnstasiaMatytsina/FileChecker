#include "consoleprinter.h"
#include <QString>
#include <iostream>

using namespace std;

void ConsolePrinter::printExistChanges(QString path, bool isExist){
    if(isExist){
        wcout << path.toStdWString() << "exist";
    } else {
        wcout << path.toStdWString()<< "not exist";
    }
}

void ConsolePrinter::printSizeChanges(QString path, qint64 size){
    wcout<<path.toStdWString()<<"size is"<< size;
}
