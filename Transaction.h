#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Customer.h"
#include "Product.h"
#include <string>
using namespace std;

class Transaction {
protected:
    int transactionId;
    Customer customer;
    double amount;
    string method;
    Product product;

public:
    Transaction(int transId, Customer transCustomer, double transAmount, string transMethod, Product transProduct);

    int getTransactionId();
    Customer getCustomer();
    double getAmount();
    string getMethod();
    Product getProduct();
    virtual string getTransactionData(); // Virtual for inheritance
    virtual ~Transaction() = default;   // Virtual destructor
};

#endif

