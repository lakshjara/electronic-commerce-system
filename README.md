# Electronic Commerce System

## Context
Para ayudar a los pequeños empresarios a implementar estrategias de comercio electrónico, propongo un proyecto en C++ que se centre en la gestión de información de transacciones, inventario, clientes y pagos en una plataforma de e-commerce. Este proyecto proporciona una estructura de clases para modelar la funcionalidad básica de un sistema de ventas en línea. Las cinco clases principales son: Producto, Cliente, Transaccion, Carrito y Pago.

## System operation

This system allows:

1. Products will be managed in terms of availability and price.
2. Customers can add items to their cart.
3. Transactions are generated and their total is calculated.
4. Simulate a payment using different methods.
5. Inventory will be updated after each successful transaction.

Example of use
1. Create products and add them to inventory.
2. Create clients.
3. Add products to the customer's shopping cart.
4. Generate a transaction and calculate the total.
5. Process the payment of the transaction with the Payment class.

## Clases 

### 1. Product Class
Represents the items available in the store, managing their details and quantities in inventory.
### 2. Client Class
Manage customer information, including personal details and preferred payment methods.
### 3. Cart Class
Allows you to add or remove products before completing the purchase and maintains a list of selected items.
### 4. Transaction Class
It represents the purchase transaction and maintains customer information, shopping cart, and transaction status.
### 5. Payment Class
Manage the payment process and support multiple methods (card, transfer, etc.). It also simulates payment validation.

