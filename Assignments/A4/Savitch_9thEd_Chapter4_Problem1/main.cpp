/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To Output the MPG of a car
 * Created on July 11, 2015, 5:53 PM
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
const float CNVLG=0.264179;//Conversion of one liter to gallon
//Function Prototypes
float cnsmd(float gas_par, float dist_par);//This function calculates the MPG of a car
//Execution Begins Here
int main(int argc, char** argv) {
//Declare Variables
    float mpg;//Miles Per Gallon
    float gas;//Amount of Gas
    float dist;//Distance Traveled
//Prompt for the user to enter the needed values
    cout<<"In liters, enter your gas consumption: ";
    cin>>gas;
    cout<<"In miles, enter the total distance traveled: ";
    cin>>dist;
//Conversion function being called here
    gas=(gas*CNVLG);       
    mpg=cnsmd(gas, dist);
//Set Decimal Precision
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);
//The displayed Output data
    cout<<"Your car has traveled ";
    cout<<dist;
    cout<<" miles, using ";
    cout<<gas;
    cout<<" gallons of gas."<<endl;
    cout<<"Your car delivered ";
    cout<<mpg;
    cout<<" miles per gallon.\n"; 
//Exit stage right!    
    return 0;
}
//The function prototype that calculates the MPG
float cnsmd(float gas_par, float dist_par)//The functions heading
{
    return (dist_par/gas_par);
}

