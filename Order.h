
#ifndef ORDER_H
#define ORDER_H

class Order {
private:
    int id;
public:
    Order(int i = 0);
    ~Order() {}
    void print() const;
};
#endif