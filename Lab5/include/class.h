//
// Created by ADR on 08.11.2021.
//

#ifndef JIPP2_LAB5_CLASS_H
#define JIPP2_LAB5_CLASS_H

class Pojazd {
    char *numerRejestracyjny;
    char *nazwa;
    char *marka;
    char *typ;
    char **nazwaUzytkownika;
    int iloscMiejsc;
public:
    Pojazd(char *numerRejestracyjny,
           char *nazwa,
           char *marka,
           char *typ,
           char **nazwaUzytkownika,
           int iloscMiejsc);

    Pojazd(Pojazd &pojazd);

    void wypisz();

    void zmien(int numerMiejsca, char *nazwa);

    char *GetNumerRejestracyjny();

    char *GetMarka();

    char *GetTyp();

    char *GetNazwa();

    void SetNumerRejestracyjny(char *numerRejestracyjny);

    void SetNazwa(char *nazwa);
};

#endif //JIPP2_LAB5_CLASS_H
