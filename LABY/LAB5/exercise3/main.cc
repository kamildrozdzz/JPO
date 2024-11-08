#include <iostream>
#include "ComplexNumber.hpp"

using std::cout, std::endl;

int main() {
    kd::jpo::ComplexNumber a(1.1, 5.2);
    kd::jpo::ComplexNumber b(5.3, 3.6);

    cout << "Liczba zespolona a: " << a << endl;
    cout << "Liczba zespolona b: " << b << endl;

    kd::jpo::ComplexNumber c = a + b;
    cout << "a + b = " << c << endl;

    c = a - b;
    cout << "a - b = " << c << endl;

    c = a * b;
    cout << "a * b = " << c << endl;

    c = a / b;
    cout << "a / b = " << c << endl;

    cout << "a == b: " << (a == b ? "true" : "false") << endl;
    cout << "a != b: " << (a != b ? "true" : "false") << endl;


    kd::jpo::ComplexNumber d(6, 4);
    kd::jpo::ComplexNumber e(3, 3);

    cout << "Liczba zespolona a: " << d << endl;
    cout << "Liczba zespolona b: " << e << endl;

    kd::jpo::ComplexNumber f = d + e;
    cout << "a + b = " << f << endl;

    f = d - e;
    cout << "a - b = " << f << endl;

    f = d * e;
    cout << "a * b = " << f << endl;

    f = d / e;
    cout << "a / b = " << f << endl;

    cout << "a == b: " << (d == e ? "true" : "false") << endl;
    cout << "a != b: " << (d != e ? "true" : "false") << endl;

    return 0;
}
