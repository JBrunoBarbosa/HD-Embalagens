#include "../../src/headers/userimpl.h"
#include "../../tests/Unitario/unituser.h"
#include <cassert>

void UnitUser::testId() {
    UserImpl user(1, "User 1", "123456789", "user1@example.com", "Admin", "password123");
    assert(user.getId() == 1);
}

void UnitUser::testName() {
    UserImpl user(1, "User 1", "123456789", "user1@example.com", "Admin", "password123");
    assert(user.getName() == "User 1");
}

void UnitUser::testEmail() {
    UserImpl user(1, "User 1", "123456789", "user1@example.com", "Admin", "password123");
    assert(user.getEmail() == "user1@example.com");
}

void UnitUser::testPassword() {
    UserImpl user(1, "User 1", "123456789", "user1@example.com", "Admin", "password123");
    assert(user.getPassword() == "password123");
}

void UnitUser::testCpf() {
    UserImpl user(1, "User 1", "123456789", "user1@example.com", "Admin", "password123");
    assert(user.getCpf() == "123456789");
}

void UnitUser::testPermission() {
    UserImpl user(1, "User 1", "123456789", "user1@example.com", "Admin", "password123");
    assert(user.getPermission() == "Admin");
}
