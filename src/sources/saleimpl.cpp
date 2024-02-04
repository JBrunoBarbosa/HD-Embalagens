#include "../headers/saleimpl.h"

SaleImpl::SaleImpl(int id, const QString &name, double price)
    : id(id), name(name), price(price) {}

int SaleImpl::getId() const {
    return id;
}

void SaleImpl::setId(int value) {
    id = value;
}

QString SaleImpl::getName() const {
    return name;
}

void SaleImpl::setName(const QString &value) {
    name = value;
}

double SaleImpl::getSalePrice() const {
    return price;
}

void SaleImpl::setSalePrice(double value) {
    price = value;
}

QString SaleImpl::getDate() const {
    return date;
}

void SaleImpl::setDate(const QString &value) {
    date = value;
}

int SaleImpl::getQuantity() const {
    return quantity;
}

void SaleImpl::setQuantity(int value) {
    quantity = value;
}
