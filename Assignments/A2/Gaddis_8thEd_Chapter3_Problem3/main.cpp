/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: To find the average score from the five scores
 * Created on July 4, 2015, 5:35 PM
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
    float n1;
    float n2;
    float n3;
    float n4;
    float n5;
    float total;
    float avg;
//Prompt the user to input the five test scores
//Enter the first score
cout<<"Enter the first valid test score"<<endl;
cin>>n1;
//Enter the second score
cout<<"Enter the second valid test score"<<endl;
cin>>n2;
//Enter the third score
cout<<"Enter the third valid test score"<<endl;
cin>>n3;
//Enter the fourth score
cout<<"Enter the fourth valid test score"<<endl;
cin>>n4;
//Enter the fifth score
cout<<"Enter the fifth valid test score"<<endl;
cin>>n5;
//Process inputs here
total=n1+n2+n3+n4+n5;
avg=(total/5);
//The average score
//Output the results
cout<<fixed<<showpoint<<setprecision(1)<<endl;
cout<<"The average score of the five tests was "<<avg<<endl;
//Exit stage right
    return 0;
}

