#ifndef CLIENT_H
#define CLIENT_H
#include <string>
using namespace std;
class Client {
private:
    string name;
public:
    Client(string n = "Guest");
    ~Client() {}
    void show() const;
};
#endif