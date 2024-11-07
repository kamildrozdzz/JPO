#include <iostream>
#include "ComplexNumber.hpp"

using std::cout, std::endl;

int main() {
    kd::jpo::ComplexNumber a(3.1, 4.2);
    kd::jpo::ComplexNumber b(1.3, 2.6);

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


    kd::jpo::ComplexNumber d(3, 4);
    kd::jpo::ComplexNumber e(1, 2);

    cout << "Liczba zespolona a: " << d << endl;
    cout << "Liczba zespolona b: " << e << endl;

    // Dodawanie
    kd::jpo::ComplexNumber f = d + e;
    cout << "a + b = " << f << endl;

    // Odejmowanie
    f = d - e;
    cout << "a - b = " << f << endl;

    // Mnożenie
    f = d * e;
    cout << "a * b = " << f << endl;

    // Dzielenie
    f = d / e;
    cout << "a / b = " << f << endl;

    // Operator porównania
    cout << "a == b: " << (d == e ? "true" : "false") << endl;
    cout << "a != b: " << (d != e ? "true" : "false") << endl;

    return 0;
}
