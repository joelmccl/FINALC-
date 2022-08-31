/*******************************
Introduction to Programming

Program to demonstrate cin and cout
for keyboard input and screen output

Programmer: Eric Foo
********************************/

#include <iostream>

using namespace std;

int main () {
	// we declare a variable of type 'char' for characters
	// assume maximum number of characters of 15
	char name[15];

	// print output on screen
	// prompt for name
	cout << "What is your name?" << endl;
	
	// user inputs answer
	// program reads in typed answer and stores it in the variable 'name'
	// information will be stored in the form of a character array
	// FYI: arrays will be discussed in a later section
	cin >> name;

	/* 
	prints "Hello" followed by the variable name
	'name' is the character variable
	*/
	cout << "Hello " << name << endl;


	// this shows the difference between printing using 'endl' and
	// using the special character '\n'
	// another special character \t = tab
	cout << "Printing " << endl << "using " << endl << "endl" << endl;
	cout << "\nPrinting \nusing \n\\n" << endl;

	/**************************************************
	************** TUTORIAL STARTS HERE ***************
	**************************************************/


	// Like above, expand the code to output a sentence based on what you typed in
	// i.e. "What day is today?" --> "Tuesday" --> "Today is Tuesday"
	
	// cout statement to ask a question


	// cin statement to obtain input from user


	// cout statement to reply

    cin.get();

	return 0;
}
