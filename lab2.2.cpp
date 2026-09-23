#include <iostream>

using namespace std;

/* Завдання 2 (Варіант 7):
   Обчислити значення функції y:
       y = 1, якщо 2*x^2 - x - 3 = 0
       y = 2, якщо 2*x^2 - x - 3 > 0
       y = 0, якщо 2*x^2 - x - 3 < 0 */

int main() {
    system("chcp 65001 > nul");

    double x;
    cout << "Введіть число x: ";
    cin >> x;

    // Значення виразу: 2 * x * x - x - 3
    double expr = 2 * x * x - x - 3;
    int y;

    if (expr == 0) {
        y = 1;
    } else if (expr > 0) {
        y = 2;
    } else {
        y = 0;
    }

    cout << "Значення виразу 2*x^2 - x - 3 = " << expr << endl;
    cout << "Значення y = " << y << endl;

    return 0;
}