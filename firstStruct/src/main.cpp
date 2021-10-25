#include "iostream"
#include "string.h"
using namespace std;
struct samochod{
    char marka[20];
    char model[20];
    int rokProdukcji;
    char kolor[20];
    char stan[20];
};
int licz(char* marka, samochod* tablica, int n){
    int w = 0;
    for (int i = 0; i < n; i++) {
        if(strcmp(marka, tablica[i].marka)==0) w++;
    }
    return w;
}
int min( samochod* tablica, int n){
    int min = 0;
    for (int i = 0; i < n; i++) {
        if(tablica[min].rokProdukcji > tablica[i].rokProdukcji) min = i;
    }
    return min;
}
int main(){
    samochod samochody[] = {{"bmw","x6",2020,"czarny"},
                            {"bmw","320",2020,"czarny"},
                            {"audi","a5",2019,"niebieski"},
                            {"bmw","x6",2020,"bialy"}};
    for (int i = 0; i < 4; i++)
    {
        cout << samochody[i].marka << "\t" << samochody[i].model << "\t" << samochody[i].rokProdukcji << "\t" << samochody[i].kolor << endl;
    }
    cout<<"zad 3: "<<licz("bmw", samochody, 4) << endl;
    cout<<"zad 4: "<<min( samochody, 4) <<endl;
    return 0;
}