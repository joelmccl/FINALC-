/*******************************
Introduction to Programming

Program to demonstrate usage of classes

Programmer: Andrew Koehring
********************************/

#include <iostream>	//Here we have some of the normal included headers
#include <fstream>
#include <string>

#include "histogram.h"	//Here we include the header file that I created
// #include "histogram.cpp"

/*Notice that my header file is surrounded by double quotes " " and not by < >.  How you surround the header tells the compiler
where to look for that file.  Using < > tells it to look in the standard file libraries for Visual Studio applications or in 
specific directories you specify in the project properties.  The " " is an absolute file path.  Since the file is in the same
directory as the project, it works fine.  However, if I were to put the header files in a sub-folder called Include, I would have
to use the following line:
#include "Include/histogram.h"
*/

using namespace std;
string filename;

/*This little program does a lot, but this file is pretty empty.  That's because I've written my own include files to hold the 
majority of the code.  You can see all the files I added to this project in the Solution Explorer to the right.*/ 

int main()
{
//	string filename;
	
	/*Because "histogram" was defined as a class in the included header files, we can now use it as a declaration type.  The line
	below declares defaultHist as a histogram type object as well as calls the default constructor.*/
	histogram defaultHist;
	cout << "Default histogram created.\nNumber of Bins = " << defaultHist.numBins << "\nNumber of Elements = " << defaultHist.numElements << endl;
	//We can access the numBins and numElements variables since they were declared as public variables in the histogram class.
	
	cout << "\nEnter the name of the data file including the extension:  ";
	cin >> filename;
	histogram myHist(filename);  //This specific constructor creates another histogram object but differently from the default constructor.
	cout << "Constructed new histogram with input file " << filename << endl;
	
	myHist.processHistogram();	//Because the processHistogram function was declared public, we can call it from outside the class.
	
		const double mean = myHist.getMean(filename);
		cout << "The mean is: " << mean << endl;
	
	//Read the instructions in histogram.h and add to the histogram class.




	return 0;
}