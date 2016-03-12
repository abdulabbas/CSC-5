/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: Sum of the two values are Output
 * Created on June 26, 2015, 2:41 PM
 */

#include <iostream>//File I/O

using namespace std;//std name space --> iostream

//User Libraries
//Global Constants 
//Function Prototypes
//Execution  Begins Here!
int main(int argc, char** argv) {
//Declare variables here
    int vx; //First integer
    int vd; //Second integer
    int total; //The integer that holds the Sum
//Process Input here
    vx = 50;  //First value
    vd = 100; //Second value
    total = vx + vd;  //The Sum value
//Output here
    cout<<"The total is equal to "<<total<<endl;//It will output Sum
//Exit stage right!    
    return 0;
}

