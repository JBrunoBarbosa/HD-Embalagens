#include "../headers/saleswidget.h"
#include "../headers/saleimpl.h"
#include "../headers/productimpl.h"
#include "ui_saleswidgetwindow.h"
#include <QDebug>

SalesWidget::SalesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SalesWidget),
    dbManager("hd-embalagens.db") // Certifique-se de usar o nome correto do banco de dados
{
    ui->setupUi(this);
    createTable();
    connect(ui->buttonAddSale, &QPushButton::clicked, this, &SalesWidget::on_buttonAddSale_clicked);
    connect(ui->stockTableWidget, &QTableWidget::itemSelectionChanged, this, &SalesWidget::on_stockTableWidget_itemSelectionChanged);
    loadSales();
    loadStock();
}

SalesWidget::~SalesWidget()
{
    delete ui;
}

void SalesWidget::createTable(){
    QString salesTableQuery = "id INTEGER PRIMARY KEY AUTOINCREMENT, product TEXT, quantity TEXT, total TEXT, date TEXT";
    dbManager.createTable("sales", salesTableQuery);
}

void SalesWidget::on_buttonAddSale_clicked() {
    QString product = ui->editProduct->text();
    QString quantity = ui->editQuantity->text();
    QString date = ui->dateEdit->date().toString("yyyy-MM-dd");
    QString total = ui->editTotal->text();

    // Verifica se os campos estão preenchidos
    if (product.isEmpty() || quantity.isEmpty()) {
        // Exiba uma mensagem de erro ou faça o tratamento adequado
        return;
    }

    // Insira os dados na tabela de vendas
    QVariantMap saleData;
    saleData["product"] = product;
    saleData["quantity"] = quantity;
    saleData["total"] = total;
    saleData["date"] = date;

    if (dbManager.insertRecord("sales", saleData)) {
        // Se a inserção for bem-sucedida, atualize a tabela de vendas
        loadSales();

        // Limpe os campos após a inserção
        ui->editProduct->clear();
        ui->editQuantity->clear();
        ui->dateEdit->setDate(QDate::currentDate());
    } else {
        // Trate o erro, se necessário
    }
}

void SalesWidget::on_stockTableWidget_itemSelectionChanged() {
    // Obtenha a linha selecionada na tabela de estoque
    int selectedRow = ui->stockTableWidget->currentRow();

    if (selectedRow >= 0) {
        // Obtenha as informações da linha selecionada
        QString product = ui->stockTableWidget->item(selectedRow, 1)->text(); // Coluna 1 é o nome do produto

        // Preencha os campos na interface de vendas com as informações selecionadas
        ui->editProduct->setText(product);

        // Você pode definir a data atual como padrão
        ui->dateEdit->setDate(QDate::currentDate());
    }
}

void SalesWidget::loadSales() {
    QVector<QVariantMap> sales = dbManager.selectAllRecords("sales");
    ui->salesTableWidget->clear();
    ui->salesTableWidget->setRowCount(sales.size());
    ui->salesTableWidget->setColumnCount(4); // ID Venda, Produto, Vendido, Data

    QStringList headers;
    headers << "ID Venda" << "Produto" << "Quantidade" << "Valor" << "Data";
    ui->salesTableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < sales.size(); ++row) {
        const QVariantMap& sale = sales[row];

        QTableWidgetItem* idItem = new QTableWidgetItem(sale["id"].toString());
        QTableWidgetItem* productItem = new QTableWidgetItem(sale["product"].toString());
        QTableWidgetItem* soldItem = new QTableWidgetItem(sale["quantity"].toString());
        QTableWidgetItem* value = new QTableWidgetItem(sale["total"].toString());
        QTableWidgetItem* dateItem = new QTableWidgetItem(sale["date"].toString());

        ui->salesTableWidget->setItem(row, 0, idItem);
        ui->salesTableWidget->setItem(row, 1, productItem);
        ui->salesTableWidget->setItem(row, 2, soldItem);
        ui->salesTableWidget->setItem(row, 3, value);
        ui->salesTableWidget->setItem(row, 4, dateItem);
    }
}

void SalesWidget::loadStock() {
    QVector<QVariantMap> products = dbManager.selectAllRecords("products");
    ui->stockTableWidget->clear();
    ui->stockTableWidget->setRowCount(products.size());
    ui->stockTableWidget->setColumnCount(4); // ID, Nome, Quantidade, Preço

    QStringList headers;
    headers << "ID" << "Nome" << "Quantidade" << "Preço";
    ui->stockTableWidget->setHorizontalHeaderLabels(headers);

    for (int row = 0; row < products.size(); ++row) {
        const QVariantMap& product = products[row];

        QTableWidgetItem* idItem = new QTableWidgetItem(product["id"].toString());
        QTableWidgetItem* nameItem = new QTableWidgetItem(product["name"].toString());
        QTableWidgetItem* quantityItem = new QTableWidgetItem(product["quantity"].toString());
        QTableWidgetItem* priceItem = new QTableWidgetItem(product["price"].toString());

        ui->stockTableWidget->setItem(row, 0, idItem);
        ui->stockTableWidget->setItem(row, 1, nameItem);
        ui->stockTableWidget->setItem(row, 2, quantityItem);
        ui->stockTableWidget->setItem(row, 3, priceItem);
    }
}
