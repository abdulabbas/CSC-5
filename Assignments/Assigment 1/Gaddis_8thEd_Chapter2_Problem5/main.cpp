/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas 
 *Purpose: To Calculate the Average of the values 
 * Created on June 26, 2015, 4:20 PM
 */

#include <iostream>//File I/O 

using namespace std;//std name space --> iostream 
//User Libraries
//Global constants
//Function Prototypes 
//Execution Begins here!
int main(int argc, char** argv) {
//Declare variables here
    int a;//First
    int b;//Second
    int c;//Third
    int d;//Fourth 
    int e;//Fifth
    int sum;//Sum of the values 
    float Avg;//Average of the values 
//Process input here
    a = 24;
    b = 28;
    c = 32;
    d = 33;
    e = 37;
    sum =  a + b + c + d + e;//To calculate the Sum of the values 
    Avg = sum / 5.0f;//Calculates the Average of the values
//Output here
    cout<<"The Sum is "<<sum<<endl;//Outputs the Sum
    cout<<"The Average is "<<Avg<<endl;//Outputs the Average
//Exit stage right!    
    return 0;
}

