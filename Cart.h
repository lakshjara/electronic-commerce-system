#ifndef CART_H
#define CART_H

#include <map>
#include "Product.h"

class Cart {
private:
    std::map<Product, int> items;

public:
    void addItem(Product product, int quantity);
    void removeItem(Product product);
    double getTotal();
};

#endif
