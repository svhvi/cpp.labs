#include <iostream>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

// oбчислення площі за формулою через координати
double triangleArea(Point p1, Point p2, Point p3) {
    return abs((p1.x * (p2.y - p3.y) + p2.x * (p3.y - p1.y) + p3.x * (p1.y - p2.y)) / 2.0);
}

// функція для визначення, чи належить точка p внутрішності трикутника (A, B, C)
bool isPointInsideTriangle(Point p, Point A, Point B, Point C) {
    double originalArea = triangleArea(A, B, C);
    
    double a1 = triangleArea(p, A, B);
    double a2 = triangleArea(p, B, C);
    double a3 = triangleArea(p, A, C);

    // якщо сума площ трикутників із точкою дорівнює площі основного трикутника 
    return abs(originalArea - (a1 + a2 + a3)) < 1e-9;
}

// перевірка, чи лежить трикутник T1 всередині трикутника T2
bool isTriangleInside(Point t1[3], Point t2[3]) {
    // достатньо перевірити, чи всі 3 вершини першого трикутника лежать усередині другого
    for (int i = 0; i < 3; i++) {
        if (!isPointInsideTriangle(t1[i], t2[0], t2[1], t2[2])) {
            return false;
        }
    }
    return true;
}

int main() {
    system("chcp 65001 > nul");
    
    Point t1[3], t2[3];

    cout << "Введіть координати 3 вершин першого трикутника (x y):\n";
    for (int i = 0; i < 3; i++) {
        cin >> t1[i].x >> t1[i].y;
    }

    cout << "Введіть координати 3 вершин другого трикутника (x y):\n";
    for (int i = 0; i < 3; i++) {
        cin >> t2[i].x >> t2[i].y;
    }

    if (isTriangleInside(t1, t2)) {
        cout << "Перший трикутник лежить усередині другого." << endl;
    } else if (isTriangleInside(t2, t1)) {
        cout << "Другий трикутник лежить усередині першого." << endl;
    } else {
        cout << "Жоден із трикутників не лежить повністю всередині іншого." << endl;
    }

    return 0;
}