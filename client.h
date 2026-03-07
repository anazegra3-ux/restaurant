#ifndef CLIENT_H
#define CLIENT_H
#include <string>

class Client {
private:
    std::string name;
public:
    Client(std::string n = "Guest");
    ~Client() {}
    void show() const;
};
#endif