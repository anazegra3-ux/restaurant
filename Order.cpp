#include "Order.h"
int Order::totalOrders = 0;

Order::Order(int i) : id{ i } {
    totalOrders++;
}

Order::Order(int i, Client c, Dish d)
    : id{ i }, client{ c }, dish{ d } {
    totalOrders++;
}

Order::Order(const Order& other)
    : id{ other.id }, client{ other.client }, dish{ other.dish } {
    totalOrders++;
}

Order::Order(Order&& other)
    : id{ other.id }, client{ other.client }, dish{ other.dish } {
    other.id = 0;
}

void Order::print() const {
    cout << "Order #" << id << endl;
    client.show();
    dish.display();
}

void Order::showTotal() {
    cout << "Total orders: " << totalOrders << endl;
}

bool Order::operator==(const Order& other) const {
    return this->id == other.id;
}

bool Order::operator!() const {
    return id == 0;
}

ostream& operator<<(ostream& os, const Order& obj) {
    os << "Order #" << obj.id;
    return os;
}

istream& operator>>(istream& is, Order& obj) {
    cout << "Enter order id: ";
    is >> obj.id;
    return is;
}