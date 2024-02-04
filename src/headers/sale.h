#ifndef SALE_H
#define SALE_H

#include <QString>

class Sale {
public:
    virtual ~Sale() {}

    virtual int getId() const = 0;
    virtual void setId(int value) = 0;

    virtual QString getName() const = 0;
    virtual void setName(const QString &value) = 0;

    virtual double getSalePrice() const = 0;
    virtual void setSalePrice(double value) = 0;

    virtual QString getDate() const = 0;
    virtual void setDate(const QString &value) = 0;

    virtual int getQuantity() const = 0;
    virtual void setQuantity(int value) = 0;
};

#endif // SALE_H
