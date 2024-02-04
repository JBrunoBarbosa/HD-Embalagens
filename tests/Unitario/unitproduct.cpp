#include "../headers/productimpl.h"
#include "UnitProduct.h"
#include <cassert>

void UnitProduct::testId() {
    ProductImpl product(1, "Product 1", 50.0);
    assert(product.getId() == 1);
}

void UnitProduct::testName() {
    ProductImpl product(1, "Product 1", 50.0);
    assert(product.getName() == "Product 1");
}

void UnitProduct::testPriceByUnit() {
    ProductImpl product(1, "Product 1", 50.0);
    assert(product.getPriceByUnit() == 50.0);
}

void UnitProduct::testSupplier() {
    ProductImpl product(1, "Product 1", 50.0);
    product.setSupplier("Supplier A");
    assert(product.getSupplier() == "Supplier A");
}

void UnitProduct::testQuantityInStock() {
    ProductImpl product(1, "Product 1", 50.0);
    product.setQuantityInStock(10);
    assert(product.getQuantityInStock() == 10);
}

void UnitProduct::testAddedDate() {
    ProductImpl product(1, "Product 1", 50.0);
    product.setAddedDate("2024-02-04");
    assert(product.getAddedDate() == "2024-02-04");
}
