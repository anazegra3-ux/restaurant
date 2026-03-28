#pragma once
#include <string>
using namespace std;

class MenuItem {
protected:
    string name;
    double price;

public:
    MenuItem(string n, double p); // ? тільки оголошення
};