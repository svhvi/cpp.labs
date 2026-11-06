#include <iostream>
#include <vector>

using namespace std;

// обчислення n-го члена рекурентної послідовності
long long calculateX(int n) {
    if (n == 0) return 0;
    if (n == 1 || n == 2) return 9;

    vector<long long> x(n + 1);
    x[0] = 0;
    x[1] = 9;
    x[2] = 9;

    for (int i = 3; i <= n; i++) {
        x[i] = x[i - 1] + x[i - 2] + x[i - 3];
    }

    return x[n];
}

int main() {
    system("chcp 65001 > nul");
    int n;
    cout << "Введіть індекс n (n >= 0): ";
    cin >> n;

    if (n < 0) {
        cout << "Помилка, n має бути невід'ємним!" << endl;
        return 1;
    }

    cout << "x_" << n << " = " << calculateX(n) << endl;

    return 0;
}