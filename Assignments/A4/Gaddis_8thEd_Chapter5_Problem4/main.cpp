/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To display the amount of calories burned due to running on a Treadmill
 * Created on July 11, 2015, 11:58 AM
 */

// System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
// Declare and initialize the variables
	const float f_cBrnMin = 3.9f; //Calories burned per minute
//Display the header
	cout << setw(8) << "Minutes" << setw(25) << "Calories Burned\n";
	cout << "----------------------------------\n";
//Display the table
	for(int minutes = 10; minutes <= 30; minutes+=5) {
		cout << setw(5) << minutes << setw(23) 	
			 << fixed << showpoint << setprecision(2) 
			 << f_cBrnMin * minutes << endl;
	}
//Exit stage right!        
	return 0;
} //The of end of the main function

