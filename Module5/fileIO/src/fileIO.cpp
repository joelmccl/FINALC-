/*******************************
Introduction to Programming

Program to demonstrate usage of file reading and writing

Programmer:  Andrew Koehring
********************************/

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
	ifstream fileIn("input.txt");		//Open the input file.
	ifstream fileIn2("input2.txt");		//Open the second input file.
	ofstream fileOut("output.txt");		//Open the output file.  If it does not exist, it will be created.
	/*
	Important Note:  If you open the output file as done above, anything in a pre-existing file will be deleted.
	In cases where you want to save the contents of the file, open it as shown below.
	*/
	ofstream fileOut2("output2.txt", ios::app);  //Open the second output file, but use the append mode.
	
	if(fileIn.is_open()){  //Sometimes it's a good idea to verify that the file exists and is open before working with it.
		string text;
	//	fileIn >> text;
		/*
		Run the code once with the above line and notice the output.  Using the '>>' will only go until it
		finds the first delimiter which in this case would be the space character.  Try the code a second time, commenting
		out the above line and instead use the one below.
		*/
		getline(fileIn, text);
		
		cout << "text:  " << text << endl;  //Print to the terminal window.
		fileOut << text;  //Save this text to output.txt.
	}

/*	int values[10], index = 0;  //Create an array to store input values and an index to keep track of the array position.
	/*
	Note:  I created the array to the exact size of what I knew the input to be.  This won't always be the case.  Adding another
	number to the input2.txt file would cause the program to not work as expected.
	/*
	if(fileIn2.is_open()){
		while(!fileIn2.eof()){  //'eof' stands for end of file.  Here we are saying to enter the loop as long as the end of the file has not been reached.
			fileIn2 >> values[index];  //The '>>' operator works fine in this case as we only want single integers for each input.
			index++;
		}

	}
	for(int i=0; i<10; i++){
		cout << values[i] << endl;		//Print to the terminal window.
		fileOut2 << values[i] << endl;	//Save the array values to output2.txt.
	}
	
	
	
	fileIn.close();		//Close all the files we opened.
	fileIn2.close();
	fileOut.close();
	fileOut2.close();
	*/
	return 0;
}