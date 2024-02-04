#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

class Product {
public:
    virtual ~Product() {}

    virtual int getId() const = 0;
    virtual void setId(int value) = 0;

    virtual QString getName() const = 0;
    virtual void setName(const QString &value) = 0;

    virtual double getPriceByUnit() const = 0;
    virtual void setPriceByUnit(double value) = 0;

    virtual QString getSupplier() const = 0;
    virtual void setSupplier(const QString &supplier) = 0;

    virtual int getQuantityInStock() const = 0;
    virtual void setQuantityInStock(int quantityInStock) = 0;

    virtual QString getAddedDate() const = 0;
    virtual void setAddedDate(const QString &date) = 0;
};

#endif // PRODUCT_H
