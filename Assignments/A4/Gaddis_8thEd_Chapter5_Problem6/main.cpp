/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To Output the Distance Traveled
 * Created on July 11, 2015, 12:10 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;
//User Libraries
//Global Functions
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare and initialize the variables
//Store the users input values
    short sh_spdVhcl = 0; //The speed of the vehicle in miles per hour
    int i_nHrsTrv = 0; //The number of hours traveled
// store calculated value
    float f_dstTrav = 0.0f; // distance traveled    
//Prompt the user for the speed of the vehicle in miles per hour
//And the number of hours traveled
    cout << "\nWhat is the speed of the vehicle in mph? ";
    cin >> sh_spdVhcl;
    cout << "How any hours has it traveled? ";
    cin >> i_nHrsTrv;
//Header of the output table    
    cout << "\n Hour      Distance Traveled\n";
    cout << "------------------------------------\n";
//Calculate the distance traveled using a loop
//And output the results
    for(int i = 1; i <= i_nHrsTrv; ++i) {
        f_dstTrav = i * sh_spdVhcl;
        cout << setw(3) << i << setw(18) << f_dstTrav << endl; 
    }//The end of the for loop
//Exit stage right!    
    return 0;
}//The end of the main function

