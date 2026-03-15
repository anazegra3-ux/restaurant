#include "client.h"
#include <iostream>
using namespace std;

Client::Client(string n) {
	name = n;
}

void Client::show() const {
	cout << "Client: " << name << endl;
}
