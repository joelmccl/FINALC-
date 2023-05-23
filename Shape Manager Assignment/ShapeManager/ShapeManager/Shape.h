//#ifndef SHAPE_H
//#define SHAPE_H

#include <iostream>	//Standard includes again.
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class Shape 
{
protected:
	string name;

public:
	virtual void setLength(double length)=0;  //virtual to be overridden
	virtual void setBreadth(double breadth)=0;
	virtual double calculateArea() const=0;
	virtual void printArea() const=0;

	void setName(string);
	string getName() const;

};