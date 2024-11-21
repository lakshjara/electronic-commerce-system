#include "Customer.h"

// Constructor
Customer::Customer(int customerId, string customerName, string customerEmail)
    : id(customerId), name(customerName), email(customerEmail) {}

// Getters
int Customer::getId() { return id; }
string Customer::getName() { return name; }
string Customer::getEmail() { return email; }

// Setters
void Customer::setEmail(string newEmail) { email = newEmail; }

// Method to get full customer data
string Customer::getCustomerData() {
    return "Customer ID: " + to_string(id) + ", Name: " + name + ", Email: " + email;
}
