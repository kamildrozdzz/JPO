#include <iostream>
#include "Circle.h"

using std::cout, std::endl;

int main(){
    Circle circle(5.0,3.0,2.0);
    cout << circle.area() << endl;
    circle.setCircleRdaius(10);
    cout << circle.area() << endl;
    cout << "Radius: " << circle.getCircleRadius() << endl;
    cout << "X: " << circle.getCircleXY().getPointX() << " Y: " << circle.getCircleXY().getPointX() << endl;
    circle.setCirclePoints(1.0,5.0);
    cout << "X: " << circle.getCircleXY().getPointX() << " Y: " << circle.getCircleXY().getPointY() << endl;
}