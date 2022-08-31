/*******************************
Introduction to Programming

Program to demonstrate the different 
uses of for loops and while loops

Programmer: Eric Foo
********************************/

#include <iostream>

using namespace std;

int main() {
	// here we declare different variables of different types
	int n, limit;
	char alpha;

	limit = 5;					//initialize the int variable 'limit' to a value of 5

	cout << "Using while loop" << endl;
	n = 0;						//initialize the int variable 'n' to a value of zero
	while (n != limit) {		//while n is not equal to limit, enter and continue the loop
		cout << "n = " << n << endl;
		n++;					//increment the variable 'n' by 1 each loop
	}

	cout << "Using while loop, break statement" << endl;
	n = 0;						//reset n to zero
	while (1) {					//infinite loop
		cout << "n = " << n << endl;
		n++;
		if (n == limit) break;	//apply the if decision to test if n equals limit.
								//the 'break' command will permanently exit the loop
	}

	cout << "Using do/while loop" << endl;
	n = 0;
	do {
		cout << "n = " << n << endl;
		n++;
	}while(n != limit);			//here the check is performed after each full iteration

	cout << "Using for loop, n<5" << endl;
	//for(initial value; end condition; increment operation
	for (int n=0; n<limit; n++) {
		cout << "n = " << n << endl;
	}

	cout << "Using for loop, n<=5" << endl;
	for (int n=0; n<=limit; n++) {
		cout << "n = " << n << endl;
	}

	cout << "Using for loop, characters" << endl;
	alpha = 'a';
	for (int n=0; n<limit; ++n) {
		cout << "alpha = " << alpha << endl;
		alpha = alpha + (char)1;
		//the (char) preceeding the 1 "casts" the number into the char variable type
	}

	cout << "Using for loop, n--" << endl;
	for (int n=limit; n>=0; n--) {
		cout << "n = " << n << endl;
	}

	return 0;
}