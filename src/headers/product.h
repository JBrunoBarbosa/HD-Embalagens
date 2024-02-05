#ifndef PRODUCT_H
#define PRODUCT_H

#include <QString>

/**
 * @brief A classe Product define a interface para um produto genérico.
 */
class Product {
public:
    virtual ~Product() {}

    /**
     * @brief Obtém o ID do produto.
     * @return O ID do produto.
     */
    virtual int getId() const = 0;

    /**
     * @brief Define o ID do produto.
     * @param value O ID do produto a ser definido.
     */
    virtual void setId(int value) = 0;

    /**
     * @brief Obtém o nome do produto.
     * @return O nome do produto.
     */
    virtual QString getName() const = 0;

    /**
     * @brief Define o nome do produto.
     * @param value O nome do produto a ser definido.
     */
    virtual void setName(const QString &value) = 0;

    /**
     * @brief Obtém o preço por unidade do produto.
     * @return O preço por unidade do produto.
     */
    virtual double getPriceByUnit() const = 0;

    /**
     * @brief Define o preço por unidade do produto.
     * @param value O preço por unidade do produto a ser definido.
     */
    virtual void setPriceByUnit(double value) = 0;

    /**
     * @brief Obtém o fornecedor do produto.
     * @return O fornecedor do produto.
     */
    virtual QString getSupplier() const = 0;

    /**
     * @brief Define o fornecedor do produto.
     * @param supplier O fornecedor do produto a ser definido.
     */
    virtual void setSupplier(const QString &supplier) = 0;

    /**
     * @brief Obtém a quantidade em estoque do produto.
     * @return A quantidade em estoque do produto.
     */
    virtual int getQuantityInStock() const = 0;

    /**
     * @brief Define a quantidade em estoque do produto.
     * @param quantityInStock A quantidade em estoque do produto a ser definida.
     */
    virtual void setQuantityInStock(int quantityInStock) = 0;

    /**
     * @brief Obtém a data de adição do produto.
     * @return A data de adição do produto.
     */
    virtual QString getAddedDate() const = 0;

    /**
     * @brief Define a data de adição do produto.
     * @param date A data de adição do produto a ser definida.
     */
    virtual void setAddedDate(const QString &date) = 0;
};

#endif // PRODUCT_H
