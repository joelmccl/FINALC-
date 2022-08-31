/*******************************
Introduction to Programming

Program to demonstrate usage of file reading and writing

Programmer:  Andrew Koehring
********************************/

#include <iostream>

using namespace std;

int cubeByValue(int);			//Function prototypes
void cubeByReference(int &);
void cubeByPointer(int *);

int main()
{
	int y;		//Declare a normal integer.
	int *yPtr;	//Declare a pointer to an integer.

	/*
	Try changing either of the above declarations to type double.  Notice that an
	int type pointer cannot point to a double type value, nor can a double type
	pointer point to an integer type value.
	*/

	y = 7;		//Initialize the integer to a value.
	yPtr = &y;	//Initialize the pointer to the address of an integer.
	
	//Demonstrate that the pointer holds the correct address of the integer.
	cout << "The address of y:\t" << &y << "\nThe value of yPtr:\t" << yPtr << endl;
	
	//Demonstrate that the pointer can also reference the value of the integer.
	cout << "\nThe value of y:\t\t" << y << "\nThe value of *yPtr:\t" << *yPtr << endl;

	cout << "\nThe pointer itself has an address as well:  " << &yPtr << endl;

	cout << "\nShowing that * and & are inverses of each other:" << endl;
	cout << "&*yPtr = " << &*yPtr << endl;	//The address of the value of yPtr.
	cout << "*&yPtr = " << *&yPtr << endl;	//The value of the address of yPtr.

	//We can use pointers to reassign the value of the referenced variable.
	cout << "\ny = " << y << endl;
	cout << "Perform the operation *yPtr = 9." << endl;
	*yPtr = 9;
	cout << "y = " << y << endl;

	/*Demonstrate the difference between call by value, call by reference with reference arugments,
	and call by reference with pointer arguments.  Notice the different arguments supplied and how
	the variables in the main function are affected.*/
	int a=2, b=2, c=2;

	cout << "\nThe original value of a is " << a << endl;
	cout << "Call the cubeByValue function." << endl;
	cout << "The value of a is still " << a << ", and the value returned by the function is " << cubeByValue(a) << endl;

	cout << "\nThe original value of b is " << b << endl;
	cout << "Call the cubeByReference function." << endl;
	cubeByReference(b);
	cout << "The value of b is now " << b << ", and the function returns no value."<< endl;

	cout << "\nThe original value of c is " << c << endl;
	cout << "Call the cubeByPointer function." << endl;
	cubeByPointer(&c);
	cout << "The value of c is now " << c << ", and the function returns no value."<< endl;

	int *pInt;			//Declare the pointer.
	pInt = new int;		//Dynamically allocate space for an integer that is pointed to by pInt.
	*pInt = 5;			//Assign the value 5 to the referenced location.
	//pInt = new int(5);	//Here, the allocation and value assignment are done in one line.
	//int *pInt = new int(5);	//This is how the above could be done all in one line.
	
	cout << "\nThe value of *pInt is " << *pInt << endl;
	cout << "The address of pInt is " << pInt << endl;
	cout << "Perform the delete operation on pInt..." << endl;
	delete pInt;	//Release the allocated heap memory.
	cout << "pInt still has an address in stack memory:  " << pInt << endl;
	cout << "However it has a null value:  " << *pInt << endl;

	/*Recall from the arrays introduction code how we had to use a constant value in order to 
	declare an array.  This meant that the array size needed to be known before compiling and
	running the code.  Thus, arrays are often made too big or too small.  With pointers, we can 
	dynamically allocate arrays.  Thus, we can use values input during runtime to create a custom sized array.*/
	
	int *pArray, arraySize;	//Declare a pointer (which eventually point to an array of integers) and a normal int.
	cout << "\nPlease enter the array size you require." << endl;	//Prompt for array size.
	cin >> arraySize;
	pArray = new int[arraySize];	//Allocate memory for an array of integers of the desired size.
	cout << "\nPlease enter the array values." << endl;
	for(int i=0; i<arraySize; i++){
		cin >> pArray[i];	//Assigning values to the dynamic array is identical to a normal array
	}
	cout << "You entered the following dynamically allocated array:\n[ ";
	for(int i=0; i<arraySize; i++){
		cout << pArray[i] << " ";
	}
	cout << "]" << endl;
	
	delete [] pArray;	//Again, we must release the allocated memory when we are done with it.
	return 0;
}

int cubeByValue(int n)
{
	n = n*n*n;
	return n;
}

void cubeByReference(int &nRef)
{
	nRef = nRef*nRef*nRef;
}

void cubeByPointer(int *nPtr)
{
	*nPtr = *nPtr * *nPtr * *nPtr;
}
