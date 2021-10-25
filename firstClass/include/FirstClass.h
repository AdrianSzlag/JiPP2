//
// Created by ADR on 25.10.2021.
//

#ifndef JIPP2_FIRSTCLASS_H
#define JIPP2_FIRSTCLASS_H
#include "iostream"
using namespace std;
class FirstClass {
private:
    string productName;
    unsigned int price = 0;
    unsigned int weight = 0;
    unsigned int amount = 0;

    void showDetails();

public:
    FirstClass(string productName, unsigned int price, unsigned int weight, unsigned int amount);
    void showBasicData();

    void showAllData();

    void setPrice(unsigned int price);

    unsigned int getPrice();

}



#endif //JIPP2_FIRSTCLASS_H
