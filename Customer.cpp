#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>
using namespace std;

class Customer {
private:
    int id;
    string name;
    string email;

public:
    Customer(int customerId, string customerName, string customerEmail);

    int getId();
    string getName();
    string getEmail();
    void setEmail(string newEmail);
    string getCustomerData();
};

#endif
