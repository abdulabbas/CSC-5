/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Created on July 4, 2015, 1:33 AM
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std; //std namespace --> iostream
 
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {

    //Declare Variables
    float exer;   //User enters how many exercises they have done
    float sR;     //Score received on exercise
    float pos;    //Total Points received on exercise
    float scr;    //Score received on exercise added up
    float totScr; //Percentage received on average of exercises 
    float totPnt; //Total Points received on exercise added up
 
    //Ask for amount of exercises
    cout<<"How many exercises? ";
    cin>>exer;
 
    //Loop to find score for amount of exercises
    for(int i=0;i<exer;i++){
        //Process
        cout<<"Score received for exercise: ";
        cin>>sR;
        scr+=sR;
        cout<<"Total points possible for exercise: ";
        cin>>pos;
        totPnt+=pos;
        cout<<endl;
    }
    //Output results
    totScr=(scr/totPnt)*100;
    cout<<fixed<<setprecision(2);
    cout<<"Your total is "<<scr<<" out of "<<totPnt<<", or "<<totScr<<"%"<<endl;
 
    //Exit Stage Right!
    return 0;
}
 

