/* Завдання 3 (Варіант 7):
   Знайти добуток додатніх елементів і добуток від'ємних елементів*/

#include <iostream>
using namespace std;

int main() {
    // Встановлення української мови
    system("chcp 65001 > nul");
    int n;
    cin >> n;
    double prod_pos = 1, prod_neg = 1;
    bool has_pos = false, has_neg = false;

    for (int i = 0; i < n; i++) {
        double x;
        cin >> x;
        if (x > 0) {
            prod_pos *= x;
            has_pos = true;
        }
        else if (x < 0) {
            prod_neg *= x; 
            has_neg = true;
        }
    }

    cout << "Добуток додатних: ";
    if (has_pos) {
        cout << prod_pos;
    } else {
        cout << 0;
    }
    cout << endl;

    cout << "Добуток від'ємних: ";
    if (has_neg) {
        cout << prod_neg;
    } else {
        cout << 0;
    }
    cout << endl;

    return 0;
}