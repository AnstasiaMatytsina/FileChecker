#include "filechecker.h"

using namespace std;

FileChecker::FileChecker()
{
    connect(this, &FileChecker::existSignal, &ConsolePrinter::printExistChanges);
    connect(this, &FileChecker::sizeSignal, &ConsolePrinter::printSizeChanges);
}

void FileChecker::checkExistByPosition(int position){
    FileState savedState = states[position];
    FileState newState(savedState.getPath());
    if (savedState.getExists()!=newState.getExists()){
       existSignal(newState.getPath(), newState.getExists(), newState.getSize());
       changeStateByPosition(newState, position);
    }
}

void FileChecker::changeStateByPosition(const FileState &newState, int position){
    states[position]=newState;
}

void FileChecker::checkSize(){
    for(int pos=0;pos<states.count();pos++){
        checkSizeByPosition(pos);
    }
}

void FileChecker::checkExist(){
    for(int pos=0;pos<states.count();pos++){
        checkExistByPosition(pos);
    }
}

void FileChecker::checkSizeByPosition(int position){
    FileState savedState= states[position];

    FileState newState(savedState.getPath());
    if (savedState.getSize() != newState.getSize() && newState.getExists() && savedState.getExists()){
        sizeSignal(newState.getPath(), newState.getSize());
        changeStateByPosition(newState, position);
    }
}

void FileChecker::add(const QString newPath){
    FileState newstate(newPath);
    states.push_front(newstate);
}

void FileChecker::check() {
    checkExist();
    checkSize();
}

bool FileChecker::remove(const QString filePath) {
    FileState remstate(filePath);
    if(states.contains(remstate) ){
        states.removeOne(remstate);
        return true;
    }
    else return false;
}
