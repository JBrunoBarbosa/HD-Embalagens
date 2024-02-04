#include "../headers/mainwindow.h"
#include "ui_mainwindow.h"
#include "../headers/userwidget.h"
#include "../headers/productwidget.h"
#include "../headers/saleswidget.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent),
    ui(new Ui::MainWindow),
    currentWidget(nullptr) {
    ui->setupUi(this);
    connect(ui->navigateToUsers, &QAction::triggered, this, [this]() { openWidget(new UserWidget(this)); });
    connect(ui->navigateToProducts, &QAction::triggered, this, [this]() { openWidget(new ProductWidget(this)); });
    connect(ui->navigateToSales, &QAction::triggered, this, [this]() { openWidget(new SalesWidget(this)); });
}

MainWindow::~MainWindow() {
    delete ui;
    delete currentWidget;
}

void MainWindow::openWidget(QWidget* widget) {
    if (widget) {
        delete currentWidget;
        currentWidget = widget;
        setCentralWidget(currentWidget);
    }
}
