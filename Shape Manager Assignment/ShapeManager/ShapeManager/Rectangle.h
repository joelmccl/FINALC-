//#ifndef RECTANGLE_H
//#define RECTANGLE_H

#include "Shape.h"

using namespace std;

class Rectangle : public Shape  //derived class
{
private:
	double length = 0;  //variables for rectangle length and breadth
	double breadth = 0;

public:
	void setLength(double length);
	void setBreadth(double breadth);
	double calculateArea() const;
	void printArea() const;
};
