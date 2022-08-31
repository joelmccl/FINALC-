/*******************************
Introduction to Programming

Conversion of units

Programmer: Eric Foo
********************************/

#include <iostream>

// don't forget to include the math library
#include <math.h>

using namespace std;

int main () {
	double input = 0.0, output = 0.0;	// declaration of input and output variables
	int choice = 0;						// declare and initialize choice to 0
	double PI = 3.14159265;				// define a value for PI

	// infinite while loop to bring back the selection menu
	while (1) {
		cout << "\n\nPlease select a conversion type:" << endl;
		cout << "1 - Celcius to Fahrenheit" << endl;
		cout << "2 - Calculate area of circle" << endl;
		cout << "3 - Calculate cosine when input is in degrees" << endl;
		cout << "4 - Your own math calculation" << endl;
		cout << "5 - Quit" << endl;

		cout << "Selection: ";
		cin >> choice;

		// convert Celcius to Fahrenheit
		if (choice == 1) {
			cout << "\nEnter temperature in CELCIUS: ";
			cin >> input;

			// find the conversion factors and code as an equation
			// refer to the math function examples if you have trouble
			

			cout << input << " Celcius is " << output << " Fahrenheit" << endl;
		}
		// calculate the area of a circle
		else if (choice == 2) {
			cout << "\nEnter radius of circle: ";
			cin >> input;

			// code equation to find area of a circle from radius
			
			

			cout << "Circle of radius " << input << " is " << output << " in area" << endl;
		}
		// Calculate cosine of an angle in degrees
		else if (choice == 3) {
			cout << "\nEnter angle in degrees: ";
			cin >> input;

			// first convert degrees to radians
			

			
			// call the cosine function from the math library
			


			cout << "Cosine of " << input << " is " << output << endl;
		}
		// put another math function here
		// you can use something from the math library
		// or code the equation on your own
		else if (choice == 4) {



		}
		// quit, break from loop
		else if (choice == 5) {
			cout << "\n Goodbye" << endl;
			break;
		}
		else {;}
	}

	return 0;
}