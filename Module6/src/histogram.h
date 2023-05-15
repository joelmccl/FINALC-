#include <iostream>	//Standard includes again.
#include <fstream>
#include <string>
#include <vector>

using namespace std;

class histogram
{
public:		//Public methods and variables can be called or accessed from outside the class.
	histogram();				//Default constructor, no arguments.
	histogram(string file);		//Specific constructor, any arguments you need.
	~histogram();				//Default destructor, is automatically called before an object is deleted.
	//Constructors and destructors never have a return type.

	void processHistogram();	//Public method, can be called from anywhere.

	//Add some of your own public methods that can be called from main()
	//For example:  a function that will return statistical information about the data set
	double getMean(const string filename);
//	double getMedian();

	int numBins, numElements;	//Public variables, can be accessed/changed from anywhere.




private:	//Private methods and variables can only be called or access from inside the class.
	void drawHistogram(void);

	int *binCounts;
	double *dataArray;
	double *binLimits;
	double min, max;

/*protected:*/
	/*Since this is a simple example, protected methods and variables aren't applicable.  
	However, they would be specified as protected in the same way as public or private.*/
};