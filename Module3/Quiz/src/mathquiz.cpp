/*******************************
Introduction to Programming

Sample solution to assignment part 2
A simple math quiz program

Programmer: Eric Foo
********************************/

#include <iostream>
#include <math.h>

using namespace std;

int main () {
	double ques1, ques2, answer;
	int math_func = 0;
	char choice;

	// while loop to continuously bring the selection menu back
	while (1) {
		cout << "\n\nWelcome to a simple math quiz!" << endl;

		// use a random number generator to randomly select an operation
		// +, -, *, /
		// I have '0' here as an example, you will have
		// to write your own code to generate random numbers
		math_func = 0;
		





		// based on what the random number generates specific operations are called
		// addition
		if (math_func == 0) {
			// randomly generate two numbers
			// I have '0' here as an example, you will have
			// to write your own code to generate random numbers
			ques1 = 0;
			ques2 = 0;

			// ask the question
			cout << ques1 << " + " << ques2 << " = ";

			// user types in the answer
			cin >> answer;

			// checks if the answer is correct
			// and print appropriate response
			if (ques1 + ques2 == answer) cout << "CORRECT!" << endl;
			else cout << "I'm sorry, that was incorrect." << endl;
		}
		// subtraction
		else if (math_func == 1) {








		}
		// multiplication
		else if (math_func == 2) {












		}
		// division
		else if (math_func == 3) {
	









		}
		else {;}

		cout << "Would you like to play again? (y/n)" << endl;
		cin >> choice;

		if (choice == 'n') break;
	}

	return 0;
}