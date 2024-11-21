#ifndef CARD_H
#define CARD_H

#include "Transaction.h"
#include <string>
using namespace std;

class Card : public Transaction {
private:
    string bank;

public:
    Card(int transId, Customer transCustomer, double transAmount, Product transProduct, string cardBank);

    void setBank(string newBank);
    string getBank();
    string getTransactionData() override;
};

#endif
