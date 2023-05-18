#include <iostream>	//Standard includes again.
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class shape
{
public:
	virtual void setLength(double);
	virtual void setBredth(double);
	virtual double calculateArea();
	virtual void printArea();

	void setName();
	string getName();
protected:
	string name;
};