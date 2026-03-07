#ifndef DISH_H
#define DISH_H
#include <string>

class Dish {
private:
    std::string name;
    double price;
public:
    // Поєднує параметри за замовчуванням та можливість делегування
    Dish(std::string n = "Dish", double p = 0.0);
    ~Dish() {}  
    void display() const;
};
#endif