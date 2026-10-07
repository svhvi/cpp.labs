#include <iostream>
using namespace std;

/* Завдання 2 (Варіант 7):
   Обчислити значення функції y:
       y = 1, якщо 2*x^2 - x - 3 = 0
       y = 2, якщо 2*x^2 - x - 3 > 0
       y = 0, якщо 2*x^2 - x - 3 < 0 */

int main() {
    system("chcp 65001 > nul");

    double* x = new double;
    cout << "Введіть число x: ";
    cin >> *x;

    double* expr = new double(2 * (*x) * (*x) - (*x) - 3);
    int* y = new int;

    if (*expr == 0) {
        *y = 1;
    } else if (*expr > 0) {
        *y = 2;
    } else {
        *y = 0;
    }

    cout << "Значення виразу 2*x^2 - x - 3 = " << *expr << endl;
    cout << "Значення y = " << *y << endl;

    delete x;
    delete expr;
    delete y;

    return 0;
}