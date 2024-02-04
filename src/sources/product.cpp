#include "/src/headers/databasemanager.h"
#include <QDebug>
#include <QSqlError>

DatabaseManager::DatabaseManager(const QString& path) {
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);

    if (!db.open()) {
        qDebug() << "Error opening database:" << db.lastError().text();
    }
}

DatabaseManager::~DatabaseManager() {
    db.close();
}

bool DatabaseManager::createTable(const QString& query) {
    QSqlQuery sqlQuery;
    if (!sqlQuery.exec(query)) {
        qDebug() << "Create table error:" << sqlQuery.lastError().text();
        return false;
    }
    return true;
}

bool DatabaseManager::executeQuery(const QString& query, const QVariantMap& placeholders) {
    QSqlQuery sqlQuery;
    sqlQuery.prepare(query);
    for (const auto& key : placeholders.keys()) {
        sqlQuery.bindValue(":" + key, placeholders.value(key));
    }
    if (!sqlQuery.exec()) {
        qDebug() << "Execute query error:" << sqlQuery.lastError().text();
        return false;
    }
    return true;
}
