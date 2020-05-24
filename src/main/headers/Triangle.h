#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Shape.h"
#include <string>

class Triangle : public Shape{
    public:
        Triangle(double sideLength);
        std::string toString();

    protected:
        double calcArea();
        double calcPerimeter();
};

#endif 