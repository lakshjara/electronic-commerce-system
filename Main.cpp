#include <iostream>
#include <vector>
#include "Customer.h"
#include "Product.h"
#include "Card.h"
#include "Cash.h"
using namespace std;

void displayMenu() {
    cout << "\n=== Transaction Management System ===\n";
    cout << "1. Add Customer\n";
    cout << "2. Add Product\n";
    cout << "3. Create Card Transaction\n";
    cout << "4. Create Cash Transaction\n";
    cout << "5. View Transactions\n";
    cout << "6. Exit\n";
    cout << "Choose an option: ";
}

int main() {
    vector<Customer> customers;
    vector<Product> products;
    vector<Transaction*> transactions;

    int choice;
    do {
        displayMenu();
        cin >> choice;
        cin.ignore();

        if (choice == 1) {
            int id;
            string name, email;
            cout << "Enter Customer ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Email: ";
            getline(cin, email);
            customers.emplace_back(id, name, email);

        } else if (choice == 2) {
            int id;
            string name;
            double price;
            cout << "Enter Product ID: ";
            cin >> id;
            cin.ignore();
            cout << "Enter Name: ";
            getline(cin, name);
            cout << "Enter Price: ";
            cin >> price;
            products.emplace_back(id, name, price);

        } else if (choice == 3 || choice == 4) {
            if (customers.empty() || products.empty()) {
                cout << "Please add customers and products first.\n";
                continue;
            }

            int transId, customerIndex, productIndex;
            double amount;
            string method = (choice == 3) ? "Card" : "Cash";
            cout << "Enter Transaction ID: ";
            cin >> transId;
            cout << "Enter Customer Index (0-" << customers.size() - 1 << "): ";
            cin >> customerIndex;
            cout << "Enter Product Index (0-" << products.size() - 1 << "): ";
            cin >> productIndex;
            cout << "Enter Amount: ";
            cin >> amount;
            cin.ignore();

            if (choice == 3) {
                string bank;
                cout << "Enter Bank Name: ";
                getline(cin, bank);
                transactions.push_back(new Card(transId, customers[customerIndex], amount, method, products[productIndex], bank));
            } else {
                string bills;
                cout << "Enter Bill Details: ";
                getline(cin, bills);
                transactions.push_back(new Cash(transId, customers[customerIndex], amount, method, products[productIndex], bills));
            }

        } else if (choice == 5) {
            for (size_t i = 0; i < transactions.size(); ++i) {
                cout << "\nTransaction " << i + 1 << ":\n";
                cout << transactions[i]->getTransactionData() << endl;
            }
        }
    } while (choice != 6);

    for (auto trans : transactions) {
        delete trans;
    }

    return 0;
}
