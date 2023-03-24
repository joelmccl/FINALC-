/*******************************
Introduction to Programming

This program demonstrates the different uses of arrays

Programmer: Eric Foo
********************************/

#include <stdlib.h>
#include <iostream>

using namespace std;

// change test

// function that takes in an array
void functionArrayInput(int [], int);

// function that returns an array
// technically you cannot return an array from a function
// so we do this by using something called pointers
// a pointer contains a memory address to a value/array
int* functionArrayOutput(int);

int main () {
	int array_1d[3];						// define a 1D empty array
	int array_2d[2][2];						// define a 2D empty array
	char charArray1[3] = {'a', 'b', 'c'};	// specify size of array and initialize
	char charArray2[] = {'d', 'e', 'f'};	// size defined based on initialization
	int* arrayFromFunction;					// a pointer

	// IMPORTANT NOTE
	// C++ starts indexing its arrays at 0
	// so array element 0 is the first element in the array
	array_1d[0] = 10;
	array_1d[1] = 20;
	array_1d[2] = 30;


	cout << "Element\t" << "Value" << endl;
	cout << "[0]\t" << array_1d[0] << endl;
	cout << "[1]\t" << array_1d[1] << endl;
	cout << "[2]\t" << array_1d[2] << endl;

	// using a double for loop to populate the array elements
	cout << "\n\nMatrix of array_2d" << endl;
	for (int i=0; i<2; i++) {
		for (int j=0; j<2; j++) {
			array_2d[i][j] = (i+1)*(j+1);
			cout << array_2d[i][j] << " ";
		}
		cout << endl;
	}

	cout << "\n\nElement\t\t" << "Character" << endl;
	cout << "char1[0]\t" << charArray1[0] << endl;
	cout << "char1[1]\t" << charArray1[1] << endl;
	cout << "char1[2]\t" << charArray1[2] << endl;

	cout << "\nchar2[0]\t" << charArray2[0] << endl;
	cout << "char2[1]\t" << charArray2[1] << endl;
	cout << "char2[2]\t" << charArray2[2] << endl;

	// there is no function to find out the number of elements in an array
	// only way is to get the size of the entire array in bits
	// divided by the size of the variable type, i.e. int, double or char
	cout << "\n\nNumber of elements in charArray2 is " 
		<< sizeof(charArray2)/sizeof(char) << endl;

	// send an array and the size of the array to a function
	functionArrayInput(array_1d, (int)sizeof(array_1d)/sizeof(int));

	// the function returns an array
	arrayFromFunction = functionArrayOutput(2);

	cout << "\n\narrayFromFunction[0]\t" << arrayFromFunction[0] << endl;
	cout << "arrayFromFunction[1]\t" << arrayFromFunction[1] << endl;

	return 0;
}

// function that takes in an array
void functionArrayInput(int tempArray[], int arraySize) {
	cout << "\n\nFunction that takes in an array" << endl;
	for (int i=0; i<arraySize; i++) {
		cout << "Array element [" << i << "]: " << tempArray[i] << endl;
	}
}

// function that returns an array
int* functionArrayOutput(int arraySize) {
	int *arrayToReturn;
	
	// we allocate the memory
	arrayToReturn = new int [arraySize];

	for (int i=0; i<arraySize; i++) {
		arrayToReturn[i] = i;
	}
	
	return arrayToReturn;
}