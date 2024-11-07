#include <iostream>
#include "ComplexNumber.hpp"

using std::cout, std::endl;

int main() {
    kd::jpo::ComplexNumber a(3.0, 4.0);
    kd::jpo::ComplexNumber b(1.0, 2.0);

    cout << "Liczba zespolona a: " << a << endl;
    cout << "Liczba zespolona b: " << b << endl;

    // Dodawanie
    kd::jpo::ComplexNumber c = a + b;
    cout << "a + b = " << c << endl;

    // Odejmowanie
    c = a - b;
    cout << "a - b = " << c << endl;

    // Mnożenie
    c = a * b;
    cout << "a * b = " << c << endl;

    // Dzielenie
    c = a / b;
    cout << "a / b = " << c << endl;

    // Operator porównania
    cout << "a == b: " << (a == b ? "true" : "false") << endl;
    cout << "a != b: " << (a != b ? "true" : "false") << endl;
    // Przypisanie i +=
    c = a;
    c += b;
    cout << "c = a; c += b: " << c << endl;

    // Przypisanie i *=
    c = a;
    c *= b;
    cout << "c = a; c *= b: " << c << endl;

    kd::jpo::ComplexNumber c1(4.0, 5.0);
    double someNumber = 13.3;
    c1 += someNumber;
    cout << "c1+=13.3: " << c1 << endl;

    return 0;
}
