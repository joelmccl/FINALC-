/**************************
Introduction to Programming

This program demonstrates the use of functions

Programmer:  Andrew Koehring
**************************/

#include <iostream>

using namespace std;

bool isDone = false; //example of a global variable

double calcAverage(double, double, double, double); //function prototypes placed above main() function
void printPattern();

void exit() //here, the entire function is before the main() function
{
	isDone = true; //modify the global variable 'isDone'
}

int main()
{
	double score1, score2, score3, score4, result;
	char answer;
	cout << boolalpha;  //this cout modifier makes it print boolean variable as true/false instead of 1/0
	while(true) {
		cout << "Enter four exam scores (pressing enter after each score)" << endl;
		cin >> score1;
		cin >> score2;
		cin >> score3;
		cin >> score4;
		result = calcAverage(score1, score2, score3, score4);  //initialize the variable result as the return value of the calcAverage function
		cout << "The average score is " << result << "." << endl;
		printPattern(); //call the printPattern function which has no arguments or return value
		cout << "\nExit calculator? (y/n):  ";
		cin >> answer;
		if(answer == 'y'){
			exit();
		}
		cout << "\nisDone:  " << isDone << endl;
		if(isDone==true){
			break;
		}
	}

	return 0;
}

double calcAverage(double x1, double x2, double x3, double x4) //complete function written after main() function
{
	double average = (x1 + x2 + x3 + x4)/4.0;  //calculate the average of four numbers
	return average;	//return the variable 'average'
}

void printPattern()
{
	//obviously, this is not something we would want to retype or even copy/paste all over our code
	cout << "\n\n       _==/          i     i          \\==_\n     /XX/            |\\___/|            \\XX\\" << endl;
	cout << "   /XXXX\\            |XXXXX|            /XXXX\\\n  |XXXXXX\\_         _XXXXXXX_         _/XXXXXX|" << endl;
	cout << " XXXXXXXXXXXxxxxxxxXXXXXXXXXXXxxxxxxxXXXXXXXXXXX\n|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|" << endl;
	cout << "XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX\n|XXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXXX|" << endl;
	cout << " XXXXXX/^^^^\"\\XXXXXXXXXXXXXXXXXXXXX/^^^^^\\XXXXXX\n  |XXX|       \\XXX/^^\\XXXXX/^^\\XXX/       |XXX|" << endl;
	cout << "    \\XX\\       \\X/    \\XXX/    \\X/       /XX/\n       \"\\       \"      \\X/      \"      /\"" << endl;
	//so it makes perfect sense to put this in a function where it can be re-used easily
}