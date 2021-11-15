//
// Created by filip on 11/14/21.
//

#ifndef JIPP2_NODE_H
#define JIPP2_NODE_H

#include <iostream>
using namespace std;
class Vector {
private:
    double x, y;

public:
    Vector() {x = 0; y = 0;};

    Vector(double x, double y) : x(x), y(y) {}

    double length();
    void print();

    Vector operator+(const Vector &rhs) const;
    Vector operator*(const int &rhs) const;
    friend std::ostream &operator<<(std::ostream & lhs, const Vector &rhs) ;

    Vector &operator+=(const Vector &rhs);

    friend Vector operator*(const double &lhs, const Vector &rhs);
};

#endif //JIPP2_NODE_H