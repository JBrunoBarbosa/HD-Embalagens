#ifndef USER_H
#define USER_H

#include <QString>

class User {
public:
    virtual ~User() {}

    virtual int getId() const = 0;
    virtual void setId(int value) = 0;

    virtual QString getName() const = 0;
    virtual void setName(const QString &value) = 0;

    virtual QString getEmail() const = 0;
    virtual void setEmail(const QString &value) = 0;

    virtual QString getPassword() const = 0;
    virtual void setPassword(const QString &value) = 0;

    virtual QString getCpf() const = 0;
    virtual void setCpf(const QString &value) = 0;

    virtual QString getPermission() const = 0;
    virtual void setPermission(const QString &value) = 0;
};

#endif // USER_H
