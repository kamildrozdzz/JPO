#include <iostream>
#include "Point.h"
#include <cmath>
#include <numbers>

class Circle{
    private:
        double *m_r;
        Point m_x_y;
    public:
        Circle(double r, double x, double y): m_r(new double(r)), m_x_y(x,y){
            if(r<0){
                r=0;
            }
        }
    void setCircleRdaius(double r){
        *m_r = r;
    }
    void setCirclePoint(double x, double y){
        m_x_y.setPointX(x);
        m_x_y.setPointY(y);
    }
    int getCircleRadius(void){
        return *m_r;
    }
    int getCirclePoint(void){
        return m_x_y.getPointX(), m_x_y.getPointY();
    }
    double area(void){
        return (std::numbers::pi)* *m_r* *m_r;
    }
    ~Circle(){
        delete m_r;
    }
};
