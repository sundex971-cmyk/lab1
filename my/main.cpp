#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, F;
    int Xn, Xk, dX;
    const double eps = 1e-9;

    cout << "Enter: a, b, c, Xn, Xk, dX: ";
    cin >> a >> b >> c >> Xn >> Xk >> dX;

        cout << "--------------------\n"; // заголовок таблицы
        cout << "     " << "x" << "            " << "F(x)\n";
        cout << "--------------------\n";

    for (double x = Xn; x <= Xk; x += dX) { // часть кода с решением функции F в заданном промежутке

        if (x < 0 && fabs(b) != eps){
            F = -a * pow(x, 2) + b;
    }   else if (x > 0 && fabs(b) == eps) {
            F = x/(x-c) + 5.5;
    }   else {
            F = x/-c;
    }



    int Ac = static_cast<int>(a); // часть кода с определением типа функции F
    int Bc = static_cast<int>(b);
    int Cc = static_cast<int>(c);



    if (~(Ac | Bc | Cc) !=0 ) {
        cout << "     " << x << "               " << F << "\n";
   } else {
        F = static_cast<int>(F);
        cout << "     " << x << "          " << F << "\n";
    }
    }
}
