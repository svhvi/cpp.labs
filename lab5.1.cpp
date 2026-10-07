#include <iostream>
using namespace std;

int main() {
    system("chcp 65001 > nul");

    double* a = new double;
    double* b = new double;

    cout << "Введіть довжини сторіни а =: ";
    cin >> *a;
    cout << "Введіть довжини двох сторіни b=: ";
    cin >> *b;

    double* area = new double((*a) * (*b));
    double* perimeter = new double(2 * ((*a) + (*b)));

    cout << "Площа: " << *area << endl;
    cout << "Периметр: " << *perimeter << endl;

    delete a;
    delete b;
    delete area;
    delete perimeter;

    return 0;
}