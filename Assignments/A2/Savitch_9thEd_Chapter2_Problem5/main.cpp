/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: Savitch-9thEd-Prob5-Chap2
 * Created on July 4, 2015, 11:38 PM
 */

#include <iostream>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float Numoppl;//Number of people attending meeting
    float MaxRcap;//Maximum room capacity according to fire law regulation
    float people;
    //Prompt user for inputs
    cout<<"What is the number of people attending a meeting?";
    cin>>Numoppl;
    cout<<"What is the maximum room capacity according to fire law regulations?";
    cin>>MaxRcap;
    //Calculate if meeting is able to start
    if(Numoppl<MaxRcap){
        cout<<"Meeting can take place and additional people may attend.\n";
        people=MaxRcap-Numoppl;
        cout<<"How many additional people may attend?";
        cout<<people<<endl;
       }
    if(Numoppl>MaxRcap){
        cout<<"Meeting can not take place and people must be excluded until ";
        cout<<"maximum room capacity is reached.";
        people=Numoppl- MaxRcap;
        cout<<people<<" people is how many people that are going to be excluded from this meeting"<<endl;
       }
       
    return 0;
}

