#include <iostream>
#include "ComplexNumber.hpp"

using std::cout, std::endl;

int main() {
    ComplexNumber a(3.4, 6.3);
    ComplexNumber b(1.7, 5.8);

    cout << "Liczba zespolona a: " << a << endl;
    cout << "Liczba zespolona b: " << b << endl;

    ComplexNumber c = a + b;
    cout << "a + b = " << c << endl;

    c = a - b;
    cout << "a - b = " << c << endl;

    c = a * b;
    cout << "a * b = " << c << endl;

    c = a / b;
    cout << "a / b = " << c << endl;

    cout << "a == b: " << (a == b ? "true" : "false") << endl;
    cout << "a != b: " << (a != b ? "true" : "false") << endl;

    c = a;
    c += b;
    cout << "c = a; c += b: " << c << endl;

    c = a;
    c *= b;
    cout << "c = a; c *= b: " << c << endl;

    ComplexNumber c1(4.0, 5.0);
    double someNumber = 13.3;
    c1 += someNumber;
    cout << "c1+=13.3: " << c1 << endl;

    return 0;
}
