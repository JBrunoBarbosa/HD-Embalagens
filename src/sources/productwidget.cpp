#include "../headers/productwidget.h"
#include "../headers/productimpl.h"
#include "ui_productwidgetwindow.h"

ProductWidget::ProductWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductWidget),
    dbManager("hd-embalagens.db") // Certifique-se de usar o nome correto do banco de dados
{
    ui->setupUi(this);
    connect(ui->buttonSubmit, &QPushButton::clicked, this, &ProductWidget::onButtonSubmitClicked);
    createTable();
    loadProducts();
}

ProductWidget::~ProductWidget()
{
    delete ui;
}

void ProductWidget::createTable(){
    QString productTableQuery = "id INTEGER PRIMARY KEY AUTOINCREMENT, name TEXT, quantity TEXT, price TEXT, supplier TEXT, date TEXT";
    dbManager.createTable("products", productTableQuery);
}

void ProductWidget::onButtonSubmitClicked() {
    QString name = ui->editName->text();
    QString quantity = ui->editQuantity->text();
    QString price = ui->editPrice->text();
    QString supplier = ui->editSupplier->text();
    QString date = ui->dateEdit->date().toString("yyyy-MM-dd");

    QVariantMap productData;
    productData["name"] = name;
    productData["quantity"] = quantity;
    productData["price"] = price;
    productData["supplier"] = supplier;
    productData["date"] = date;

    if (dbManager.insertRecord("products", productData)) {
        qDebug() << "Produto inserido com sucesso!";
        loadProducts();
    } else {
        qDebug() << "Erro ao inserir produto!";
    }
}

void ProductWidget::loadProducts() {
    QVector<QVariantMap> products = dbManager.selectAllRecords("products");
    ui->tableWidget->clear();
    ui->tableWidget->setRowCount(products.size());
    ui->tableWidget->setColumnCount(6); // ID, Nome, Quantidade, Preço, Fornecedor, Data

    QStringList headers;
    headers << "ID" << "Nome" << "Quantidade" << "Preço" << "Fornecedor" << "Data";
    ui->tableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < products.size(); ++row) {
        const QVariantMap& product = products[row];

        QTableWidgetItem* idItem = new QTableWidgetItem(product["id"].toString());
        QTableWidgetItem* nameItem = new QTableWidgetItem(product["name"].toString());
        QTableWidgetItem* quantityItem = new QTableWidgetItem(product["quantity"].toString());
        QTableWidgetItem* priceItem = new QTableWidgetItem(product["price"].toString());
        QTableWidgetItem* supplierItem = new QTableWidgetItem(product["supplier"].toString());
        QTableWidgetItem* dateItem = new QTableWidgetItem(product["date"].toString());

        ui->tableWidget->setItem(row, 0, idItem);
        ui->tableWidget->setItem(row, 1, nameItem);
        ui->tableWidget->setItem(row, 2, quantityItem);
        ui->tableWidget->setItem(row, 3, priceItem);
        ui->tableWidget->setItem(row, 4, supplierItem);
        ui->tableWidget->setItem(row, 5, dateItem);
    }
}

