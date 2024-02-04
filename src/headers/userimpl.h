#ifndef USER_IMPL_H
#define USER_IMPL_H

#include "user.h"
#include <QString>

class UserImpl : public User {
public:
    UserImpl(int id, const QString &name, const QString &cpf, const QString &email,const QString &permission, const QString &password);

    int getId() const override;
    void setId(int value) override;

    QString getName() const override;
    void setName(const QString &value) override;

    QString getEmail() const override;
    void setEmail(const QString &value) override;

    QString getPassword() const override;
    void setPassword(const QString &value) override;

    QString getCpf() const override;
    void setCpf(const QString &value) override;

    QString getPermission() const override;
    void setPermission(const QString &value) override;

protected:
    int id;
    QString name;
    QString cpf;
    QString email;
    QString permission;
    QString password;
};

#endif
