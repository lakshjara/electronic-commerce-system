#include "Cash.h"

// Constructor
Cash::Cash(int transId, Customer transCustomer, double transAmount, string transMethod, Product transProduct, string cashBills)
    : Transaction(transId, transCustomer, transAmount, transMethod, transProduct), bills(cashBills) {}

// Setter and Getter
void Cash::setBills(string newBills) { bills = newBills; }
string Cash::getBills() { return bills; }

// Override getTransactionData
string Cash::getTransactionData() {
    return Transaction::getTransactionData() + "\nBills: " + bills;
}
