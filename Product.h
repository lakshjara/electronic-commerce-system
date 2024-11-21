#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>
using namespace std;

class Product {
private:
    int id;
    string name;
    double price;

public:
    Product(int productId, string productName, double productPrice);

    int getId();
    string getName();
    double getPrice();
    void setPrice(double newPrice);
    string getProductData();
};

#endif
