//
// Created by ADR on 08.11.2021.
//

#include "class.h"
#include "iostream"
#include "../../lab7/include/class.h"


using namespace std;

Pojazd::Pojazd(char *numerRejestracyjny, char *nazwa, char *marka, char *typ, char **nazwaUzytkownika, int iloscMiejsc)
        : numerRejestracyjny(numerRejestracyjny),
          nazwa(nazwa),
          marka(marka),
          typ(typ),
          nazwaUzytkownika(nazwaUzytkownika),
          iloscMiejsc(iloscMiejsc) {};

void Pojazd::wypisz() {
    cout << numerRejestracyjny << endl;
    cout << nazwa<< endl;
    cout << marka << endl;
    cout << typ << endl;
    for (int i = 0; i < iloscMiejsc; ++i) {
        cout << "Miejsce: " << i << " : " << nazwaUzytkownika[i] << endl;
    }
    cout << iloscMiejsc << endl;
}

void Pojazd::zmien(int numerMiejsca, char *nazwa) {
    nazwaUzytkownika[numerMiejsca] = nazwa;
}

Pojazd::Pojazd(Pojazd &pojazd) {
    numerRejestracyjny = pojazd.numerRejestracyjny;
    nazwa = pojazd.nazwa;
    marka = pojazd.marka;
    typ = pojazd.typ;
    nazwaUzytkownika = pojazd.nazwaUzytkownika;
    iloscMiejsc = pojazd.iloscMiejsc;
}

char *Pojazd::GetNumerRejestracyjny() {
    return numerRejestracyjny;
}

char *Pojazd::GetMarka() {
    return marka;
}

char *Pojazd::GetTyp() {
    return typ;
}

char *Pojazd::GetNazwa() {
    return nazwa;
}

void Pojazd::SetNumerRejestracyjny(char *numerRejestracyjny) {
    Pojazd::numerRejestracyjny = numerRejestracyjny;
}void Pojazd::SetNazwa(char *nazwa) {
    Pojazd::nazwa = nazwa;
}

