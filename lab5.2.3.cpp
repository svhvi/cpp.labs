#include <iostream>
#include <cmath>
using namespace std;

/* Завдання 3 (Варіант 7):
   Трикутник задається координатами своїх вершин на площині:
   A(x1, y1), B(x2, y2), C(x3, y3).
   Знайти периметр трикутника. */

int main() {
    system("chcp 65001 > nul");

    double* x1 = new double;
    double* y1 = new double;
    double* x2 = new double;
    double* y2 = new double;
    double* x3 = new double;
    double* y3 = new double;

    cout << "Введіть координати вершини A (x1 та y1): ";
    cin >> *x1 >> *y1;

    cout << "Введіть координати вершини B (x2 та y2): ";
    cin >> *x2 >> *y2;

    cout << "Введіть координати вершини C (x3 та y3): ";
    cin >> *x3 >> *y3;

    // Формула відстані між двома точками: корінь з ((x2 - x1)^2 + (y2 - y1)^2)

    // Сторона AB
    double* dx_ab = new double((*x2) - (*x1));
    double* dy_ab = new double((*y2) - (*y1));
    double* ab = new double(sqrt((*dx_ab) * (*dx_ab) + (*dy_ab) * (*dy_ab)));

    // Сторона BC
    double* dx_bc = new double((*x3) - (*x2));
    double* dy_bc = new double((*y3) - (*y2));
    double* bc = new double(sqrt((*dx_bc) * (*dx_bc) + (*dy_bc) * (*dy_bc)));

    // Сторона CA
    double* dx_ca = new double((*x1) - (*x3));
    double* dy_ca = new double((*y1) - (*y3));
    double* ca = new double(sqrt((*dx_ca) * (*dx_ca) + (*dy_ca) * (*dy_ca)));

    double* perimeter = new double((*ab) + (*bc) + (*ca));

    cout << "Довжина сторони AB: " << *ab << endl;
    cout << "Довжина сторони BC: " << *bc << endl;
    cout << "Довжина сторони CA: " << *ca << endl;
    cout << "Периметр трикутника: " << *perimeter << endl;

    delete x1;
    delete y1;
    delete x2;
    delete y2;
    delete x3;
    delete y3;
    delete dx_ab;
    delete dy_ab;
    delete ab;
    delete dx_bc;
    delete dy_bc;
    delete bc;
    delete dx_ca;
    delete dy_ca;
    delete ca;
    delete perimeter;

    return 0;
}