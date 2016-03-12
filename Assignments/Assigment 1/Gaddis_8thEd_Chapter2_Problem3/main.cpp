/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 *Purpose: To Calculate the sales tax
 * Created on June 26, 2015, 3:30 PM
 */

#include <iostream>//File I/O

using namespace std;// std name space --> iostream

//User Libraries
//Global Constants
//Function Prototypes
int main(int argc, char** argv) {
//Declare variables here
   float total;//Total sales tax 
   float st;//Sales tax
   float state;//State sales tax
   float county;//County sales tax
   int price;//The cost of the Purchase
//Process input here
   state = 0.04;//Percentage of the state sales tax
   county = 0.02;//Percentage of the county sales tax
   price = 95;//The Purchase Price in dollars
   st = state + county;//To get the sales tax percent
   total = price * st;//To get the total sales tax 
//Output here
   cout<<"Total sales tax was $ "<<total<<endl;//Outputs the total sales tax
//Exit stage right!    
    return 0;
}

