#include <iostream>
#include <algorithm> // для функції max
#include <cmath>     // для pow або квадратних обчислень

using namespace std;

// допоміжна функція для знаходження максимуму (або можна користуватися стандартною max)
double maxVal(double a, double b) {
    return (a > b) ? a : b;
}

int main() {
    system("chcp 65001 > nul");
    double x, y, z;
    cout << "Введіть x, y, z: ";
    cin >> x >> y >> z;

    double m1 = maxVal(x, z);
    double m2 = maxVal(x + y, x * y);

    // Перевірка на ділення на нуль (знаменник max^2)
    if (m2 == 0) {
        cout << "Помилка: знаменник дорівнює нулю!" << endl;
        return 1;
    }

    double u = (m1 + m2) / (m2 * m2);

    cout << "Результат u = " << u << endl;

    return 0;
}