#include "../headers/saleimpl.h"
#include "UnitSale.h"
#include <cassert>

void UnitSale::testId() {
    SaleImpl sale(1, "Sale 1", 100.0);
    assert(sale.getId() == 1);
}

void UnitSale::testName() {
    SaleImpl sale(1, "Sale 1", 100.0);
    assert(sale.getName() == "Sale 1");
}

void UnitSale::testSalePrice() {
    SaleImpl sale(1, "Sale 1", 100.0);
    assert(sale.getSalePrice() == 100.0);
}

void UnitSale::testDate() {
    SaleImpl sale(1, "Sale 1", 100.0);
    sale.setDate("2024-02-04");
    assert(sale.getDate() == "2024-02-04");
}

void UnitSale::testQuantity() {
    SaleImpl sale(1, "Sale 1", 100.0);
    sale.setQuantity(5);
    assert(sale.getQuantity() == 5);
}
