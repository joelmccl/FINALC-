#include "histogram.h"	//By including "histogram.h" we have access to everything included/declared in that file.


histogram::histogram()	//Default constructor.  It can be empty and do nothing at all...
{
	numBins = 0;		//or you can perform operations that might make sense for your application.
	numElements = 0;
}

/*What this class does isn't as important as how it does it.  I won't explain every little mathematical operation.
Rather, I'll be pointing out how what relates to its functioning as a class.*/


histogram::histogram(string file)	//Specific constructor.  Must have at least one argument
{
	ifstream input1(file.c_str());	//We use the argument to open an input file.
	if(input1.is_open()){
		input1 >> numElements;		//The first line of that input file is how many numbers we have to process.
	}								//This value is assigned to the public member variable 'numElements'.
	else{
		cout << "Error reading specified input file.  Exiting program." << endl;
		exit(-1);
	}
	dataArray = new double[numElements];	//Dynamically allocated array works the same in a class as it did before.
	cout << "\n[ ";
	for(int i=0; i<numElements; i++){
		input1 >> dataArray[i];
		cout << dataArray[i] << " ";
		if(i==0){
			min = dataArray[i];
			max = dataArray[i];
		}
		else{
			if(dataArray[i] > max) {max = dataArray[i];}
			if(dataArray[i] < min) {min = dataArray[i];}
		}
	}
	cout << "]" << endl;
	input1.close();
	//Once the end of the constructor is reached, the object is created.
}


histogram::~histogram()	//Default destructor.
{
	delete [] dataArray;	//Here we want to free up any heap memory we allocated to avoid memory leaks.
	delete [] binLimits;
	delete [] binCounts;
}

void histogram::processHistogram()	//Public method, member of the class histogram.
{
	cout << "\nThe input file contains " << numElements << " values." << endl;
	cout << "Min value = " << min << "\nMax value = " << max << endl;
	cout << "How many bins would you like the histogram to contain?" << endl;
	cin >> numBins;
	cout << "Please enter the bin limits in increasing order:  (" << (numBins+1) << " values)" << endl;
	binLimits = new double[numBins+1];
	for(int i=0; i<numBins+1; i++){
		cin >> binLimits[i];
	}
	binCounts = new int[numBins+2];
	
	cout << "\nBin Limit Values:  [ ";
	for(int i=0; i<numBins+1; i++){
		cout << binLimits[i] << " ";
	}
	cout << "]" << endl;

	for(int i=0; i<numBins+2; i++){
		binCounts[i]=0;
	}

	for(int i=0; i<numElements; i++){
		if(dataArray[i]<binLimits[0]){
			binCounts[0]++;
		}
		else if(dataArray[i]>binLimits[numBins]){
			binCounts[numBins+1]++;
		}
		else if(dataArray[i]>=binLimits[numBins-1] && dataArray[i]<=binLimits[numBins]){
			binCounts[numBins]++;
		}
		else{
			for(int j=1; j<numBins; j++){
				if(dataArray[i]<binLimits[j] && dataArray[i]>=binLimits[j-1]){
					binCounts[j]++;
					break;
				}
			}
		}
	}

	drawHistogram();	//Here we call the private method.  Wouldn't be able to call this from main().
}

//Include the code for your functions here.


void histogram::drawHistogram()	//Private method, member of the class histogram.
{
	cout << "\nHistogram Result:" << endl;
	cout << "x < " << binLimits[0] << "\t\t " << binCounts[0] << "\t";
	for(int i=0; i<binCounts[0]; i++){
		cout << "*";
	}
	for(int i=0; i<numBins; i++){
		cout << "\n" << binLimits[i] << " <= x < " <<  binLimits[i+1] << "\t " << binCounts[i+1] << "\t";
		for(int j=0; j<binCounts[i+1]; j++){
			cout << "*";
		}
	}
	cout << "\nx > " << binLimits[numBins] << "\t\t " << binCounts[numBins+1] << "\t";
	for(int i=0; i<binCounts[numBins+1]; i++){
		cout << "*";
	}
	cout << "\n\n";
}