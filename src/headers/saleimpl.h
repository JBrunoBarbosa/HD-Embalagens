#ifndef SALE_IMPL_H
#define SALE_IMPL_H

#include "sale.h"
#include <QString>

class SaleImpl : public Sale {
public:
    SaleImpl(int id, const QString &name, double price);

    int getId() const override;
    void setId(int value) override;

    QString getName() const override;
    void setName(const QString &value) override;

    double getSalePrice() const override;
    void setSalePrice(double value) override;

    QString getDate() const override;
    void setDate(const QString &value) override;

    int getQuantity() const override;
    void setQuantity(int value) override;

protected:
    int id;
    QString name;
    int quantity;
    double price;
    QString date;
};

#endif
