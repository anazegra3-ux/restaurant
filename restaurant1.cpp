#include "Restaurant.h"
#include <iostream>
#include "client.h"
#include "Dish.h"
using namespace std;
Restaurant::Restaurant(string t) : title{ t } {}

void Restaurant::open() const {
    cout << "Welcome to " << title << endl;
}