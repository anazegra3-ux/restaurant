#ifndef ORDER_H
#define ORDER_H
#include <iostream>
using namespace std;
class Order {
private:
    int id;
    static int totalOrders;  

public:
    Order(int i = 0);

    Order(const Order& other);

    Order(Order&& other);

    ~Order() {}

    void print() const;

    static void showTotal();

   
    bool operator==(const Order& other) const;

   
    friend ostream& operator<<(ostream& os, const Order& obj);
    friend istream& operator>>(istream& is, Order& obj);
};

#endif