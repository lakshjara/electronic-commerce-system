#include "Transaction.h"

// Constructor
Transaction::Transaction(int transId, Customer transCustomer, double transAmount, string transMethod, Product transProduct)
    : transactionId(transId), customer(transCustomer), amount(transAmount), method(transMethod), product(transProduct) {}

// Getters
int Transaction::getTransactionId() { return transactionId; }
Customer Transaction::getCustomer() { return customer; }
double Transaction::getAmount() { return amount; }
string Transaction::getMethod() { return method; }
Product Transaction::getProduct() { return product; }

// Method to get full transaction data
string Transaction::getTransactionData() {
    return "Transaction ID: " + to_string(transactionId) + "\n" +
           customer.getCustomerData() + "\n" +
           product.getProductData() + "\n" +
           "Amount: $" + to_string(amount) + ", Method: " + method;
}

