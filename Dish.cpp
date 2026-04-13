#include "Dish.h"
#include <iostream>
using namespace std;

Dish::Dish() : MenuItem("Dish", 0.0) {}

Dish::Dish(string n) : MenuItem(n, 0.0) {}

Dish::Dish(string n, double p) : MenuItem(n, p) {}

void Dish::print() const {
    cout << "Dish: " << name << " " << price << " UAH" << endl;
}