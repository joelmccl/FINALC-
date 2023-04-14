/**************************
Introduction to Programming

This code demonstrates the use of string variables and array sorting.

Programmer:  Andrew Koehring
**************************/

#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
	
using namespace std;

/*This is an example of defining a constant the C way.  It is useful to have a variable of the size of an array.
However, you cannot initialize and array with a variable since the value can be changed.  The #define
operation allows you to set a constant value that cannot be changed, but can otherwise be used normally.

#define ARRAY_SIZE 10
*/
const int ARRAY_SIZE = 10;
string nameList[ARRAY_SIZE] = { "Michael", "George", "Lindsay", "George Michael", "Maeby", "Lucille", "Oscar", "Tobias", "Gob", "Buster" };
struct Name {
	string nameList;
	
	Name(string nameList) {
		this->nameList = nameList;
	}
};

bool compareNames(Name a, Name b) {
	return a.nameList.compare(b.nameList) < 0;
}

int main()
{
	string myName, guessedName, tempString;
	/*This is how constant variables are defined in C++.*/
	//const int ARRAY_SIZE = 10;
	//string nameList[ARRAY_SIZE] = {"Michael", "George", "Lindsay", "George Michael", "Maeby", "Lucille", "Oscar", "Tobias", "Gob", "Buster"};

	myName = "Andrew";
	cout << "What is my name?  ";
	cin >> guessedName;
	
	while(true)
	{
		if(myName == guessedName){  // the '==' and other operators work with the std::string class but not with character array strings
			cout << "\nCorrect.  My name is Andrew." << endl;
			break;
		}
		else{
			cout << "\nNope.  Try again.  ";
			cin >> guessedName;
		}
	}

	//Print out the initial list of names
	cout << "\n------------------" << endl;
	cout << "\nUnsorted List:" << endl;
	for(int i=0; i<10; i++){
		cout << nameList[i] << endl;
	}

	//Begin Bubble Sort
	//for(int i=0; i<ARRAY_SIZE; i++){
	//	for(int j=0; j<ARRAY_SIZE-i-1; j++){
		//	if(nameList[j] > nameList[j+1]){
		//		tempString = nameList[j+1];
		//		nameList[j+1] = nameList[j];
		//		nameList[j] = tempString;
		//	}
	//	}
//	}

	//Begin Your Sort
	//Find an algorithm online and implement it here.  Be sure to comment out the Bubble Sort.

	sort(nameList.begin(), nameList.end(), compareNames);

	//Print out the result to make sure we are sorting correctly
	cout << "\n------------------" << endl;
	cout << "\nSorted List:" << endl;
	for(int i=0; i<10; i++){
		cout << nameList[i] << endl;
	}

	return 0;
}