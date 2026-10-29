#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 65001 > nul");
    int n;
    cout << "Введіть розмірність матриці n (2 <= n <= 15): ";
    cin >> n;

    if (n < 2 || n > 15) {
        cout << "Помилка, некоректне значення n!" << endl;
        return 1;
    }

    // Створення двовимірного вектора розміром n x n
    vector<vector<int>> a(n, vector<int>(n));

    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << "a[" << i << "][" << j << "] = ";
            cin >> a[i][j];
        }
    }

    // Пошук початкового елемента під головною діагоналлю для ініціалізації maxBelow
    // Беремо перший елемент під діагоналлю, наприклад a[1][0]
    int maxBelow = a[1][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j && a[i][j] > maxBelow) {
                maxBelow = a[i][j];
            }
        }
    }

    // Обчислення суми елементів вище головної діагоналі, які більші за maxBelow
    int sum = 0;
    bool found = false;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j && a[i][j] > maxBelow) {
                sum += a[i][j];
                found = true;
            }
        }
    }

    if (found) {
        cout << "Сума = " << sum << endl;
    } else {
        cout << "Таких елементів немає." << endl;
    }

    return 0;
}