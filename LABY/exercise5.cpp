#include <iostream>
#include "Circle.h"
#include <numbers>

using std::cout, std::endl;

main(){
    Circle circle(5.0,3.0,2.0);
    cout << circle.getCirclePoint() << endl;
}