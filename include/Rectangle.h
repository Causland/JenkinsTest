#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Shape.h"
#include <string>

class Rectangle : public Shape{
    public:
        Rectangle(double sideLength);
        Rectangle(double length, double width);
        virtual std::string toString();

    protected:
        double calcArea();
        double calcPerimeter();
        double length;
        double width;
};

#endif 