/*******************************
Introduction to Programming

Program to demonstrate usage of character strings

Programmer: Eric Foo
********************************/

#include <iostream>
#include <string>

using namespace std;

int main() {
	// There is a difference between single and double quotes
	// When declaring a character use single quotes
	// For strings use double quotes
	char singleChar = 'a';
	char multipleChar = 'abc';

	char firstChar[] = "This is a string";
	char strToToken[] = "This is the string to be tokenized";

	const size_t numChar = strlen(firstChar);  //the 'size_t' type is the return type of the strlen method

	char secondChar[50];
	char thirdChar[7];
	// character pointer to temporarily store tokens
	char* tokenPtr;

	// define delimiter here
	const char* delim = "i";

	// counter for number of tokens found
	int numDelim = 0;

	cout << "Single Character: " << singleChar << endl;
	cout << "Multiple Character (only c is printed, not 'abc' as declared): " << multipleChar << endl;

	cout << "First String: " << firstChar << endl;

	// this copies the entire string into another string variable
	strcpy( secondChar, firstChar );
	cout << "Copied String: " << secondChar << endl;

	// this copies only a certain number of characters
	// but it will leave out the null character of '\0'
	// and a space counts as a single character
	strncpy( thirdChar, firstChar, 6 );
	thirdChar[6] = '\0';
	cout << "Copied String (first 6 characters): " << thirdChar << endl;

	cout << "\nTokens:" << endl;

	// string tokenizer
	// this function takes in the string to be tokenized as the first input
	// second input is the delimiter
	tokenPtr = strtok( strToToken, delim );

	// loop until there are no more delimiters
	while( 1 ) {
		// print out token
		cout << tokenPtr << endl;
		
		// this tells the strtok function to reuse the previous string
		tokenPtr = strtok( NULL, delim );

		// break out of loop if there are no more tokens
		if (tokenPtr == NULL) break;
		
		// increment the counter
		numDelim++;
	}

	cout << "Number of delimiters found: " << numDelim << endl;

	/********************************************************
	Try other string functions like:
	- strcat
	- strcmp
	********************************************************/

	return 0;
}