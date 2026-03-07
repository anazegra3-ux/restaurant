#include "Dish.h"
#include "Client.h"
#include "Order.h"
#include "Dish.h"
#include "Client.h"
#include "Order.h"
#include "Restaurant.h"

int main() {
    Restaurant res("Gusto");
    res.open();

    Client c("Oksana");
    c.show();

    Dish d1("Pizza", 250);
    Dish d2; 
    d1.display();
    d2.display();

    Order o(101);
    o.print();

    return 0;
}