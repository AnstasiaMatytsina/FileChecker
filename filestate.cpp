#include "filestate.h"

FileState::FileState(QString newPath){
    QFileInfo state(newPath);
    path = newPath;
    size =state.size();
    exist =state.exists();
}

qint64 FileState::getSize(){
    return size;
}

QString FileState::getPath(){
    return path;
}

bool FileState::getExists(){
    return exist;
}
