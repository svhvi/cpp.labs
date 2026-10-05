/*
    Дано матриця цілих чисел A[n][n], n <= 15. Написати програму, що
    обчислює суму елементів, розміщених вище головної діагоналі і
    перевищують за величиною всі елементи, що знаходяться нижче
    головної діагоналі. Якщо таких елементів немає, то виводиться
    повідомлення про це.
*/

#include <iostream>
using namespace std;

int main() {
    system("chcp 65001 > nul");
    const int MAX_N = 15;
    int n{};
    int a[MAX_N][MAX_N];

    cout << "Введіть розмірність матриці n (2 <= n <= 15): ";
    cin >> n;

    if (n < 2 || n > MAX_N) {
        cout << "Помилка, некоректне значення n!" << endl;
        return 1;
    }

    cout << "Введіть елементи матриці:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    // знаходимо максимум серед чисел під діагоналлю (де рядок i більший за стовпець j)
    int maxBelow = a[1][0];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i > j && a[i][j] > maxBelow) {
                maxBelow = a[i][j];
            }
        }
    }

    // рахуємо суму над діагоналлю (де рядок i менший за стовпець j), які більші за maxBelow
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