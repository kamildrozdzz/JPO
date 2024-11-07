#pragma once

#include <cmath>
#include "Figure.hpp"

class Circle : public Figure{
    private:
        double m_radius;

    protected:
        Circle(double radius, const Point &p, std::string name ) : m_radius(radius), Figure(p, name){};
    
    public:
        Circle(double radius, const Point &p ) : m_radius(radius), Figure(p, "circle"){};

        double area() const override{
            return M_PI * m_radius * m_radius;
        }

        void setRadius(double radius){
            if(radius>=0){
                m_radius=radius;
            }
        }

        double getRadius(void) const{
            return m_radius;
        }

        void description() const override {
            std::cout <<  "I have a radius: "<< m_radius << std::endl;
            printCentre();
        } 
};