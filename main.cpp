#include "Restaurant.h"
#include "Client.h"
#include "Dish.h"
#include "Order.h"
#include <iostream>
#include "SpecialDish.h"

using namespace std;
void showItem(const MenuItem& item) {
    item.print();
}

int main() {
    

    Restaurant res("Gusto");
    res.open();

    Client c1("Oksana", 1);
    Client c2("Andrii", 2);
    Client c3("Maria", 3);
    Client c("Oksana", 1);

    Dish d1("Pizza", 250);
    Dish d2("Burger", 180);
    Dish d3("Sushi", 320);
	SpecialDish sd("Steak", 400, "Sauce");

    c1.show();
    c2.show();
    c3.show();

    d1.print();
    d2.print();
    d3.print();

    cout << "\n--- Orders ---\n";

    Order o1(101);
    Order o2(102);

    Order o3 = o1;

    o1.print();
    o2.print();
    o3.print();

    Order o6(201, c1, d1);
    o6.print();

    Order::showTotal();

    if (o1 == o3)
        cout << "Orders are equal\n";

    cout << o1 << endl;

    Order o5;
    cin >> o5;
    cout << o5 << endl;
    MenuItem* ptr = new SpecialDish("Sushi", 300, "Sauce");
    ptr->print();
    delete ptr;

    cout << "\n= Order =" << endl;
    Order o(c, &sd);
    o.print();

    return 0;
}