/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 *Purpose: To calculate the annual pay 
 * Created on June 26, 2015, 5:28 PM
 */

#include <iostream>//File I/O 

using namespace std;//std name space --> iostream

//User Libraries
// Global constants
//Function Prototypes 
//Execution Begins here!
int main(int argc, char** argv) {
//Declare variables
    float Amnt;//The amount of pay earned 
    int Prds;//The pay periods in the year
    float tAp;//The total of the annual pay 
//Inputs here    
    Amnt = 2200.0f;
    Prds = 26;
    tAp = Amnt * Prds;
//Outputs here
    cout<<"The total annual pay is $"<<tAp<<endl;
//Exit stage right!    
    return 0;
}

