#include "Triangle.h"
#include <string>
#include <math.h>

Triangle::Triangle(double sideLength){
    this->sideLength = sideLength;
    numSides = 3;
    area = calcArea();
    perimeter = calcPerimeter();
}

std::string Triangle::toString(){
    return "Triangle of size a=" + std::to_string(area) + ", p=" + std::to_string(perimeter);
}

double Triangle::calcArea(){
    return 0.25 * std::sqrt(3) * sideLength * sideLength;
}

double Triangle::calcPerimeter(){
    return numSides * sideLength;
}