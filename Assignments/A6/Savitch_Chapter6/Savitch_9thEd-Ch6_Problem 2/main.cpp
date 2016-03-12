/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Savitch Chapter 6 9thEd Problem 2 
 * Created on July 23, 2015, 12:15 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;


//User Libraries
//Global Constants
//Function prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
ifstream infile;
ofstream outfile;
infile.open("input.dat");
int next, sum=0, count=0;
while (infile >> next){
sum=sum+next;
count++;
}
cout<<"\n";
cout<<"The average is "<<static_cast<float>(sum/count);
cout<<"\n";
infile.close( );
//Exit Stage Right
return 0;

}

