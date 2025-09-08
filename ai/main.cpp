#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

double calculateF(double a, double b, double c, double x) {
    if (x < 0 && b != 0) {
        return -a * x * x + b;
    } else if (x > 0 && b == 0) {
        return (x - c) / x + 5.5;
    } else {
        return x / c;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    double a, b, c, Xn, Xk, dX;
    cout << "Введите a, b, c, Xнач, Xкон, dX: ";
    cin >> a >> b >> c >> Xn >> Xk >> dX;

    int Ai = static_cast<int>(a);
    int Bi = static_cast<int>(b);
    int Ci = static_cast<int>(c);

    cout << fixed << setprecision(4);
    cout << "\nТаблица значений функции F(x):\n";
    cout << "   x\t\tF(x)\n";
    cout << "-------------------------\n";

    for (double x = Xn; x <= Xk; x += dX) {
        double F = calculateF(a, b, c, x);

        // Условие вещественного/целого
        if (!(Ai || Bi || Ci) != 0) {
            cout << setw(7) << x << "\t" << setw(10) << F << "\n";
        } else {
            cout << setw(7) << x << "\t" << setw(10) << static_cast<int>(F) << "\n";
        }
    }

    return 0;
}
