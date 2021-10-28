#include "lib.h"


int **addMatrix(int **a, int **b, int r, int c) {
    int **result = new int *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c];

        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}
double **addMatrix(double **a, double **b, int r, int c) {
    double **result = new double *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new double[c];

        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }
    return result;
}


int **subtractMatrix(int **a, int **b, int r, int c) {
    int **result = new int *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}
double **subtractMatrix(double **a, double **b, int r, int c) {
    double **result = new double *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new double[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] - b[i][j];
        }
    }
    return result;
}


int **multiplyMatrix(int **a, int **b, int r, int c1, int c2) {
    int **result = new int *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c2];
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}
double **multiplyMatrix(double **a, double **b, int r, int c1, int c2) {
    double **result = new double *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new double[c2];
        for (int j = 0; j < c2; j++) {
            result[i][j] = 0;
            for (int k = 0; k < c1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    return result;
}


int **multiplyByScalar(int **a, int r, int c, int skalar) {
    int **result = new int *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] * skalar;
        }
    }
    return result;
}
double **multiplyByScalar(double **a, int r, int c, double skalar) {
    double **result = new double *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new double[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j] * skalar;
        }
    }
    return result;
}


int **transpozeMatrix(int **a, int r, int c) {
    int **result = new int *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[j][i];
        }
    }
    return result;
}
double **transpozeMatrix(double **a, int r, int c) {
    double **result = new double *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new double[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[j][i];
        }
    }
    return result;
}


int **powerMatrix(int **a, int r, int c, unsigned int n) {
    if (n == 0) {
        int **result = new int *[r];
        for (int i = 0; i < r; i++) {
            result[i] = new int[c];
            for (int j = 0; j < c; j++) {
                if (i == j)result[i][j] = 1;
                else result[i][j] = 0;
            }
        }
        return result;
    }
    int **result = new int *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new int[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j];
        }
    }
    for (int i = 1; i < n; i++) {
        int **result2 = multiplyMatrix(result, a, r, c, c);
        for (int j = 0; j < r; ++j) {
            delete[] result[j];
        }
        delete[] result;
        result = result2;
    }
    return result;
}
double **powerMatrix(double **a, int r, int c, unsigned int n) {
    if (n == 0) {
        double **result = new double *[r];
        for (int i = 0; i < r; i++) {
            result[i] = new double[c];
            for (int j = 0; j < c; j++) {
                if (i == j)result[i][j] = 1;
                else result[i][j] = 0;
            }
        }
        return result;
    }
    double **result = new double *[r];
    for (int i = 0; i < r; i++) {
        result[i] = new double[c];
        for (int j = 0; j < c; j++) {
            result[i][j] = a[i][j];
        }
    }
    for (int i = 1; i < n; i++) {
        double **result2 = multiplyMatrix(result, a, r, c, c);
        for (int j = 0; j < r; ++j) {
            delete[] result[j];
        }
        delete[] result;
        result = result2;
    }
    return result;
}


void getCofactor(int **mat, int **temp, int p, int q, int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}
void getCofactor(double **mat, double **temp, int p, int q, int n)
{
    int i = 0, j = 0;
    for (int row = 0; row < n; row++)
    {
        for (int col = 0; col < n; col++)
        {
            if (row != p && col != q)
            {
                temp[i][j++] = mat[row][col];
                if (j == n - 1)
                {
                    j = 0;
                    i++;
                }
            }
        }
    }
}


int determinantMatrix(int **mat, int r, int c)
{
    int D = 0;
    if (r == 1) return mat[0][0];
    int **temp = new int*[r];
    for (int i = 0; i < r; i++) {
        temp[i] = new int[r];
    }
    int sign = 1;
    for (int f = 0; f < r; f++)
    {
        getCofactor(mat, temp, 0, f, r);
        D += sign * mat[0][f] * determinantMatrix(temp, r - 1, c);
        sign = -sign;
    }
    return D;
}
double determinantMatrix(double **mat, int r, int c)
{
    double D = 0.;
    if (r == 1) return mat[0][0];
    double **temp = new double*[r];
    for (int i = 0; i < r; i++) {
        temp[i] = new double[r];
    }
    int sign = 1;
    for (int f = 0; f < r; f++)
    {
        getCofactor(mat, temp, 0, f, r);
        D += (double)sign * mat[0][f] * determinantMatrix(temp, r - 1, c);
        sign = -sign;
    }
    return D;
}


bool matrixIsDiagonal(int **a, int r, int c) {
    if (r != c)return false;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j != i && a[i][j] != 0) return false;
        }
    }
    return true;
}
bool matrixIsDiagonal(double **a, int r, int c) {
    if (r != c)return false;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            if (j != i && a[i][j] != 0) return false;
        }
    }
    return true;
}


void swap(int &a, int &b) {
    int buff = a;
    a = b;
    b = buff;
}
void swap(double &a, double &b) {
    double buff = a;
    a = b;
    b = buff;
}


int *sortRow(int *a, int c) {
    int *result = new int[c];
    for (int i = 0; i < c; i++) {
        result[i] = a[i];
    }
    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (result[i] > result[j]) swap(result[i], result[j]);
        }
    }
    return result;
}
double *sortRow(double *a, int c) {
    double *result = new double[c];
    for (int i = 0; i < c; i++) {
        result[i] = a[i];
    }
    for (int i = 0; i < c; i++) {
        for (int j = i + 1; j < c; j++) {
            if (result[i] > result[j]) swap(result[i], result[j]);
        }
    }
    return result;
}


int **sortRowsInMatrix(int **a, int r, int c) {
    int **result = new int *[r];
    for (int i = 0; i < r; i++) {
        result[i] = sortRow(a[i], c);
    }
    return result;
}
double **sortRowsInMatrix(double **a, int r, int c) {
    double **result = new double *[r];
    for (int i = 0; i < r; i++) {
        result[i] = sortRow(a[i], c);
    }
    return result;
}