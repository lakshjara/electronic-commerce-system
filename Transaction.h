#ifndef TRANSACTION_H
#define TRANSACTION_H

#include <string>
#include "Customer.h"
#include "Cart.h"

class Transaction {
private:
    int transactionId;
    Customer customer;
    Cart cart;
    std::string status;

public:
    Transaction(int transactionId, Customer customer, Cart cart);
    double calculateTotal();
    void updateStatus(std::string newStatus);
    std::string getStatus();
};

#endif
