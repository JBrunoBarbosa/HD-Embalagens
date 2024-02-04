#include "../headers/userimpl.h"

UserImpl::UserImpl(int id, const QString &name, const QString &cpf, const QString &email, const QString &permission, const QString &password)
    : id(id), name(name), cpf(cpf), email(email), permission(permission), password(password) {}

int UserImpl::getId() const {
    return id;
}

void UserImpl::setId(int value) {
    id = value;
}

QString UserImpl::getName() const {
    return name;
}

void UserImpl::setName(const QString &value) {
    name = value;
}

QString UserImpl::getEmail() const {
    return email;
}

void UserImpl::setEmail(const QString &value) {
    email = value;
}

QString UserImpl::getPassword() const {
    return password;
}

void UserImpl::setPassword(const QString &value) {
    password = value;
}

QString UserImpl::getCpf() const {
    return cpf;
}

void UserImpl::setCpf(const QString &value) {
    cpf = value;
}

QString UserImpl::getPermission() const {
    return permission;
}

void UserImpl::setPermission(const QString &value) {
    permission = value;
}
