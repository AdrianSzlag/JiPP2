#include "iostream"
#include "iomanip"
#include "string.h"
#include "lib.h"

using namespace std;


/**
 * Wypisz macierz na ekran
 * @param a macierz (**int)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 */
void PrintMatrix(int **a, int r, int c) {
    for (int j = 0; j < r; j++) {
        cout << "| ";
        for (int k = 0; k < c; ++k) {
            cout << setw(5) << a[j][k] << " ";
        }
        cout << "| " << endl;
    }
}
/**
 * Wypisz macierz na ekran
 * @param a macierz (**double)
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 */
void PrintMatrix(double **a, int r, int c) {
    for (int j = 0; j < r; j++) {
        cout << "| ";
        for (int k = 0; k < c; ++k) {
            cout << setw(5) << a[j][k] << " ";
        }
        cout << "| " << endl;
    }
}

/**
 * Wypisz na ekran pusta macierz
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 */
void PrintEmptyMatrix(int r, int c) {
    for (int j = 0; j < r; j++) {
        cout << "| ";
        for (int k = 0; k < c; ++k) {
            cout << "_____ ";
        }
        cout << "| " << endl;
    }
}

/**
 * Funkcja zmuszajaca urzytkownika do wpisania wartosci liczbowej
 * @return wartosc liczbowa
 */
double GetNumber() {
    char inp[40];

    while (true) {
        int i = 0;
        bool ok = false;

        cin >> inp;

        while (inp[i] != '\0') {
            if (inp[i] >= '0' && inp[i] <= '9') {
                ok = true;
                break;
            }
            i++;
        }

        while (inp[i] != '\0') {
            if ((inp[i] >= '0' && inp[i] <= '9') || (inp[i] == '.' || inp[i] == ',')) {
                if (inp[i] == ',') inp[i] = '.';
                i++;
            } else {
                ok = false;
                break;
            }
        }

        if (ok) return stod(inp);
        cout << "Podaj wartosc liczbowa" << endl;
    }
}

/**
 * Funkcja ulatwiajaca wprowadzenie macierzy
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz (**int)
 */
int **GetIntMatrix(int r, int c) {
    int **a = new int *[r];
    for (int i = 0; i < r; i++) {
        a[i] = new int[c];
        for (int j = 0; j < c; j++) {
            PrintMatrix(a, i, c);
            cout << "| ";
            for (int k = 0; k < j; ++k) {
                cout << setw(5) << a[i][k] << " ";
            }
            cout << "????? ";
            for (int k = j + 1; k < c; ++k) {
                cout << "_____ ";
            }
            cout << "| " << endl;
            PrintEmptyMatrix(r - i - 1, c);
            cout << "Podaj wartosc: ";
            a[i][j] = (int) GetNumber();
        }
    }
    PrintMatrix(a, r, c);
    return a;
}
/**
 * Funkcja ulatwiajaca wprowadzenie macierzy
 * @param r liczba wierszy macierzy
 * @param c liczba kolumn macierzy
 * @return macierz (**double)
 */
double **GetDoubleMatrix(int r, int c) {
    double **a = new double *[r];
    for (int i = 0; i < r; i++) {
        a[i] = new double[c];
        for (int j = 0; j < c; j++) {
            PrintMatrix(a, i, c);
            cout << "| ";
            for (int k = 0; k < j; ++k) {
                cout << setw(5) << a[i][k] << " ";
            }
            cout << "????? ";
            for (int k = j + 1; k < c; ++k) {
                cout << "_____ ";
            }
            cout << "| " << endl;
            PrintEmptyMatrix(r - i - 1, c);
            cout << "Podaj wartosc: ";
            a[i][j] = GetNumber();
        }
    }
    PrintMatrix(a, r, c);
    return a;
}

/**
 * Funkcja prosi urzytkownika o wybranie trybu pracy
 * @return Zwraca 1 - urzytkokwnik wybral zmienne typu double, 2 - int
 */
