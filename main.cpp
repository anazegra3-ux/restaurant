#include "Restaurant.h"
#include "Client.h"
#include "Dish.h"
#include "Order.h"
#include <iostream>

using namespace std;

int main() {

    Restaurant res("Gusto");
    res.open();

    Client c1("Oksana");
    Client c2("Andrii");
    Client c3("Maria");

    Dish d1("Pizza", 250);
    Dish d2("Burger", 180);
    Dish d3("Sushi", 320);

    c1.show();
    c2.show();
    c3.show();

    d1.display();
    d2.display();
    d3.display();

    cout << "\n--- Orders ---\n";

    Order o1(101);
    Order o2(102);

    Order o3 = o1;

    o1.print();
    o2.print();
    o3.print();
    const Order o4(200);
    o4.print();

    
    Order::showTotal();

    
    if (o1 == o3)
        cout << "Orders are equal\n";

    
    cout << o1 << endl;

    
    Order o5;
    cin >> o5;
    cout << o5 << endl;

    return 0;
}