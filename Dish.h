#ifndef DISH_H
#define DISH_H
#include "MenuItem.h"
#include <string>
using namespace std;

class Dish : public MenuItem {
public:
    Dish();
    Dish(string n);
    Dish(string n, double p);
    void display() const;
};

#endif