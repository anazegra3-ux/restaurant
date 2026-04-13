#ifndef ORDER_H
#define ORDER_H
#include <iostream>
#include "Client.h"
#include "Dish.h"
using namespace std;

class Order {
private:
    int id;
    Client client;   
    Dish dish; 
    static int totalOrders;
    MenuItem* item;

public:
    Order(Client c, MenuItem* i);

    Order(int i = 0);
    Order(int i, Client c, Dish d);

    Order(const Order& other);
    Order(Order&& other);

    static void showTotal();

    bool operator==(const Order& other) const;
    bool operator!() const;

    friend ostream& operator<<(ostream& os, const Order& obj);
    friend istream& operator>>(istream& is, Order& obj);
    void print() const;
};

#endif