/* Завдання 1 (Варіант 7):
   Дано довжини трьох сторін трикутника. Визначити, якого типу є трикутник 
   (прямокутний, гострокутний, рівностронній, рівнобедрений) */

#include <iostream>
using namespace std;

int main() {
    // Встановлення української мови
    system("chcp 65001 > nul");

    double a, b, c;

    cout << "Введіть три числа (a, b, c): ";
    cin >> a >> b >> c;

    if (a > c) swap(a, c);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    if (a + b <= c) {
        cout << "Не трикутник\n";
        return 0;
    }

    if (a == b && b == c) cout << "Рівносторонній\n";
    else if (a == b || b == c) cout << "Рівнобедрений\n";

    if (a*a + b*b == c*c) cout << "Прямокутний\n";
    else if (a*a + b*b > c*c) cout << "Гострокутний\n";
    else cout << "Тупокутний";
    return 0;
}