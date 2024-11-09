#include "Product.h"

Product::Product(int id, std::string name, double price, int stock)
    : id(id), name(name), price(price), stock(stock) {}

void Product::updateStock(int quantity) {
    // Método vacío
}

double Product::getPrice() {
    return price;
}

std::string Product::getName() {
    return name;
}

int Product::getStock() {
    return stock;
}
