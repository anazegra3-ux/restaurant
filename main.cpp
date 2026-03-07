#include "Dish.h"
#include "Client.h"
#include "Order.h"
#include "Dish.h"
#include "Client.h"
#include "Order.h"
#include "Restaurant.h"
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

    cout << "Oksana ordered Pizza\n";
    cout << "Andrii ordered Burger\n";
    cout << "Maria ordered Sushi\n";

    
    Order o1(101);
    Order o2(102);
    Order o3(103);

    o1.print();
    o2.print();
    o3.print();

    return 0;
}