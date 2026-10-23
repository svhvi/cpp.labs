/* Завдання 2 (Варіант 7):
   Знайти номер останнього елемента масиву a(a[1], a[2], ... a[n]), 
   який кратний числам 3 і 5 одночасно */

#include <iostream>
using namespace std;

int main() {
    // Встановлення української мови
    system("chcp 65001 > nul");
    int n;
    cout << "Введіть кількість елементів масиву: ";
    cin >> n;

    int last_index = -1;

    cout << "Введіть елементи масиву:\n";
    for (int i = 1; i <= n; i++) {
    int x;
    cin >> x;

    if (x % 15 == 0) {
    last_index = i; 
    }
    }

    if (last_index != -1) {
    cout << "Номер останнього елемента, який кратний 3 та 5: " << last_index << endl;
    } else {
    cout << "У масиві немає елементів, кратних і 3, і 5." << endl;
    }

    return 0;
    }
