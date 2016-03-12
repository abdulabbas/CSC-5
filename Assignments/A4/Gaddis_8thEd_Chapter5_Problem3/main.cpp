/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To display a table that shows the Ocean Levels
 * Created on July 11, 2015, 11:46 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
// Declare and initialize variables
	const unsigned char UCH_MAX = 25; //The next 25 years from the current year
	const float f_oLvlInc = 1.5f; //The ocean level rises 1.5 millimeters per year
	unsigned char uCh_curYear = 15; //The current year
// Display header
	cout << setw(5) << "Year" << setw(20) << "Ocean Level (mm)\n";
	cout << "---------------------------\n";
//To display a table that shows the number of millimeters
//That have risen for the next 25 years
	for(int i = 1; i <= UCH_MAX; ++i) {
		cout << setw(3) << i << setw(10) << fixed << showpoint
			 << setprecision(2) << "+"<< setw(5) << f_oLvlInc * i << " mm\n";
	}//The end of the for loop
//Exit stage right!        
	return 0;
}//The end of the main function

