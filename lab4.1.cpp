/*
    Задано масив цілих чисел A[n], n <= 400. Розробити програму, яка
    знаходить мінімальне серед тих чисел, які не повторюються. Якщо таких
    чисел немає, то виводить повідомлення про це.
*/

#include <iostream>
using namespace std;

int main() {
    system("chcp 65001 > nul");
    const int MAX_N = 400; // максимально допустима розмірність
    int n{};
    int a[MAX_N];

    cout << "Введіть розмірність масиву n (n <= 400): ";
    cin >> n;

    if (n <= 0 || n > MAX_N) {
        cout << "Помилка: некоректне значення n!" << endl;
        return 1;
    }

    cout << "Введіть елементи масиву:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    bool found = false;
    int minUnique = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;

        // рахуємо, скільки разів елемент a[i] зустрічається в масиві
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

        // якщо число зустрічається лише 1 раз, воно є неповторюваним
        if (count == 1) {
            if (!found || a[i] < minUnique) {
                minUnique = a[i];
                found = true;
            }
        }
    }

    if (found) {
        cout << "Мінімальне серед чисел, які не повторюються: " << minUnique << endl;
    } else {
        cout << "Чисел, які не повторюються, немає." << endl;
    }

    return 0;
}