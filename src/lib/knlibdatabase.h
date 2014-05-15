#ifndef KNLIBDATABASE_H
#define KNLIBDATABASE_H

#include <QFileInfo>
#include <QJsonObject>
#include <QJsonDocument>
#include <QJsonArray>
#include <QJsonParseError>
#include <QStringList>
#include <QObject>

class QFile;
class KNLibDatabase : public QObject
{
    Q_OBJECT
public:
    explicit KNLibDatabase(QObject *parent = 0);
    void append(const QJsonValue &value);
    QJsonValue at(int i) const;
    QJsonParseError error() const;
    void flush();
    virtual void load();
    void replace(int i, const QJsonValue &value);
    QJsonObject row(int i) const;
    void setBatchCount(int batch);
    void setDatabase(const QString &filePath);
    void removeAt(int i);
    int size() const;
    QJsonValue takeAt(int i);

signals:

public slots:

private:
    bool readFromDisk();
    void writeToDisk();
    void clearCache();
    void createDatabase();
    void reduceBatchCount();
    QString m_databaseFilePath;
    QFile *m_databaseFile;
    QFileInfo m_databaseFileInfo;
    QJsonObject m_content;
    QJsonDocument m_document;
    QJsonParseError m_error;
    QJsonArray m_databaseArray;
    int m_majorVersion=0, m_minorVersion=1, m_batchCount=10,
        m_currentBatchCount=0;
};

#endif // KNLIBDATABASE_H
