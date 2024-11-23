#include "Product.h"

// Constructor
Product::Product(int productId, string productName, double productPrice)
    : id(productId), name(productName), price(productPrice) {}

// Getters
int Product::getId() { return id; }
string Product::getName() { return name; }
double Product::getPrice() { return price; }

// Setter
void Product::setPrice(double newPrice) { price = newPrice; }

// Method to get product data
string Product::getProductData() {
    return "Product ID: " + to_string(id) + ", Name: " + name + ", Price: $" + to_string(price);
}
