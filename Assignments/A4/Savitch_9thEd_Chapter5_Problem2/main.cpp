/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To calculate the current time and the time after a waiting period
 * Created on July 11, 2015, 6:34 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
void input(int& hour, int& mins);//Function for the inputs
void waitT(int& hour, int& mins);//Function for the wait times
void output(int& hour, int& mins);//Function for the output times
//Execution begins here!
int main(int argc, char** argv) {
//Declare Variables
    int hour, mins;//They will hold the hour and minute values entered by the user 
    char ans;//Holds the answer if the user wants to proceed with the program
    do{
//Function Call    
    input(hour, mins);//Calls the Input Function
    waitT(hour, mins);//Calls the Wait Time Function
    output(hour, mins);//Calls the Output Function
    cout<<"Would you like to recalculate your wait time?\n";//Gives the user the option to calculate another wait time
    cout<<"Enter Y for yes, N for no: ";
    cin>>ans;
    cout<<"\n";
    }while(ans=='y'||ans=='Y');//Anything other than Y will exit the program
//Exit stage right!
    return 0;
}

//Start of the Input Function
void input(int& hour, int& mins){
    cout<<"Enter the hour of the day. In 24-hour format."<<endl;
    cout<<"Hour: ";
    cin>>hour;
    cout<<"Enter your total wait time, in minutes.";
    cout<<"\n";
    cout<<"Wait Time: ";
    cin>>mins;
    cout<<endl;
//End Input Function
}

//Begin Wait Time Function
void waitT(int& hour, int& mins){
    if (mins>59){
        hour=hour+(mins/60);
        mins=(mins%60);
    }if (mins<59){
        mins=mins;
    }if(hour>23){
        hour=hour-24;
    }    
//End Wait Time Function
}

//Start Output Time Function
void output(int& hour, int& mins){
    cout<<"The time will be ";
    cout<<setw(2)<<setfill('0')<<hour<<":"<<setw(2)<<setfill('0')<<mins;
    cout<<" hours after your wait.\n";
//End Output Time Function 
}