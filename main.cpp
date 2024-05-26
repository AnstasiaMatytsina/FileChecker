#include <QCoreApplication>
#include <filechecker.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
    QCoreApplication a(argc, argv);
    FileChecker checker;
    cout << "1";
    checker.add("D:/1.txt");
    cout << "2";
    while(1) {
        checker.check();
    }
    return a.exec();
}
