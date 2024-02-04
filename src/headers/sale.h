#ifndef SALE_H
#define SALE_H

#include <QString>

/**
 * @brief A classe Sale define a interface para uma venda genérica.
 */
class Sale {
public:
    virtual ~Sale() {}

    /**
     * @brief Obtém o ID da venda.
     * @return O ID da venda.
     */
    virtual int getId() const = 0;

    /**
     * @brief Define o ID da venda.
     * @param value O ID da venda a ser definido.
     */
    virtual void setId(int value) = 0;

    /**
     * @brief Obtém o nome da venda.
     * @return O nome da venda.
     */
    virtual QString getName() const = 0;

    /**
     * @brief Define o nome da venda.
     * @param value O nome da venda a ser definido.
     */
    virtual void setName(const QString &value) = 0;

    /**
     * @brief Obtém o preço da venda.
     * @return O preço da venda.
     */
    virtual double getSalePrice() const = 0;

    /**
     * @brief Define o preço da venda.
     * @param value O preço da venda a ser definido.
     */
    virtual void setSalePrice(double value) = 0;

    /**
     * @brief Obtém a data da venda.
     * @return A data da venda.
     */
    virtual QString getDate() const = 0;

    /**
     * @brief Define a data da venda.
     * @param value A data da venda a ser definida.
     */
    virtual void setDate(const QString &value) = 0;

    /**
     * @brief Obtém a quantidade da venda.
     * @return A quantidade da venda.
     */
    virtual int getQuantity() const = 0;

    /**
     * @brief Define a quantidade da venda.
     * @param value A quantidade da venda a ser definida.
     */
    virtual void setQuantity(int value) = 0;
};

#endif // SALE_H
