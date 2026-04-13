#include "SpecialDish.h"
#include <iostream>
using namespace std;

SpecialDish::SpecialDish(string n, double p, string b)
    : Dish(n, p), bonus(b) {
}

void SpecialDish::print() const {
    cout << "Special Dish: "
        << name << " "
        << price
        << " Bonus: " << bonus << endl;
}