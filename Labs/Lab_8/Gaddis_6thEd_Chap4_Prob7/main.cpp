/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: How many years,months,etc
 * Created on July 2, 2015, 1:25 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    int nSecs;
    int yrs,mnths,weeks,days,hrs,min,secs;
    
    //Prompt for the number of seconds
    cout<<"How many seconds to convert?"<<endl;
    cin>>nSecs;
    cout<<"The number of seconds to convert = "<<nSecs<<"(secs)"<<endl;
    
    //Calculate the values
    secs=nSecs%60; //How many seconds
    nSecs/=60;     //Now determine minutes
    min=nSecs%60;  //How many minutes
    nSecs/=60;     //Now determine hours
    hrs=nSecs%24;  //How many hours
    nSecs/=24;     //Now determine days
    days=nSecs%7;  //How many days
    nSecs/=7;      //Now determine weeks
    weeks=nSecs%4; //How many weeks
    nSecs/=4;      //Now determine months
    mnths=nSecs%12;//How many months
    yrs=nSecs/12;  //How many years
    
    //Output the results
    cout<<"The number of years   = "<<yrs<<endl;
    cout<<"The number of months  = "<<mnths<<endl;
    cout<<"The number of weeks   = "<<weeks<<endl;
    cout<<"The number of days    = "<<days<<endl;
    cout<<"The number of hours   = "<<hrs<<endl;
    cout<<"The number of minutes = "<<min<<endl;
    cout<<"The number of seconds = "<<secs<<endl;
    
    //Check result
    cout<<endl<<"As a check = ";
    cout<<((((((yrs*12+mnths)*4+weeks)*7+days)*24+hrs)*60+min)*60+secs);
    cout<<"(secs)";

    //Exit stage right!
    return 0;
}

