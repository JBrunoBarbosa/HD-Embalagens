#ifndef SALESWIDGET_H
#define SALESWIDGET_H

#include <QWidget>
#include "databasemanager.h"

namespace Ui {
class SalesWidget;
}

class SalesWidget : public QWidget
{
    Q_OBJECT

public:
    explicit SalesWidget(QWidget *parent = nullptr);
    ~SalesWidget();

private slots:
    void on_buttonAddSale_clicked();
    void loadSales();
    void loadStock();
    void createTable();
    void on_stockTableWidget_itemSelectionChanged();

private:
    Ui::SalesWidget *ui;
    DatabaseManager dbManager;
};

#endif // SALESWIDGET_H
