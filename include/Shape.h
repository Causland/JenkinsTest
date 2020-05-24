#ifndef SHAPE_H
#define SHAPE_H

#include <string>

class Shape{
    public:
        int getNumSides();
        double getPerimeter();
        double getArea();
        virtual std::string toString() = 0;

    protected:
        virtual double calcArea() = 0;
        virtual double calcPerimeter() = 0;
        int numSides;
        double sideLength;
        double perimeter;
        double area;
};

#endif