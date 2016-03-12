/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: To calculate the selling price of the circuit board
 * Created on June 27, 2015, 1:11 AM
 */

#include <iostream>//File I/O

using namespace std;//std name space --> iostream
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins here!
int main(int argc, char** argv) {
//Declare variables here
   float profit;//Holds the percentage of the profit 
   float cost;//Holds the cost of the item 
   float price;//Holds the actual selling price of that item
   float mp;//Holds the mark up on the item
//Process input here
   profit = 0.35f;//The percentage of the profit 
   cost = 14.95f;//The cost of the item
   mp = cost * profit;//The mark up on the item
   price = cost + mp;//The actual selling price of that item
//Output here
   cout<<"The selling price is $"<<price<<endl;
//Exit stage right!    
    return 0;
}

