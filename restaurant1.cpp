#include "Restaurant.h"
#include <iostream>

Restaurant::Restaurant(std::string t) : title{ t } {}

void Restaurant::open() const {
    std::cout << "Welcome to " << title << std::endl;
}