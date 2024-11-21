#include "Card.h"

// Constructor
Card::Card(int transId, Customer transCustomer, double transAmount, Product transProduct, string cardBank)
    : Transaction(transId, transCustomer, transAmount, "Card", transProduct), bank(cardBank) {}

// Getter and Setter for bank
void Card::setBank(string newBank) { bank = newBank; }
string Card::getBank() { return bank; }

// Override getTransactionData
string Card::getTransactionData() {
    return Transaction::getTransactionData() + "\nBank: " + bank;
}
