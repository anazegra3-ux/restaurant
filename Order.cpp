#include "Order.h"
using namespace std;

int Order::totalOrders = 0;

Order::Order(int i) : id{ i } {
    totalOrders++;
}
Order::Order(const Order& other) {
    this->id = other.id;
    totalOrders++;
}

Order::Order(Order&& other) {
    id = other.id;
    other.id = 0;
}

void Order::print() const {
    cout << "Order #" << id << endl;
}

void Order::showTotal() {
    cout << "Total orders: " << totalOrders << endl;
}

bool Order::operator==(const Order& other) const {
    return this->id == other.id;
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