#include "Order.h"
#include <iostream>
using namespace std;
Order::Order(int i) : id{ i } {}

void Order::print() const {
   cout << "Order #" << id <<endl;
}