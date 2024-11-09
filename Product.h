#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
private:
    int id;
    std::string name;
    double price;
    int stock;

public:
    Product(int id, std::string name, double price, int stock);
    void updateStock(int quantity);
    double getPrice();
    std::string getName();
    int getStock();
};

#endif
