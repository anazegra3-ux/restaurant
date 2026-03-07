#ifndef DISH_H
#define DISH_H
#include <string>
using namespace std;
class Dish {
private:
    string name;
    double price;
public:
    Dish();                              // конструктор без параметрів
    Dish(string n);                 // перевантажений конструктор
    Dish(string n, double p);       // основний конструктор
    ~Dish() {}

    void display() const;
};
#endif