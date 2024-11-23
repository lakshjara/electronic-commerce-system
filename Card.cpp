#include "Card.h"

// Constructor
Card::Card(int transId, Customer transCustomer, double transAmount, string transMethod, Product transProduct, string cardBank)
    : Transaction(transId, transCustomer, transAmount, transMethod, transProduct), bank(cardBank) {}

// Setter and Getter
void Card::setBank(string newBank) { bank = newBank; }
string Card::getBank() { return bank; }

// Override getTransactionData
string Card::getTransactionData() {
    return Transaction::getTransactionData() + "\nBank: " + bank;
}
