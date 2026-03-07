#ifndef RESTAURANT_H
#define RESTAURANT_H
#include <string>

class Restaurant {
private:
    std::string title;
public:
    Restaurant(std::string t = "Restaurant");
    ~Restaurant() {}
    void open() const;
};
#endif