/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To calculate the total pay for somebody getting paid in pennies
 * Created on July 11, 2015, 12:31 PM
 */

// System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
//Global Functions
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
// Declare and initialize the variables
	int i_nDays = 0; //Number of days
	float f_salary = 0.0f; //Salary earned in pennies
//Prompt the user to enter the number of days
	cout << "Enter the number of days: ";
	cin >> i_nDays;
//Input validation: i_nDays > 1
	while(i_nDays < 1) {
		cout << "Enter the number of days >= 1: ";
		cin >> i_nDays;
	}//The end of the while loop
//The header to be output
	cout << setw(5) << "Day" << setw(30) << "Salary ($)\n";
	cout << "--------------------------------------------\n";	
//Use a loop to calculate the total salary
	for(int day = 0; day < i_nDays; ++day) {
		f_salary += pow(2, day);
		cout << setw(3) << day+1 << setw(30) 
			 << fixed << showpoint << setprecision(2) 
			 << pow(2, day)/100 << endl;
	} // end for loop

	// output the total salary in dollars
	cout << "\nThe total pay is $" << f_salary / 100 << " dollars\n";
//Exit stage right!
	return 0;
} // end main