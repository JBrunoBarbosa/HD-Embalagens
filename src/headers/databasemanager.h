#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QVariantMap>
#include <QVector>

class DatabaseManager : public QObject {
    Q_OBJECT

public:
    explicit DatabaseManager(const QString& databaseName);
    ~DatabaseManager();

    bool createTable(const QString& tableName, const QString& schema);
    bool executeQuery(const QString& query, const QVariantMap& placeholders = QVariantMap());
    bool insertRecord(const QString& tableName, const QVariantMap& recordData);
    QVector<QVariantMap> selectAllRecords(const QString& tableName);
    QVector<QVariantMap> selectRecords(const QString& tableName, const QString& condition, const QVariantMap& placeholders = QVariantMap());

private:
    QSqlDatabase db;
    QVector<QVariantMap> executeSelectQuery(const QString& query, const QVariantMap& placeholders);
};

#endif // DATABASEMANAGER_H
