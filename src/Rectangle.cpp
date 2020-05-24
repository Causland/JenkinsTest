#include "Rectangle.h"
#include <string>

Rectangle::Rectangle(double sideLength){
    length = sideLength;
    width = sideLength;
    numSides = 4;
    area = calcArea();
    perimeter = calcPerimeter();
}

Rectangle::Rectangle(double l, double w){
    length = l;
    width = w;
    numSides = 4;
    area = calcArea();
    perimeter = calcPerimeter();
}

std::string Rectangle::toString(){
    return "Rectangle of size a=" + std::to_string(area) + ", p=" + std::to_string(perimeter);
}

double Rectangle::calcArea(){
    return length * width;
}

double Rectangle::calcPerimeter(){
    return length*2 + width*2;
}