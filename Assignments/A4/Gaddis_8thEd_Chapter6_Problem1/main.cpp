/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: Calculate the markup on a retail product 
 * Created on July 11, 2015, 4:09 PM
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <string>       //String Library
using namespace std;    //I/O Library under standard name space
//User Libraries
//Global Constants
const float CNVPCNT = 100; //Convert percentages
//Function Prototypes
float clctRtl(float w, float m);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    float whslCst;      //Wholesale cost
    float mrkPcnt;      //Markup percentage
    float rtPrice;      //Retail Price    
//Prompt user for input
    cout << setw(30) << "* Markup *\n";
    cout << setw(30) << "----------\n";
    cout << "This program calculates an item's retail price." << endl;
    cout << "Enter the wholesale cost: ";
    cin >> whslCst;
    while(whslCst < 0)
    {
        cout << "ERROR: Wholesale cost must be a nonnegative number.\n"
                "Re-enter the wholesale cost: ";
        cin >> whslCst;
    }
    cout << "Enter the markup percentage: ";
    cin >> mrkPcnt;
    while(mrkPcnt < 0)
    {
        cout << "ERROR: Markup percentage must be a nonnegative number.\n"
                "Re-enter the markup percentage: ";
        cin >> mrkPcnt;
    }
//Calculate the retail price
    rtPrice = clctRtl(whslCst, mrkPcnt);
//Output the results
    cout << setprecision(2) << fixed;
    cout << "\nThe retail price is: $" << rtPrice << endl;
//Exit stage right!    
    return 0;
}
//Markup function
float clctRtl(float w, float m)
{
//Declare variables
    float temp, total;   
//Calculate the total cost of item with its markup
    temp = m / CNVPCNT * w;
    total = temp + w;
//Output the total using the return statement
    return (total);
}

