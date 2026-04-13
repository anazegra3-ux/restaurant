#pragma once
#include <string>
using namespace std;

class MenuItem {
protected:
    string name;
    double price;

public:
    MenuItem(string n, double p);

    // 🔥 ВІРТУАЛЬНІ ФУНКЦІЇ
    virtual void print() const=0 {
    }

    virtual double getPrice() const {
        return price;
    }
    // 🔥 ВІРТУАЛЬНИЙ ДЕСТРУКТОР
    virtual ~MenuItem() {}
};