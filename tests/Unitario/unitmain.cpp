#include "unituser.h"
#include "unitsale.h"
#include "unitproduct.h"
#include <cassert>

#ifdef MAIN_TEST

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
#endif
