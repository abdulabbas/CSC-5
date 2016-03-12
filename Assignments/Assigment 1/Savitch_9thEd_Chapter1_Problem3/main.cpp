/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: Take in values then return a total
 * Created on June 27, 2015, 7:09 PM
 */

#include <iostream>//File I/O

using namespace std;//std name space --> iostream

//User Libraries
//Global constants
//Function Prototypes
//Execution Begins here!
int main(int argc, char** argv) {
//Declare variables
    int quarter;
    int dime;
    int nickel;
    int q;
    int d;
    int n;
    int num1;
    int num2;
    int num3;
    int total;
//Process input here
    q = 25;
    d = 10;
    n = 5;
//Output here
cout<<"Press return after entering a number.\n";
cout<<"Enter the number of quarters:\n";
cin>>num1;
quarter = q * num1;
cout<<"Press return after entering a number.\n";
cout<<"Enter the number of dimes:\n";
cin>>num2;
dime = d * num2;
cout<<"Press return after entering a number.\n";
cout<<"Enter the number of nickels:\n";
cin>>num3;
nickel = n * num3;
total = quarter + dime + nickel;
cout<<"The total is "<<total<<" cents."<<endl;
//Exit stage right!
    return 0;
}
