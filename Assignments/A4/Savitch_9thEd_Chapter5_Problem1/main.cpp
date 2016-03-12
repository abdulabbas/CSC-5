/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To covert th 24 hour time format to the 12 hour time format
 * Created on July 11, 2015, 7:08 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
void input (int& hour, int& mins);//Input 24 hour time
void convrt(int& hour, int& mins, char& ampm);//Converts the input time into a 12 hour time
void output(int& hour, int& mins, char& ampm);//Output the  12 hour time
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    int hour, mins;
    char ampm, ans;
    do{
    //Function Call       
    input (hour, mins);         //Calls Input Function
    convrt(hour, mins, ampm);   //Calls Conversion Function
    output(hour, mins, ampm);   //Calls Output Function
    cout<<"Would you like to perform the conversion again?\n"; //Gives user the option to do another conversion
    cout<<"Enter Y for yes, N for no: ";
    cin>>ans;
    cout<<"\n";
    }while (ans=='y'||ans=='Y');//If anything other than Y, program exits
//Exit stage right!
    return 0;
}

//Function for 24 Hour Input Time
void input(int& hour, int& mins){
    cout<<"Enter your 24 hour format time. Hours then minutes."<<endl;
    cout<<"H: ";
    cin>>hour;
    cout<<"M: ";
    cin>>mins;
    cout<<endl;
    cout<<"You have entered the 24-hour format time of: ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins<<endl;}
//End of 24 Hour Input Time Function

//Start of Conversion Function
void convrt(int& hour, int& mins, char& ampm){  
    //The main purpose of this function is to assign AM and PM to the converted time
    if (hour>12&&hour<=23){     //If hours are between 12-23
        hour=hour-12;
        ampm='P';               //It wouldn't let me have a multi-character constant so I only put "P/A"
    }else if (hour==12){        //Then below in the output function I included the "M" that is to be added to the end of the sentence
        ampm='P';
    }else if(hour==0){          //Makes 0 equivalent to 12 ex: input=0 output=12
        hour=12;
        ampm='A';
    }else if (hour<12&&hour>=00){ //If hours are between are between 0-12
        ampm='A';
    }else if(hour<=24||mins>59){  //Used for invalid entries that don't fit 24 hour clock
        cout<<"\n";
        cout<<"Sorry that was not a valid entry! Please try again.";
    }
//End of Conversion Function
}

//Start of Output Time Function
void output(int& hour, int& mins, char& ampm){
    cout<<endl;
    if(hour<=12&&mins<=59){         //This accounts for the fact that the 12-hour clock 
    cout<<"The 12-hour format is "; //and 24-hour clock are the same up until 12, so it doesn't convert anything if the hour<=12
    cout<<hour<<":"<<setw(2)<<setfill('0')<<mins<<" "<<ampm<<"M"<<endl; 
    }
//End of Output Time Function
}

