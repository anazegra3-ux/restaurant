#pragma once
#include "Dish.h"

class SpecialDish : public Dish {
private:
    string bonus;

public:
    SpecialDish(string n, double p, string b);
    void print() const override; // тільки оголошення
};