#include "filechecker.h"

void FileChecker::checkExistByPosition(int position){
    FileState savedState= states[position];
    FileState newState(savedState.getPath());
    if (savedState.getExists()!=newState.getExists()){
        // подаем сигнал
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
    if (savedState.getSize()!=newState.getSize()){
        // подаем сигнал
    }
}

FileChecker::FileChecker()
{

}
