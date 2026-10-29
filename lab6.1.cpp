#include <iostream>
#include <vector>
using namespace std;

int main() {
    system("chcp 65001 > nul");
    int n;
    cout << "Введіть розмірність масиву n (n <= 400): ";
    cin >> n;

    if (n <= 0 || n > 400) {
        cout << "Помилка: некоректне значення n!" << endl;
        return 1;
    }

    vector<int> a(n);

    cout << "Введіть елементи масиву:\n";
    for (int i = 0; i < n; i++) {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    bool found = false;
    int minUnique = 0;

    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }

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