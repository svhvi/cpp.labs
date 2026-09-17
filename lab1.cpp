#include <iostream>

using namespace std;

int main() {
    system("chcp 65001 > nul");
    double a, b;

    cout << "Введіть довжини двох сторін прямокутника: ";
    cin >> a >> b;

    double area = a * b;             // Площа: S = a * b
    double perimeter = 2 * (a + b);   // Периметр: P = 2 * (a + b)

    cout << "Площа: " << area << endl;
    cout << "Периметр: " << perimeter << endl;

    return 0;
}