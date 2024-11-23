#ifndef CASH_H
#define CASH_H

#include "Transaction.h"
#include <string>
using namespace std;

class Cash : public Transaction {
private:
    string bills;

public:
    Cash(int transId, Customer transCustomer, double transAmount, string transMethod, Product transProduct, string cashBills);

    void setBills(string newBills);
    string getBills();
    string getTransactionData() override;
};

#endif
