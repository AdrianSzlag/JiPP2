//
// Created by A on 27.10.2021.
//

#ifndef PROJEKT_LIB_H
#define PROJEKT_LIB_H

/**
 * Dodawanie macierzy (**int)
 * @param a macierz a
 * @param b macierz b
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (**int)
 */
int **addMatrix(int **a, int **b, int r, int c);
/**
 * Dodawanie macierzy (**double)
 * @param a macierz a
 * @param b macierz b
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (**double)
 */
double **addMatrix(double **a, double **b, int r, int c);

/**
 * Odejmowanie macierzy (**int)
 * @param a macierz a
 * @param b macierz b
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (**int)
 */
int **subtractMatrix(int **a, int **b, int r, int c);
/**
 * Odejmowanie macierzy (**double)
 * @param a macierz a
 * @param b macierz b
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (**double)
 */
double **subtractMatrix(double **a, double **b, int r, int c);

/**
 * Mnozenie dwoch macierzy (**int)
 * @param a macierz a
 * @param b macierz b
 * @param r liczba wierszy macierzy a
 * @param c1 liczba kolumn macierzy a, ktora jest takze liczba wieszy macierzy b
 * @param c2 liczba kolumn macierzy b
 * @return macierz wynikowa (**int)
 */
int **multiplyMatrix(int **a, int **b, int r, int c1, int c2);
/**
 * Mnozenie dwoch macierzy (**double)
 * @param a macierz a
 * @param b macierz b
 * @param r liczba wierszy macierzy a
 * @param c1 liczba kolumn macierzy a, ktora jest takze liczba wieszy macierzy b
 * @param c2 liczba kolumn macierzy b
 * @return macierz wynikowa (**double)
 */
double **multiplyMatrix(double **a, double **b, int r, int c1, int c2);

/**
 * Mnozenie macierzy przez skalar
 * @param a macierz (**int)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @param skalar skalar (int)
 * @return macierz wynikowa (**int)
 */
int **multiplyByScalar(int **a, int r, int c, int skalar);
/**
 * Mnozenie macierzy przez skalar
 * @param a macierz (**double)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @param skalar skalar (double)
 * @return macierz wynikowa (**double)
 */
double **multiplyByScalar(double **a, int r, int c, double skalar);

/**
 * Transponowanie macierzy
 * @param a macierz (**int)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (**int)
 */
int **transpozeMatrix(int **a, int r, int c);
/**
 * Transponowanie macierzy
 * @param a macierz (**double)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (**double)
 */
double **transpozeMatrix(double **a, int r, int c);

/**
 * Potęgowanie macierzy
 * @param a macierz (**int)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @param n stopien potęgi
 * @return macierz wynikowa (**int)
 */
int **powerMatrix(int **a, int r, int c, unsigned int n);
/**
 * Potęgowanie macierzy
 * @param a macierz (**double)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @param n stopien potęgi
 * @return macierz wynikowa (**double)
 */
double **powerMatrix(double **a, int r, int c, unsigned int n);

/**
 * Wyznacznik macierzy
 * @param a macierz (**int)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return wyznacznik (int)
 */
int determinantMatrix(int **a, int r, int c);
/**
 * Wyznacznik macierzy
 * @param a macierz (**double)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return wyznacznik (double)
 */
double determinantMatrix(double **a, int r, int c);

/**
 * Sprawdzanie, czy macierz jest diagonalna
 * @param a macierz (**int)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return zwraca true lub false
 */
bool matrixIsDiagonal(int **a, int r, int c);
/**
 * Sprawdzanie, czy macierz jest diagonalna
 * @param a macierz (**double)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return zwraca true lub false
 */
bool matrixIsDiagonal(double **a, int r, int c);

/**
 * Zamiana dwoch wartosci miejscami
 * @param a wartosc a (int)
 * @param b wartosc b (int)
 */
void swap(int &a, int &b);
/**
 * Zamiana dwoch wartosci miejscami
 * @param a wartosc a (double)
 * @param b wartosc b (double)
 */
void swap(double &a, double &b);

/**
 * Sortowanie tablicy za pomocą sortowania bombelkowego
 * @param a tablica
 * @param r liczba elementow tablicy
 * @return tablica wynikowa (int)
 */
int *sortRow(int *a, int r);
/**
 * Sortowanie tablicy za pomocą sortowania bombelkowego
 * @param a tablica
 * @param r liczba elementow tablicy
 * @return tablica wynikowa (double)
 */
double *sortRow(double *a, int r);

/**
 * Sortowanie wszystkich wierszy w macierzy
 * @param a macierz
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (int)
 */
int **sortRowsInMatrix(int **a, int r, int c);
/**
 * Sortowanie wszystkich wierszy w macierzy
 * @param a macierz
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz wynikowa (double)
 */
double **sortRowsInMatrix(double **a, int r, int c);

#endif //PROJEKT_LIB_H
