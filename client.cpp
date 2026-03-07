#ifndef CLIENT_H
#define CLIENT_H
#include <string>
using namespace std;

class Client {
private:
    string name;

public:
    Client();                 // без параметрів
    Client(std::string n);    // з ім’ям
    ~Client() {}

    void show() const;
};
#endif