/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: Find the sum of the values of i to N 
 * Created on July 11, 2015, 6:23 AM
 */

//System Libraries
#include <cstdlib>
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
// Declare and initialize variables
    int i_num = 0; // store positive integer values
    unsigned short uSh_sum = 0;
//Prompt the user for a positive integer
    cout << "Enter a number to sum up from 1 to N: ";
    cin >> i_num;
// Input validation done here
    while(i_num < 1) {
        cout << "N must be greater than 1\n";
        cout << "Enter a number to sum up from 1 to N: ";
        cin >> i_num;
    } //The end of the while loop
// Calculate the sum of 1 to 50 
    for(int i = 1; i <= i_num; ++i) {
        uSh_sum += i;
    } //The end of the for loop
// Outputs the result
    cout << "Sum of 1 to " << i_num << " is " << uSh_sum << endl;
//Exit Stage right!    
    return 0;
} 
