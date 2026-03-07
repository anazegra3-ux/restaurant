#include "Dish.h"
#include <iostream>
using namespace std;

Dish::Dish() : Dish("Dish", 0.0) {}

Dish::Dish(string n) : Dish(n, 0.0) {}

Dish::Dish(string n, double p) : name{ n }, price{ p } {}

void Dish::display() const {
    cout << name << ": " << price << " UAH" << endl;
}