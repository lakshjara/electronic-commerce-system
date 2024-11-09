#include "Payment.h"

Payment::Payment(int paymentId, double amount, std::string method)
    : paymentId(paymentId), amount(amount), method(method) {}

bool Payment::processPayment() {
    return true;
}
