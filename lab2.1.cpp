#include <iostream>

using namespace std;

/* Завдання 1 (Варіант 7):
   Дано три дійсних числа: a, b, c.
   Знайти min(a, b) + (min(b, c))^2. */

int main() {
    // Встановлення української мови
    system("chcp 65001 > nul");

    double a, b, c;

    cout << "Введіть три числа (a, b, c): ";
    cin >> a >> b >> c;

    double min_ab;
    if (a < b) {
        min_ab = a;
    } else {
        min_ab = b;
    }

    double min_bc;
    if (b < c) {
        min_bc = b;
    } else {
        min_bc = c;
    }

    double squared = min_bc * min_bc;

    double result = min_ab + squared;

    cout << "Результат виразу: " << result << endl;

    return 0;
}