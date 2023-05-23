#include "Rectangle.h"

void Rectangle::setLength(double length) 
{
    this->length = length;
}

void Rectangle::setBreadth(double breadth) 
{
    this->breadth = breadth;
}

double Rectangle::calculateArea() const 
{
    return length * breadth;
}

void Rectangle::printArea() const 
{
    cout << "Rectangle Area: " << calculateArea() <<endl;
}


