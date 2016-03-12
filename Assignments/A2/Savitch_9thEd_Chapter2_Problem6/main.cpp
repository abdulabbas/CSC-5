/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: Savitch-9thEd-Problem6-Chap2
 * Created on July 4, 2015, 11:33 PM
 */

#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare the variables 
    int depend;
    float payRate,hrsWrkd;
    //Input values
    cout<<"Number of dependents = "<<endl;
    cin>>depend;
    cout<<"Pay rate = "<<endl;
    cin>>payRate;
    cout<<"Hours Worked = "<<endl;
    cin>>hrsWrkd;
    //Declare constants 
    float ssTax=0.06f,fedTax=0.14f,stTax=0.05f;
    float uDues=10.0f,ovTime=40.0f,ovRate=1.5f;
    float exHlth=35.0f,nDepend=3;
    //Declare,calculate and output the gross Pay
    float grsPay=hrsWrkd*payRate;
    if(hrsWrkd>ovTime)grsPay+=(hrsWrkd-ovTime)*payRate*(ovRate-1);
    cout<<"Gross Pay = $"<<grsPay<<endl;
    //Declare, calculate and output the taxes, Union Dues, Health Ins
    float ss=grsPay*ssTax;
    cout<<"You pay $"<<ss<<" in Social Security Tax"<<endl;
    float fed=grsPay*fedTax;
    cout<<"You pay $"<<fed<<" in Federal Tax"<<endl;
    float st=grsPay*stTax;
    cout<<"You pay $"<<st<<" in State Tax"<<endl;
    cout<<"You pay $"<<uDues<<" in Union Dues"<<endl;
    float hlthIns=0;
    if(depend>=nDepend)hlthIns+=exHlth;
    cout<<"You pay $"<<hlthIns<<" in Health Insurance"<<endl;
    //Declare, calculate and output the Net Pay
    float netPay=grsPay-ss-fed-st-uDues-hlthIns;
    cout<<"Your Net Pay $"<<netPay<<endl;

    //Exit stage right
    return 0;
}
