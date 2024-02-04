#include "../headers/userwidget.h"
#include "../headers/userimpl.h"
#include "ui_userwidgetwindow.h"
#include <QDebug>

UserWidget::UserWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::UserWidget),
    dbManager("hd-embalagens.db")
{
    ui->setupUi(this);
    connect(ui->buttonSubmit, &QPushButton::clicked, this, &UserWidget::onButtonSubmitClicked);
    createTable();
    loadUsers();
}

UserWidget::~UserWidget()
{
    delete ui;
}

void UserWidget::createTable(){
    QString userTableQuery = "id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, cpf TEXT, password TEXT, email TEXT, permission TEXT";
    dbManager.createTable("users", userTableQuery);
}

void UserWidget::onButtonSubmitClicked() {
    QString name = ui->editName->text();
    QString cpf = ui->editCpf->text();
    QString password = ui->editPassword->text();
    QString email = ui->editEmail->text();
    QString permission = ui->selectPermission->currentText();

    QVariantMap userData;
    userData["name"] = name;
    userData["cpf"] = cpf;
    userData["password"] = password;
    userData["email"] = email;
    userData["permission"] = permission;

    if (dbManager.insertRecord("users", userData)) {
        qDebug() << "Usuário inserido com sucesso!";
        loadUsers();
    } else {
        qDebug() << "Erro ao inserir usuário!";
    }
}

void UserWidget::loadUsers() {
    QVector<QVariantMap> users = dbManager.selectAllRecords("users");
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(users.size());
    ui->tableWidget->setColumnCount(5); // ID, Nome, CPF, Email, Permissão

    QStringList headers;
    headers << "ID" << "Nome" << "CPF" << "Email" << "Permissão";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < users.size(); ++row) {
        const QVariantMap& user = users[row];

        QTableWidgetItem* idItem = new QTableWidgetItem(user["id"].toString());
        QTableWidgetItem* nameItem = new QTableWidgetItem(user["name"].toString());
        QTableWidgetItem* cpfItem = new QTableWidgetItem(user["cpf"].toString());
        QTableWidgetItem* emailItem = new QTableWidgetItem(user["email"].toString());
        QTableWidgetItem* permissionItem = new QTableWidgetItem(user["permission"].toString());

        ui->tableWidget->setItem(row, 0, idItem);
        ui->tableWidget->setItem(row, 1, nameItem);
        ui->tableWidget->setItem(row, 2, cpfItem);
        ui->tableWidget->setItem(row, 3, emailItem);
        ui->tableWidget->setItem(row, 4, permissionItem);
    }
}
