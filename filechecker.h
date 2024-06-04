#ifndef FILECHECKER_H
#define FILECHECKER_H
#include <filestate.h>
#include <QVector>
#include <consoleprinter.h>


class FileChecker: public QObject
{
    Q_OBJECT
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
    void add(const QString newPath);
    bool remove(const QString filePath);
signals:
    void existSignal(QString path, bool existence, qint64 size);
    void sizeSignal(QString path, qint64 size);
};
#endif // FILECHECKER_H
