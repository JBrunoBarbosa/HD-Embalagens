#include "unituser.h"
#include "unitsale.h"
#include "unitproduct.h"
#include <cassert>
#include <iostream>


int main() {
    UnitUser unitUser;
    unitUser.testId();
    unitUser.testName();
    unitUser.testEmail();
    unitUser.testPassword();
    unitUser.testCpf();
    unitUser.testPermission();

    UnitSale unitSale;
    unitSale.testId();
    unitSale.testName();
    unitSale.testSalePrice();
    unitSale.testDate();
    unitSale.testQuantity();

    UnitProduct unitProduct;
    unitProduct.testId();
    unitProduct.testName();
    unitProduct.testPriceByUnit();
    unitProduct.testSupplier();
    unitProduct.testQuantityInStock();
    unitProduct.testAddedDate();

    std::cout << "All testes passed" << std::endl;

    return 0;
}