int SelectMode() {
    char a[40];
    while (true) {
        cout << "Wybierz tryb pracy wpisujac nazwe zmiennej:\ndouble\nint" << endl;
        cin >> a;
        if (strcmp(a, "int") == 0) return 0;
        if (strcmp(a, "double") == 0) return 1;
    }
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        cout << "Uruchom:\nmatrixApp help\naby uzyskac pomoc." << endl;
        return 1;
    }

    if (strcmp(argv[1], "addMatrix") == 0) {
        int r, c;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy a:" << endl;
            int **a = GetIntMatrix(r, c);
            cout << "Podaj wartosci macierzy b:" << endl;
            int **b = GetIntMatrix(r, c);
            int **result = addMatrix(a, b, r, c);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy a:" << endl;
            double **a = GetDoubleMatrix(r, c);
            cout << "Podaj wartosci macierzy b:" << endl;
            double **b = GetDoubleMatrix(r, c);
            double **result = addMatrix(a, b, r, c);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        }
    }

    if (strcmp(argv[1], "subtractMatrix") == 0) {
        int r, c;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy a:" << endl;
            int **a = GetIntMatrix(r, c);
            cout << "Podaj wartosci macierzy b:" << endl;
            int **b = GetIntMatrix(r, c);
            int **result = subtractMatrix(a, b, r, c);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy a:" << endl;
            double **a = GetDoubleMatrix(r, c);
            cout << "Podaj wartosci macierzy b:" << endl;
            double **b = GetDoubleMatrix(r, c);
            double **result = subtractMatrix(a, b, r, c);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        }
    }

    if (strcmp(argv[1], "multiplyMatrix") == 0) {
        int r, c1, c2;
        cout << "Podaj wysokosc macierzy a:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy a, ktora jest takze wysokoscia macierzy b:" << endl;
        c1 = (int) GetNumber();
        cout << "Podaj szerokosc macierzy b" << endl;
        c2 = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy a:" << endl;
            int **a = GetIntMatrix(r, c1);
            cout << "Podaj wartosci macierzy b:" << endl;
            int **b = GetIntMatrix(c1, c2);
            int **result = multiplyMatrix(a, b, r, c1, c2);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c2);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy a:" << endl;
            double **a = GetDoubleMatrix(r, c1);
            cout << "Podaj wartosci macierzy b:" << endl;
            double **b = GetDoubleMatrix(c1, c2);
            double **result = multiplyMatrix(a, b, r, c1, c2);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c2);
            return 0;
        }
    }

    if (strcmp(argv[1], "multiplyByScalar") == 0) {
        int r, c;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy:" << endl;
            int **a = GetIntMatrix(r, c);
            cout << "Podaj wartosc skalar:" << endl;
            int
            skalar = (int) GetNumber();
            int **result = multiplyByScalar(a, r, c, skalar);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy:" << endl;
            double **a = GetDoubleMatrix(r, c);
            cout << "Podaj wartosc skalar:" << endl;
            double skalar = GetNumber();
            double **result = multiplyByScalar(a, r, c, skalar);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        }

    }

    if (strcmp(argv[1], "transpozeMatrix") == 0) {
        int r, c;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy:" << endl;
            int **a = GetIntMatrix(r, c);
            int **result = transpozeMatrix(a, r, c);
            cout << "Wynik:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy:" << endl;
            double **a = GetDoubleMatrix(r, c);
            double **result = transpozeMatrix(a, r, c);
            cout << "Wynik:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        }
    }

    if (strcmp(argv[1], "powerMatrix") == 0 && argc == 3) {
        int r, c, n;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy:" << endl;
            int **a = GetIntMatrix(r, c);
            n = stoi(argv[2]);
            int **result = powerMatrix(a, r, c, n);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy:" << endl;
            double **a = GetDoubleMatrix(r, c);
            n = stoi(argv[2]);
            double **result = powerMatrix(a, r, c, n);
            cout << "Wynik to:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        }
    }

    if (strcmp(argv[1], "determinantMatrix") == 0) {
        int r, c;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy:" << endl;
            int **a = GetIntMatrix(r, c);
            int result = determinantMatrix(a, r, c);
            cout << "Wynik to: " << result << endl;
            PrintMatrix(a, r, c);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy:" << endl;
            double **a = GetDoubleMatrix(r, c);
            double result = determinantMatrix(a, r, c);
            cout << "Wynik to: " << result << endl;
            PrintMatrix(a, r, c);
            return 0;
        }
    }

    if (strcmp(argv[1], "matrixIsDiagonal") == 0) {
        int r, c;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy:" << endl;
            int **a = GetIntMatrix(r, c);
            bool result = matrixIsDiagonal(a, r, c);
            if (result) {
                cout << "Jest diagonalna" << endl;
            } else {
                cout << "Nie jest diagonalna" << endl;
            }
            return 0;
        } else {
            cout << "Podaj wartosci macierzy:" << endl;
            double **a = GetDoubleMatrix(r, c);
            bool result = matrixIsDiagonal(a, r, c);
            if (result) {
                cout << "Jest diagonalna" << endl;
            } else {
                cout << "Nie jest diagonalna" << endl;
            }
            return 0;
        }
    }

    if (strcmp(argv[1], "swap") == 0) {
        if (SelectMode() == 0) {
            int a, b;
            cout << "Podaj wartosc a:" << endl;
            a = (int) GetNumber();
            cout << "Podaj wartosc b:" << endl;
            b = (int) GetNumber();
            cout << "Wartosc a: " << a << " wartosc b: " << b << endl;
            swap(a, b);
            cout << "Po operacji swap; wartosc a: " << a << " wartosc b: " << b << endl;
            return 0;
        } else {
            double a, b;
            cout << "Podaj wartosc a:" << endl;
            a = GetNumber();
            cout << "Podaj wartosc b:" << endl;
            b = GetNumber();
            cout << "Wartosc a: " << a << " wartosc b: " << b << endl;
            swap(a, b);
            cout << "Po operacji swap; wartosc a: " << a << " wartosc b: " << b << endl;
            return 0;
        }

    }

    if (strcmp(argv[1], "sortRow") == 0) {
        int w;
        cout << "Podaj szerokosc tablicy:" << endl;
        w = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci tablicy:" << endl;
            int **a = GetIntMatrix(1, w);
            int *result = sortRow(*a, w);
            cout << "Wynik: [ ";
            for (int i = 0; i < w; ++i) {
                cout << result[i];
                if (i != w - 1)cout << ", ";
            }
            cout << "]" << endl;
            return 0;
        } else {
            cout << "Podaj wartosci tablicy:" << endl;
            double **a = GetDoubleMatrix(1, w);
            double *result = sortRow(*a, w);
            cout << "Wynik: [ ";
            for (int i = 0; i < w; ++i) {
                cout << result[i];
                if (i != w - 1)cout << ", ";
            }
            cout << "]" << endl;
            return 0;
        }

    }

    if (strcmp(argv[1], "sortRowsInMatrix") == 0) {
        int r, c;
        cout << "Podaj wysokosc macierzy:" << endl;
        r = (int) GetNumber();
        cout << "Podaj szerokosc macierzy:" << endl;
        c = (int) GetNumber();
        if (SelectMode() == 0) {
            cout << "Podaj wartosci macierzy:" << endl;
            int **a = GetIntMatrix(r, c);
            int **result = sortRowsInMatrix(a, r, c);
            cout << "Wynik:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        } else {
            cout << "Podaj wartosci macierzy:" << endl;
            double **a = GetDoubleMatrix(r, c);
            double **result = sortRowsInMatrix(a, r, c);
            cout << "Wynik:" << endl;
            PrintMatrix(result, r, c);
            return 0;
        }
    }

    cout << "MatrixApp\nmatrixApp [nazwa dzialania] [dodatkowa opcja]\n\nDzialania:" << endl;
    cout << "addMatrix\n   dodawanie dwoch macierzy\n";
    cout << "subtractMatrix\n   odejmowanie dwoch macierzy\n";
    cout << "multiplyMatrix\n   mnozenie dwoch macierzy\n";
    cout << "multiplyByScalar\n   mnozenie macierzy przez skalar\n";
    cout << "transpozeMatrix\n   transponowanie macierzy\n";
    cout << "powerMatrix [potega]\n   potegowanie macierzy, program jako drugi parametr przyjmuje wartosc poteg\n";
    cout << "determinantMatrix\n   wyznacznik macierzy\n";
    cout << "matrixIsDiagonal\n   sprawdzanie, czy macierz jest diagonalna\n";
    cout << "swap\n   zamiana dwoch wartosci miejscami\n";
    cout << "sortRow\n   sortowanie tablicy za pomoca sortowania bombelkowego\n";
    cout << "sortRowsInMatrix\n   sortowanie wszystkich wierszy w macierzy\n";

    cout << "Program prosi o podanie rozmiarow macierzy/tablicy oraz ich wartosci pojedynczo podczas wykonywania\n";

    return 0;
}