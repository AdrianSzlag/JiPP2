#include "lab8ListNote.h"
#include <iostream>
using namespace std;

int main(){
    ListNote a;
    a.SetContent("asd1 asd2 \n asd3\nasd4 asd5");
    cout << a.GetContent() ;
    return 0;
}