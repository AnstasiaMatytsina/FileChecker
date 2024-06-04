#include "consoleprinter.h"
#include <QString>
#include <iostream>

using namespace std;

void ConsolePrinter::printExistChanges(QString path, bool isExist, qint64 size){
    if(isExist) {
        cout <<"File "<< path.toStdString() << " exist, size is "<<size<<" byte"<<endl;
    } else {
        cout <<"File "<< path.toStdString()<< " not exist"<<endl;
    }
}

void ConsolePrinter::printSizeChanges(QString path, qint64 size){
    cout<<"File "<<path.toStdString()<<" size is "<< size<<" byte"<<endl;
}
