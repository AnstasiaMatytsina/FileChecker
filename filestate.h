#ifndef FILESTATE_H
#define FILESTATE_H
#include<QFileInfo>

//Класс отвечает за состояние файла
class FileState
{
public:
    FileState(QString newPath);
    qint64 getSize();
    QString getPath();
    bool getExists();
private:
    qint64 size;
    QString path;
    bool exist;
};

#endif // FILESTATE_H
