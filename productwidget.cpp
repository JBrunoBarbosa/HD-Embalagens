#include "productwidget.h"
#include "ui_productwidgetwindow.h"

ProductWidget::ProductWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ProductWidget)
{
    ui->setupUi(this);
}

ProductWidget::~ProductWidget()
{
    delete ui;
}
