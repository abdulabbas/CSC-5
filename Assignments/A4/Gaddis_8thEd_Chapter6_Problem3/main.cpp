/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To find out the winning division out of the four divisions
 * Created on July 11, 2015, 2:51 PM
 */

//System Libraries
#include <iostream>     //I/O Library
#include <iomanip>      //Parametric Library
#include <string>       //String Library
using namespace std;    //I/O Library under standard name space
//User Libraries
//Global Constants
//Function Prototypes
float gtSales(string);//Get Sales
void highest(float, float, float, float);//Find Highest
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    float nEast;
    float sEast;
    float nWest;
    float sWest;  
//Output heading title
    cout << setw(37) << "* Winning Division *\n";
    cout << setw(37) << "--------------------\n";
    cout << "This program calculates which division of a company had the"
            "\ngreatest sales this quarter.\n";
//Obtain Sales for each division
    for(int i = 1; i <= 4; i++)
    {
        switch(i)
        {
            case 1:
               nEast = gtSales("Northeast");
               break;
            case 2:
               sEast = gtSales("Southeast");
               break;
            case 3:
               nWest = gtSales("Northwest");
               break;
            case 4:
               sWest = gtSales("Southwest");
               break;
        }  
    }
//A function call to the find the highest value
    highest(nEast, sEast, nWest, sWest);
//Exit stage right!    
    return 0;
}

float gtSales(string name)
{
//Declare variables
    float sales;
    
//Prompt user for input
    cout << "Enter the " << name << " division's total sales this quarter: ";
    cin >> sales;
    
//Validate Input
    while(sales < 0)
    {
        cout << "\nERROR: Total sales must be a nonnegative number.\n"
                "Re-enter the total sales: ";
        cin >> sales;
    }   
    
//Return the value
    return (sales);
}

void highest(float nEast, float sEast, float nWest, float sWest)
{   
//Find the division with the highest sales
    cout << endl;
    cout << setprecision(2) << fixed;
    if(nEast > sEast && nEast > nWest && nEast > sWest)
    {
        cout << "Northeast Division: $" << nEast << endl;
    }
    else if(sEast > nEast && sEast > nWest && sEast > sWest)
    {
        cout << "Southeast Division: $" << sEast; 
    }
    else if(nWest > nEast && nWest > sEast && nWest > sWest)
    {
        cout << "Northwest Division: $" << nWest; 
    }
    else
    {
        cout << "Southwest Division: $" << sWest; 
    }
}