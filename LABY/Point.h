#include <iostream>

class Point{
private:
    double m_x;
    double m_y;
public:
    Point(double x, double y) : m_x(x), m_y(y) {}

    void setPoint(double x, double y) {
        m_x = x;
        m_y = y;
    }

    void setPointX(double x) {
        m_x = x;
    }

    void setPointY(double y) {
        m_y = y;
    }

    double getPointX() const { 
        return m_x;
    }

    double getPointY() const {
        return m_y;
    }

    void display(void) const {
        std::cout << "The coordinates of the point are (" << m_x << ";" << m_y << ")" << std::endl;
    }
};
