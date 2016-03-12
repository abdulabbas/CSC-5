/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on October 29, 2013, 10:09 AM
 */

//Libraries
#include <iomanip>
#include <iostream>
using namespace std;

//No Global Constants

//Function Prototypes
void input(int &,int &);
char cnvsn(int &);
void output(int,int,char);

int main(int argc, char** argv) {
    //Declare the variables
    int hours,minutes;
    //Input the hours and minutes
    input(hours,minutes);
    //Convert the hours and return Morning or Afternoon
    char ampm=cnvsn(hours);
    //Output the time
    output(hours,minutes,ampm);
    //Exit stage right
    return 0;
}

void output(int h,int m,char ap){
    //Display the results
    if(ap=='P'){
        cout<<"Military time = "<<h+12;
    }else{
        cout<<"Military time = ";
        if(h<10)cout<<"0";
        cout<<h;
    }
    cout<<":";
    if(m<10)cout<<"0";
    cout<<m<<endl;
    cout<<"Standard time = "<<h<<":";
    if(m<10)cout<<"0";
    cout<<m<<" "<<ap<<"M"<<endl;
}

char cnvsn(int &h){
    char pa='A';
    if(h>12){
        pa='P';
        h-=12;
    }
    return pa;
}

void input(int &h,int &m){
    //Prompt the user for inputs
    char colon;
    do{
        cout<<"Type in time to convert"<<endl;
        cout<<"from military 24 hour time to AM-PM"<<endl;
        cout<<"Hours in the range of 0 to 24"<<endl;
        cout<<"Minutes in the range of 0 to 59"<<endl;
        cout<<"Example type in 18:30 hours to give 6:30 PM"<<endl;
        //Read in the hour
        //Declare and Read in the colon
        //Read in the minutes
        cin>>setw(2)>>h>>colon>>setw(2)>>m;
    }while(h>24||m>59||h<0||m<0);
}