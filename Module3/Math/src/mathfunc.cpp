/*******************************
Introduction to Programming

Program to demonstrate:
1) Random number generator
2) Different built-in math functions
   in math.h
3) For loop usage for recursive operations

Programmer: Eric Foo
********************************/

#include <iostream>
#include <math.h>		// include the math library

using namespace std;

int main () {
	int i1, i2;				// variables of different types
	float f1, f2;
	double d1, d2, d3;
	
	int choice=0;			// initialize the variable 'choice' to 0

	// use an infinite while loop to continuously bring us back to the selection menu
	while (1) {
		cout << "\n\n1 - Print random number" << endl;
		cout << "2 - Multiplication" << endl;
		cout << "3 - Square-root" << endl;
		cout << "4 - Factorial (using for loops)" << endl;
		cout << "5 - Convert degrees to radians" << endl;
		cout << "6 - QUIT" << endl;

		// user will enter a selection number
		cout << "Selection: ";
		cin >> choice;

		// perform different functions based on selection choice
		// this generates a random number between 0 and 9
		// the function 'rand()' will call a random number between 0 and RAND_MAX
		// RAND_MAX is the maximum value returned by the rand function
		// this value is library dependent, but is granted to be at least 32767.
		// the 'modulus' operator '%' returns the remainder after continuous division
		// i.e. to check if a number is even or odd, doing 'number%2' will return
		// either 0 or 1.  0 - even, 1 - odd
		if (choice == 1) {
			i1 = rand() % 10;
			cout << "Random number between 0 - 9: " << i1 << endl;
		}
		// performs a multiplication
		// '+', '-', '/' will also work
		else if (choice == 2) {
			cout << "Enter 1st number: ";
			cin >> d1;

			cout << "Enter 2nd number: ";
			cin >> d2;
			
			d3 = d1*d2;

			cout << d1 << " X " << d2 << " = " << d3 << endl;
		}
		// the math library has a lot of built in functions
		// this example calculates the square-root
		// other math functions:
		// trig functions: cos(x), sin(x), tan(x), etc. inputs are in radians
		// exponential: exp(x) calculates e^x
		// power: pow(x,y), calculates x^y
		else if (choice == 3) {
			cout << "Enter a number: ";
			cin >> f1;

			f2 = sqrt(f1);

			cout << "Square root of " << f1 << " = " << f2 << endl;
		}
		// using a for loop to calculater a factorial
		else if (choice == 4) {
			cout << "Enter a number: ";
			cin >> i1;

			i2 = i1;

			for (int i=i1-1; i>1; i--) {
				i2 = i2 * i;
			}
			cout << "Factorial of " << i1 << " = " << i2 << endl;
		}
		// converting degrees to radians
		else if (choice == 5) {
			double PI = 3.14159265;

			cout << "Enter angle in degrees: ";
			cin >> d1;

			d2 = d1*PI/180.0;

			cout << d1 << " degrees is " << d2 << " radians." << endl;
		}
		// break from while loop to quit
		else if (choice == 6) {
			cout << "Goodbye!" << endl;
			break;
		}
		else {;}
	}

	return 0;
}