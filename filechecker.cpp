#include "filechecker.h"

void FileChecker::checkExistByPosition(int position){
    FileState savedState= states[position];
    FileState newState(savedState.getPath());
    if (savedState.getExists()!=newState.getExists()){
        // подаем сигнал
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
