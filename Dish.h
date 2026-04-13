#pragma once
#include "MenuItem.h"

class Dish : public MenuItem {
public:
    Dish();
    Dish(string n);
    Dish(string n, double p);

    void print() const override ;
};