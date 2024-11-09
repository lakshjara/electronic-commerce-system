#include "Transaction.h"

Transaction::Transaction(int transactionId, Customer customer, Cart cart)
    : transactionId(transactionId), customer(customer), cart(cart), status("Pending") {}

double Transaction::calculateTotal() {
    return 0.0;
}

void Transaction::updateStatus(std::string newStatus) {
    status = newStatus;
}

std::string Transaction::getStatus() {
    return status;
}
