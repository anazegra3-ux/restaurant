#include "Client.h"
#include <iostream>
using namespace std;

Client::Client() : Person("Marina"), id(0) {}

Client::Client(string name, int id)
    : Person(name), id{ id } {
}

void Client::show() const {
    cout << "Client: " << name << ", ID: " << id << endl;
}