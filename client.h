#ifndef CLIENT_H
#define CLIENT_H
#include "Person.h"
#include <string>
using namespace std;

class Client : public Person {
private:
    int id;

public:
    Client();
    Client(string name, int id);
    void show() const;
};

#endif