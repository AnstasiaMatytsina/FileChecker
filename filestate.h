#ifndef FILESTATE_H
#define FILESTATE_H
#include <QFileInfo>
#include <QString>

//Класс отвечает за состояние файла
class FileState
{
public:
    FileState() = default;
    explicit FileState(const QString newPath);
    qint64 getSize();
    QString getPath();
    bool getExists();
    bool operator==(const FileState& file)const;
private:
    qint64 size = 0;
    QString path = "";
    bool exist = false;
};

#endif // FILESTATE_H
