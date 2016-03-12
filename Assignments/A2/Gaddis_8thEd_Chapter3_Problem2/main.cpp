/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: To find the income made by the tickets sold
 * Created on July 4, 2015, 4:32 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare variables
    float total;//Holds the total income made by the tickets sold
    float A;//Holds the cost of a Class A seat
    float B;//Holds the cost of a Class B seat
    float C;//Holds the cost of a Class C seat
    int nA;//Holds the number of tickets sold for Class A
    int nB;//Holds the number of tickets sold for Class B
    int nC;//Holds the number of tickets sold for Class C
//Prompt the user to input the number of tickets sold in the 3 categories
//The first value input by the user    
    cout<<"Please enter a valid number value for the total Class A seats sold"<<endl;
    cin>>nA;//Holds the value entered by the user for Class A seats sold
//The second value input by the user
    cout<<"Please enter a valid number value for the total Class B seats sold"<<endl;
    cin>>nB;//Holds the value entered by the user for Class B seats sold
//The third value input by the user
    cout<<"Please enter a valid number value for the total Class C seats sold"<<endl;    
    cin>>nC;//Holds the value entered by the user for Class C seats sold
//Process inputs here
    A=15.00f;
    B=12.00f;
    C=9.00f;
    total=(nA*A)+(nB*B)+(nC*C);
//Output the results 
    cout<<fixed<<showpoint<<setprecision(2)<<endl;    
    cout<<"The income generated from the ticket sales was $"<<total<<endl;
//Exit stage right    
    return 0;
}

