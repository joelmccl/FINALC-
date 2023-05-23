/*******************************
Introduction to Programming

Program to demonstrate usage of classes

Programmer: Joel McCleary
********************************/

#include <iostream>	//normal included headers
#include <fstream>
#include <string>
#include <vector>

//#include "Shape.h"
#include "Rectangle.h"

using namespace std;

int main()
{
	Rectangle rectangle; //object creation
	rectangle.setLength(12);
	rectangle.setBreadth(10);
	rectangle.setName("Rectangle");
	rectangle.printArea();

	return 0;
}