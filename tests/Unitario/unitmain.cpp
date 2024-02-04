#include "../../tests/unitario/unituser.h"
#include "../../tests/unitario/unitsale.h"
#include "../../tests/unitario/unitproduct.h"
#include <cassert>

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

    return 0;
}
