#include "../headers/productimpl.h"

ProductImpl::ProductImpl(int id, const QString &name, double price)
    : id(id), name(name), priceByUnit(price) {}

int ProductImpl::getId() const {
    return id;
}

void ProductImpl::setId(int value) {
    id = value;
}

QString ProductImpl::getName() const {
    return name;
}

void ProductImpl::setName(const QString &value) {
    name = value;
}

double ProductImpl::getPriceByUnit() const {
    return priceByUnit;
}

void ProductImpl::setPriceByUnit(double value) {
    priceByUnit = value;
}

QString ProductImpl::getSupplier() const {
    return supplier;
}

void ProductImpl::setSupplier(const QString &value) {
    supplier = value;
}

int ProductImpl::getQuantityInStock() const {
    return quantityInStock;
}

void ProductImpl::setQuantityInStock(int value) {
    quantityInStock = value;
}

QString ProductImpl::getAddedDate() const {
    return addedDate;
}

void ProductImpl::setAddedDate(const QString &date) {
    addedDate = date;
}
