/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Problem_7_V1
 * Created on July 9, 2015, 1:53 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
float ftoc(float);
float ftcItrp(float,float,float,float,float);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    
    //Loop and output all the values
    cout<<"Fahrenheit";
    cout<<"   Celsius";
    cout<<"   Celsius";
    cout<<endl;
    for(float fahren=f1;fahren<=f2;fahren++){
        cout<<fixed<<showpoint<<setprecision(2);
        cout<<setw(10)<<fahren;
        cout<<setw(10)<<ftoc(fahren);
        cout<<setw(10)<<ftcItrp(fahren,f1,f2,c1,c2);
        cout<<endl;
    }

    //Exit stage right!
    return 0;
}

float ftcItrp(float f,float f1,float f2,
                      float c1,float c2){
    return c1+(c2-c1)*(f-f1)/(f2-f1);
}

float ftoc(float f){
    return 5.0f/9*(f-32);
}