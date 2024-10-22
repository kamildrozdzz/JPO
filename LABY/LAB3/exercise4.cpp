#include <iostream>
#include "Point.h"

using std::cout, std::endl, std::endl;

int main(){
    Point point(2.5,3.0);
    point.display();
    point.setPointX(10.0);
    cout << "X:" << point.getPointX() << endl;

}