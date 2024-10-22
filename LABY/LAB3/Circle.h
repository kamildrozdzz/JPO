#include <iostream>
#include "Point.h"
#include <cmath>

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
    void setCirclePoints(double x, double y){
        m_x_y.setPointX(x);
        m_x_y.setPointY(y);
    }
    void setCirclePointX(double x){
        m_x_y.setPointX(x);
    }
    void setCirclePointY(double y){
        m_x_y.setPointY(y);
    }
    double getCircleRadius(void){
        return *m_r;
    }
    double getCirclePointX(void){
        return m_x_y.getPointX();
    }
    double getCirclePointY(void){
        return m_x_y.getPointY();
    }
    double area(void){
        return (M_PI)* *m_r* *m_r;
    }
    ~Circle(){
        delete m_r;
    }
};
