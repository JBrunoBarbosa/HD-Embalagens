#include "saleswidget.h"
#include "ui_saleswidgetwindow.h"

SalesWidget::SalesWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SalesWidget)
{
    ui->setupUi(this);
}

SalesWidget::~SalesWidget()
{
    delete ui;
}
