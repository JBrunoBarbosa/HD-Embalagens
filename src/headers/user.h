#ifndef USER_H
#define USER_H

#include <QString>

/**
 * @brief A classe User define a interface para um usuário genérico.
 */
class User {
public:
    virtual ~User() {}

    /**
     * @brief Obtém o ID do usuário.
     * @return O ID do usuário.
     */
    virtual int getId() const = 0;

    /**
     * @brief Define o ID do usuário.
     * @param value O ID do usuário a ser definido.
     */
    virtual void setId(int value) = 0;

    /**
     * @brief Obtém o nome do usuário.
     * @return O nome do usuário.
     */
    virtual QString getName() const = 0;

    /**
     * @brief Define o nome do usuário.
     * @param value O nome do usuário a ser definido.
     */
    virtual void setName(const QString &value) = 0;

    /**
     * @brief Obtém o email do usuário.
     * @return O email do usuário.
     */
    virtual QString getEmail() const = 0;

    /**
     * @brief Define o email do usuário.
     * @param value O email do usuário a ser definido.
     */
    virtual void setEmail(const QString &value) = 0;

    /**
     * @brief Obtém a senha do usuário.
     * @return A senha do usuário.
     */
    virtual QString getPassword() const = 0;

    /**
     * @brief Define a senha do usuário.
     * @param value A senha do usuário a ser definida.
     */
    virtual void setPassword(const QString &value) = 0;

    /**
     * @brief Obtém o CPF do usuário.
     * @return O CPF do usuário.
     */
    virtual QString getCpf() const = 0;

    /**
     * @brief Define o CPF do usuário.
     * @param value O CPF do usuário a ser definido.
     */
    virtual void setCpf(const QString &value) = 0;

    /**
     * @brief Obtém a permissão do usuário.
     * @return A permissão do usuário.
     */
    virtual QString getPermission() const = 0;

    /**
     * @brief Define a permissão do usuário.
     * @param value A permissão do usuário a ser definida.
     */
    virtual void setPermission(const QString &value) = 0;
};

#endif // USER_H
