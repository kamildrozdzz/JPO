#include <iostream>
#include "ComplexNumber.hpp"

using std::cout, std::endl;

int main() {
    kd::jpo::ComplexNumber a(1.2, 3.5);
    kd::jpo::ComplexNumber b(3.9, 5.7);

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
    
    c = a;
    c += b;
    cout << "c = a; c += b: " << c << endl;

    c = a;
    c *= b;
    cout << "c = a; c *= b: " << c << endl;

    kd::jpo::ComplexNumber c1(4.0, 5.0);
    double someNumber = 13.3;
    c1 += someNumber;
    cout << "c1+=13.3: " << c1 << endl;

    return 0;
}
