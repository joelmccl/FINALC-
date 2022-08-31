/*******************************
Introduction to Programming

Program to demonstrate if/else
conditional statements with
different usage of logical operators

Programmer: Eric Foo
********************************/

#include <iostream>

using namespace std;

int main () {
	// here we declare different variables of different types
	int number1, number2, number3;	// integer type (stores information as signed integers)
	char char1, char2;				// character type
	char choice;
	bool cont;						// boolean type (only TRUE/FALSE or 1/0)

	cont = true;					// define variable 'cont' and initialize to true

	// 'while' loops will continue as long as the condition is TRUE
	// in this case, it will continue as long as 'cont' is TRUE
	// IMPORTANT NOTE: the word 'continue' is a reserved word in C++

	// keep looping as long as 'cont' is TRUE
	while (cont) {
		// user types in three numbers
		cout << "1st number: " << endl;
		cin >> number1;

		cout << "2nd number: " << endl;
		cin >> number2;

		cout << "3rd number: " << endl;
		cin >> number3;

		// the operator > compares if  number1 is bigger than number2
		// is this comparison true?  if the comparison is TRUE then do this
		if (number1 > number2) {
			cout << "\nstatement : if (number1 > number2)" << endl;
			cout << number1 << " is bigger than " << number2 << endl;
		}

		/**************************************************
		Experiment with other operators using 'else if'
		**************************************************/
		/*
		else if (number1 >= number2) {
			cout << "\nstatement : if (number1 >= number2)" << endl;
			cout << number1 << " is bigger than or equal to " << number2 << endl;
		}
		else if (number1 == number2) {
			cout << "\nstatement : if (number1 == number2)" << endl;
			cout << number1 << " is equal to " << number2 << endl;
		}
		*/
		else {
			cout << "\nstatement : else" << endl;
			cout << number1 << " is smaller than " << number2 << endl;
		}

		// logical operators
		// in this case, both conditions have to be true
		if (number1 > number2 && number1 > number3) {
			cout << "\nstatement : if (number1 > number2 && number1 > number3)" << endl;
			cout << number1 << " is bigger than both " << number2 << " and " << number3 << endl;
		}

		// in this case, as long as either condition is true
		if (number1 > number2 || number1 > number3) {
			cout << "\nstatement : else if (number1 > number2 || number1 > number3)" << endl;
			cout << number1 << " is bigger than either " << number2 << " or " << number3 << endl;
		}

		// this will return a value depending on the condition
		// if number1 is bigger than number2, it will return 'y'
		// otherwise it will return 'n'
		// standard form:
		// a > b ? 1:0, will return 1 if a > b, otherwise 0
		cout << "\nUsing conditional operator '?'" << endl;
		char yn = number1 > number2 ? 'y' : 'n';

		// prints the answer
		cout << "Is number1 bigger than number2? " << yn << endl;

		// you can also do comparison with characters
		// by default, upper-case characters are less than lower-case characters
		// so 'A' is less than 'a'
		cout << "\n1st character: " << endl;
		cin >> char1;

		cout << "2nd character: " << endl;
		cin >> char2;

		// is this comparison true?  if TRUE then do this
		if (char1 > char2) {
			cout << char1 << " is AFTER " << char2 << endl;
		}
		else {
			cout << char1 << " is BEFORE " << char2 << endl;
		}

		cout << "Continue? (y/n)" << endl;
		cin >> choice;

		if (choice == 'n') {
			cout << "Goodbye!" << endl;
			cont = false;
		}
		else {
			cont = true;
		}
	}

	return 0;
}