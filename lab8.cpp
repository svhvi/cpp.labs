#include <iostream>
#include <cmath>

// метод правих прямокутників
double integrate(double (*f)(double), double a, double b, int n) {
    double h = (b - a) / n;
    double sum = 0.0;
    
    for (int i = 1; i <= n; i++) {
        sum += f(a + i * h);
    }
    
    return h * sum;
}

// підінтегральні функції
double f1(double x) {
    return 2 * x * x + 3;
}

double f2(double x) {
    return std::sin(x) + std::cos(x);
}

double f3(double x) {
    return std::log(x + 2); // log(ln)
}

int main() {
    int n = 1000;

    double a1 = 1.0, b1 = 2.0;
    double a2 = 0.0, b2 = std::acos(-1.0) / 2.0; // pi / 2
    double a3 = 0.0, b3 = 2.0;

    // обчислення кожного інтеграла через вказівник на функцію
    double I1 = integrate(f1, a1, b1, n);
    double I2 = integrate(f2, a2, b2, n);
    double I3 = integrate(f3, a3, b3, n);

    double S = I1 + I2 + I3;

    std::cout << "Integral 1 = " << I1 << std::endl;
    std::cout << "Integral 2 = " << I2 << std::endl;
    std::cout << "Integral 3 = " << I3 << std::endl;
    std::cout << "Total Sum S = " << S << std::endl;

    return 0;
}