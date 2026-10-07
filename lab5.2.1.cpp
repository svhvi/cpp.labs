#include <iostream>
using namespace std;

/* Завдання 1 (Варіант 7):
   Дано три дійсних числа: a, b, c.
   Знайти min(a, b) + (min(b, c))^2. */

int main() {
    system("chcp 65001 > nul");

    double* a = new double;
    double* b = new double;
    double* c = new double;

    cout << "Введіть три числа (a, b, c): ";
    cin >> *a >> *b >> *c;

    double* min_ab = new double;
    if (*a < *b) {
        *min_ab = *a;
    } else {
        *min_ab = *b;
    }

    double* min_bc = new double;
    if (*b < *c) {
        *min_bc = *b;
    } else {
        *min_bc = *c;
    }

    double* squared = new double((*min_bc) * (*min_bc));

    double* result = new double((*min_ab) + (*squared));

    cout << "Результат виразу: " << *result << endl;

    delete a;
    delete b;
    delete c;
    delete min_ab;
    delete min_bc;
    delete squared;
    delete result;

    return 0;
}