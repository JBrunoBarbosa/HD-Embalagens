#ifndef PRODUCT_IMPL_H
#define PRODUCT_IMPL_H

#include "../headers/product.h"

class ProductImpl : public Product {
public:
    ProductImpl(int id, const QString &name, double price);

    int getId() const override;
    void setId(int value) override;

    QString getName() const override;
    void setName(const QString &value) override;

    double getPriceByUnit() const override;
    void setPriceByUnit(double value) override;

    QString getSupplier() const override;
    void setSupplier(const QString &supplier) override;

    int getQuantityInStock() const override;
    void setQuantityInStock(int quantityInStock) override;

    QString getAddedDate() const override;
    void setAddedDate(const QString &date) override;

protected:
    int id;
    QString name;
    double priceByUnit;
    QString supplier;
    int quantityInStock;
    QString addedDate;
};

#endif
