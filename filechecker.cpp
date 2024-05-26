#include "filechecker.h"

using namespace std;

FileChecker::FileChecker()
{
    connect(this, &FileChecker::existSignal, &ConsolePrinter::printExistChanges);
    connect(this, &FileChecker::sizeSignal, &ConsolePrinter::printSizeChanges);
}

void FileChecker::checkExistByPosition(int position){
    FileState savedState = states1[position];
    FileState newState(savedState.getPath());
    if (savedState.getExists()!=newState.getExists()){
       existSignal(newState.getPath(), newState.getExists());
       changeStateByPosition(newState, position);
    }
}

void FileChecker::changeStateByPosition(const FileState &newState, int position){
    states1[position]=newState;
}

void FileChecker::checkSize(){
    for(int pos=0;pos<states1.count();pos++){
        checkSizeByPosition(pos);
    }
}

void FileChecker::checkExist(){
    for(int pos=0;pos<states1.count();pos++){
        checkExistByPosition(pos);
    }
}

void FileChecker::checkSizeByPosition(int position){
    FileState savedState= states1[position];
    FileState newState(savedState.getPath());
    if (savedState.getSize() != newState.getSize()){
        cout << "dfsdf";
        sizeSignal(newState.getPath(), newState.getSize());
        changeStateByPosition(newState, position);
    }
}

void FileChecker::add(const QString newPath){
    FileState newstate(newPath);
    states1.push_front(newstate);
}

void FileChecker::check() {
    checkExist();
    checkSize();
}
