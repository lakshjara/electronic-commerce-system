#ifndef PAYMENT_H
#define PAYMENT_H

#include <string>

class Payment {
private:
    int paymentId;
    double amount;
    std::string method;

public:
    Payment(int paymentId, double amount, std::string method);
    bool processPayment();
};

#endif
