#include "Order.h"
#include <iostream>

Order::Order(int i) : id{ i } {}

void Order::print() const {
    std::cout << "Order #" << id << std::endl;
}