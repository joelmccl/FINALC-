/*******************************
Introduction to Programming

Simple "Hello World" program

Programmer: Eric Foo
********************************/

// this is a comment for a single line

/*
this is a block comment
it can go
on for several lines
within this block
*/

// include file to process input and output (on screen)
#include <iostream>

// need this to tell the compiler to use the standard library
using namespace std;

// your main function goes here
// main here returns 0 if it completes without any errors
// it can also be 'void main ()' where main will not return anything
// BUT THIS IS NOT GOOD PRACTICE and in some cases wrong 
// since some older compilers will expect main to return something.
int main () {
    
	// print this text on the screen
	// the namespace std allows us to just call 'cout' and 'endl'
	cout << "Hello World";

	// this is what you'd have to use if you didn't specify a namespace
	// i.e. using namespace std
	// std::cout << "Hello World without using namespace std" << std::endl;

	// if program executes without problem, return 0
	// NOTE: the program will still run without this "return 0" (try it)
	// but it is not good programming practice (like declaring void main)
	return 0;
} // end of main