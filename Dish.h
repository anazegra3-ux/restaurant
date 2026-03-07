#ifndef DISH_H
#define DISH_H
#include <string>
using namespace std;
class Dish {
private:
    string name;
    double price;
public:
   
    Dish(std::string n = "Dish", double p = 0.0);
    ~Dish() {}  
    void display() const;
};
#endif