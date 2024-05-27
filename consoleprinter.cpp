#include "consoleprinter.h"
#include <QString>
#include <iostream>

using namespace std;

void ConsolePrinter::printExistChanges(QString path, bool isExist){
    if(isExist){
        wcout <<"File "<< path.toStdWString() << " exist"<<endl;
    } else {
        wcout << path.toStdWString()<< " not exist"<<endl;
    }
}

void ConsolePrinter::printSizeChanges(QString path, qint64 size){
    wcout<<"File "<<path.toStdWString()<<" size is "<< size<<endl;
}
