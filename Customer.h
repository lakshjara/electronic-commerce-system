#ifndef CUSTOMER_H
#define CUSTOMER_H

#include <string>

class Customer {
private:
    int id;
    std::string name;
    std::string email;
    std::string phone;

public:
    Customer(int id, std::string name, std::string email, std::string phone);
    std::string getDetails();
};

#endif
