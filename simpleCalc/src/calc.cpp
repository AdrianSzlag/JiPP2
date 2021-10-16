#include <iostream>
#include "../include/calc.h"
using namespace std;

void addHelp(){
    cout << "add [a] [b]\n  Dodawanie dwoch liczb ([a] i [b]) calkowitych." << endl;
}
void subtractHelp(){
    cout << "subtract [a] [b]\n  Odejmowanie liczby [b] od liczby [a] (liczby calkowite)." << endl;
}
void volumeHelp(){
    cout << "volume [a] [b] [h] [c]\n  Obliczanie objetosci graniastoslupa prostego o podstawie trapezu\n  [a] i [b] wymiary podstaw trapezu\n  [h] wysokosc trapezu\n  [c]wysokosc graniastoslupa" << endl;
}
void help(){
    cout << "Simple calculator\nsimpleCalc [nazwa dzialania]\n\nDzialania:" << endl;
    addHelp();
    subtractHelp();
    volumeHelp();
}
void err(){
    cout << "Blad! Zla ilosc argumentow!" << endl;
}
int add(int a, int b){
    return a+b;
}
int subtract(int a, int b){
    return a-b;
}
double volume(double a, double b, double h, double c){
    return (((a+b)*h)/2.)*c;
}