#include "Client.h"
#include <iostream>

Client::Client(std::string n) : name{ n } {}

void Client::show() const {
    std::cout << "Client: " << name << std::endl;
}