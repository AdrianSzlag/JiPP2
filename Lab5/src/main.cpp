#include "class.h"

int main(){
    char **a = new char*[2];
    a[0] = "adrian";
    a[1] = "inny";
    Pojazd pojazd("KNS", "Tesla", "Wv", "SUV", a, 2);
    pojazd.wypisz();
    Pojazd pojazd1(pojazd);
    pojazd1.SetNazwa("Model X");
    pojazd1.wypisz();
}