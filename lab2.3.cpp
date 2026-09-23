#include <iostream>
#include <cmath>

using namespace std;

/* Завдання 3 (Варіант 7):
   Трикутник задається координатами своїх вершин на площині:
   A(x1, y1), B(x2, y2), C(x3, y3).
   Знайти периметр трикутника. */

int main() {
    system("chcp 65001 > nul");

    // Оголошуємо координати вершин
    double x1, y1;
    double x2, y2;
    double x3, y3;

    cout << "Введіть координати вершини A (x1 та y1): ";
    cin >> x1 >> y1;

    cout << "Введіть координати вершини B (x2 та y2): ";
    cin >> x2 >> y2;

    cout << "Введіть координати вершини C (x3 та y3): ";
    cin >> x3 >> y3;

    // Формула відстані між двома точками: корінь з ((x2 - x1)^2 + (y2 - y1)^2)

    // Сторона AB
    double dx_ab = x2 - x1;
    double dy_ab = y2 - y1;
    double ab = sqrt(dx_ab * dx_ab + dy_ab * dy_ab);

    // Сторона BC
    double dx_bc = x3 - x2;
    double dy_bc = y3 - y2;
    double bc = sqrt(dx_bc * dx_bc + dy_bc * dy_bc);

    // Сторона CA
    double dx_ca = x1 - x3;
    double dy_ca = y1 - y3;
    double ca = sqrt(dx_ca * dx_ca + dy_ca * dy_ca);

    // Периметр
    double perimeter = ab + bc + ca;

    cout << "Довжина сторони AB: " << ab << endl;
    cout << "Довжина сторони BC: " << bc << endl;
    cout << "Довжина сторони CA: " << ca << endl;
    cout << "Периметр трикутника: " << perimeter << endl;

    return 0;
}