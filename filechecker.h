#ifndef FILECHECKER_H
#define FILECHECKER_H
#include<filestate.h>

class FileChecker
{

private:
    QVector<FileState> states;
    void checkSize();
    void checkExist();
    void checkSizeByPosition(int position);
    void checkExistByPosition(int position);
    void changeStateByPosition(const FileState &newState, int position);
public:
    FileChecker();
    void check();
    void add(const QString newPath){

    };

#endif // FILECHECKER_H
