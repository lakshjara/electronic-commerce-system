#include "Cash.h"

// Constructor
Cash::Cash(int transId, Customer transCustomer, double transAmount, Product transProduct, string cashBills)
    : Transaction(transId, transCustomer, transAmount, "Cash", transProduct), bills(cashBills) {}

// Getter and Setter for bills
void Cash::setBills(string newBills) { bills = newBills; }
string Cash::getBills() { return bills; }

// Override getTransactionData
string Cash::getTransactionData() {
    return Transaction::getTransactionData() + "\nBills: " + bills;
}
