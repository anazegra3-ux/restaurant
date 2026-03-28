#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include "Client.h"
#include "Dish.h"
using namespace std;

class Order {
private:
    int id;
    Client client;   // has-a
    Dish dish;       // has-a
    static int totalOrders;

public:
    Order(int i = 0);
    Order(int i, Client c, Dish d);

    Order(const Order& other);
    Order(Order&& other);

    void print() const;
    static void showTotal();

    bool operator==(const Order& other) const;
    bool operator!() const;

    friend ostream& operator<<(ostream& os, const Order& obj);
    friend istream& operator>>(istream& is, Order& obj);
};

#endif