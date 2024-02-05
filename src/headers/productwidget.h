#ifndef PRODUCTWIDGET_H
#define PRODUCTWIDGET_H

#include <QWidget>
#include "../headers/databasemanager.h"

namespace Ui {
class ProductWidget;
}

class ProductWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ProductWidget(QWidget *parent = nullptr);
    ~ProductWidget();

private slots:
    void onButtonSubmitClicked();
    void loadProducts();
    void createTable();

private:
    Ui::ProductWidget *ui;
    DatabaseManager dbManager;
};

#endif // PRODUCTWIDGET_H
