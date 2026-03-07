#include "Dish.h"
#include <iostream>

// Використання списку ініціалізації
Dish::Dish(std::string n, double p) : name{ n }, price{ p } {}

void Dish::display() const {
    std::cout << name << ": " << price << " UAH" << std::endl;
}