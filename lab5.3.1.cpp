/* Завдання (Варіант 7):
   Дано дійсні числа x, a (x, a належать R) та натуральне число n (n належить N).
   Знайти значення виразу:
   ((...(((x + a)^2 + a)^2 + ... + a)^2 + a)^2 + a
   де операція піднесення до квадрата повторюється n разів. */
#include <iostream>
using namespace std;

int main() {
    system("chcp 65001 > nul");

    double* x = new double;
    double* a = new double;
    int* n = new int;

    cout << "Введіть дійсне число x: ";
    cin >> *x;

    cout << "Введіть дійсне число a: ";
    cin >> *a;

    cout << "Введіть натуральне число n (кількість кроків): ";
    cin >> *n;

    double* result = new double((*x) + (*a));

    int* i = new int;

    // У циклі виконуємо піднесення до квадрата n разів,
    // і щоразу після квадрата додаємо 'a'
    for (*i = 1; *i <= *n; (*i)++) {
        *result = (*result) * (*result) + (*a);
    }

    cout << "Результат виразу: " << *result << endl;

    delete x;
    delete a;
    delete n;
    delete result;
    delete i;

    return 0;
}