#include "Shape.h"
#include "Rectangle.h"
#include "Triangle.h"
#include <iostream>

using namespace std;

int main(){
    Rectangle rec(5,2);
    Triangle tri(6);

    cout<<rec.toString()<<endl;
    cout<<tri.toString()<<endl;
}