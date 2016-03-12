/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Created on June 23, 2015, 11:06 PM
 * Purpose: To show the Military Budget
 */

#include <iostream>//File I/O

using namespace std;//std Namespace --> iostream

//User Libraries

//Global Constants
const unsigned char CNVPCT = 100;//Conversion to Percentage

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {

//Declare Variables
    float fedBudg;  //Federal Budget in $'s
    float milBudg;  //Military Budget in $'s
    float milPctg;  //Percentage of federal spending on military 
//Initialize values here
    fedBudg = 3.80e12f;  //3.8 trillion dollars
    milBudg = 6.06e11f;  //606 billion dollars
//Calculate the precent
    milPctg = (milBudg/fedBudg)*CNVPCT;  //Percentage of the Federal Budget
    //Output the results 
    cout << "Percentage of the Federal Budget spent on the Military = " 
         << milPctg << " %" << endl;
    
    //Exit Stage Right!
    return 0;
}

