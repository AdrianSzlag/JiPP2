
#include <iostream>
#include <node.h>
#include "math.h"

using namespace std;

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::print() {
    cout<< x<< ", " << y << endl;
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x + rhs.x, y + rhs.y};
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator*(const int &rhs) const {
    return Vector(x*rhs, y*rhs);
}

Vector operator*(const double &lhs, const Vector &rhs) {
    return Vector(lhs * rhs.x, lhs * rhs.y);
}

std::ostream &operator<<(ostream &lhs, const Vector &rhs)  {
    lhs<<rhs.x;
    lhs<<", ";
    lhs<< rhs.y;
    return lhs;
}







