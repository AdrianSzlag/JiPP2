//
// Created by ADR on 15.11.2021.
//
#include <stdio.h>
#include "node.h"
using namespace std;

int main(){
    Vector v1, v2(5,10);
    Vector v3 = v1 + v2;

    Vector v4 = v2 * 2;
    Vector v5 = 2 * v2;

    v3 = v1.operator+(v2);
    v1.print();
    v2.print();
    v3.print();
    v4.print();

    cout << v5<<endl;
    return  0;
}