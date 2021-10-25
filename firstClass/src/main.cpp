

#include "iostream"
#include "FirstClass.h"
using namespace std;

int main(){
    FirstClass product("asd", 12, 1000, 5);
    product.showAllData();

    product.setPrice(2000000000);

    product.showAllData();

    cout << product.getPrice() << endl;
    return 0;
}