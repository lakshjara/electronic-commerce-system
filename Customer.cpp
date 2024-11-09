#include "Customer.h"

Customer::Customer(int id, std::string name, std::string email, std::string phone)
    : id(id), name(name), email(email), phone(phone) {}

std::string Customer::getDetails() {
    return name + " (" + email + ")";
}
