#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>
using namespace std;

class Restaurant {
private:
    string title;

public:
    Restaurant(string t = "Restaurant");
    void open() const;
};

#endif