#ifndef DISH_H
#define DISH_H
#include <string>
using namespace std;
class Dish {
private:
    string name;
    double price;
public:
    Dish();                 
    Dish(string n);              
    Dish(string n, double p);       
    ~Dish() {}

    void display() const;
};
#endif