# Electronic Commerce System

## Context
To help small business owners implement e-commerce strategies, I propose a C++ project that focuses on managing transaction, inventory, customer and payment information on an e-commerce platform. This project provides a class structure to model the basic functionality of an online sales system. 

## System purpose
The primary purpose of this system is to record and manage transactions made by customers when purchasing products. The system allows:

Representation of customers making purchases.
Description of the products being purchased.
Recording each transaction with payment details, whether in cash or by card.
Modeling specific payment method information to handle different scenarios.

## Main Components
#### Transactions: 
The central class of the system is Transaction, which logs details of each purchase, such as the customer making the transaction, the product purchased, the total amount, and the payment method used.
This class is specialized into two types of payment methods using the subclasses Card (card) and Cash (cash).
#### Customers:
The Customer class represents the customers making purchases. Each customer has a unique identifier, a name, and an email for contact purposes.
#### Products:
The Product class models the products available for sale. Each product has a unique identifier, a name, and a price.
#### Payment Methods:
Card: The Card class inherits from Transaction and contains additional information about the bank associated with the card used for payment.

Cash: The Cash class also inherits from Transaction, but includes details about the bills used in the transaction.

## Relationships Between Classes
#### Composition:
The Transaction class depends on Customer and Product as essential parts of a transaction. This is modeled as a composition relationship (solid diamonds in the diagram).
Without a customer or product, a transaction does not make sense.
#### Inheritance:
Card and Cash inherit from the base class Transaction. This means they are specialized types of transactions that add their own unique details for the payment method.

## Usage Scenario
1. A customer purchases a product.
2. An object of the Transaction class is created, recording the customer, product, amount, and payment method.
3. If the payment method is card, a Card object is created to include information about the associated bank.
4. If the payment method is cash, a Cash object is created to specify the bills used.
5. The system can query and manage the details of any recorded transaction.

## UML Diagram
![image](https://github.com/user-attachments/assets/bb76c6c5-9fbb-47fa-bb6e-db0b4344dc77)


## Instructions
Download the file and run in terminal with:
```bash
g++ main.cpp Product.cpp Customer.cpp Cart.cpp Transaction.cpp Payment.cpp 
```
## Run the program
```bash
./ecommerce
```
