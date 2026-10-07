/*
    Завдання 2 (Варіант 7):
    arcctg(x) = pi/2 + sum_{n=0..inf} ((-1)^(n+1) * x^(2n+1)) / (2n + 1)
              = pi/2 - x + (x^3)/3 - (x^5)/5 + ...
    Область збіжності: |x| <= 1 (тобто -1 <= x <= 1)
*/

#include <iostream>
#include <cmath>

int main() {
    system("chcp 65001 > nul");

    double* x = new double;
    double* epsilon = new double;

    std::cout << "Введіть x (|x| <= 1): ";
    std::cin >> *x;
    std::cout << "Введіть epsilon: ";
    std::cin >> *epsilon;

    if (*x < -1 || *x > 1) {
        std::cout << "x повинен бути в діапазоні [-1, 1]" << std::endl;
        delete x;
        delete epsilon;
        return 0;
    }

    double* sum = new double(M_PI / 2.0); // початкова константа pi / 2
    double* a = new double(-(*x));        // перший член ряду
    int* n = new int(0);

    while (*a > *epsilon || *a < -(*epsilon)) {
        *sum += *a;
        *a *= -(*x) * (*x) * (2 * (*n) + 1.0) / (2 * (*n) + 3.0); // рекурентне оновлення
        (*n)++;
    }

    double* real_arcctg = new double((M_PI / 2.0) - std::atan(*x));

    std::cout << "Наближене значення arcctg(" << *x << ") = " << *sum << std::endl;
    std::cout << "Точне значення arcctg(" << *x << ") = " << *real_arcctg << std::endl;
    std::cout << "Кількість ітерацій: " << *n << std::endl;

    delete x;
    delete epsilon;
    delete sum;
    delete a;
    delete n;
    delete real_arcctg;

    return 0;
}