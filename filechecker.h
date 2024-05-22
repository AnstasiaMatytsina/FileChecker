#ifndef FILECHECKER_H
#define FILECHECKER_H
#include<filestate.h>

class FileChecker
{

private:
    QVector<FileState> states;
    void checkSize();
    void checkExist();
    void checkSizeByPosition();
    void checkExistByPosition(int position);
public:
    FileChecker();
    void check();
};

#endif // FILECHECKER_H
