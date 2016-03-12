/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: Savitch-8thEd-Chap2-Prob3
 * Created on July 4, 2015, 11:29 PM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants 
const float pyInc=7.6e-2, mths=12.0;
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
        float ansal, nusal, nuMthpy, retPy;
        char ans;
        
        do{
           //Input variables
           cout<<"Your company is willingly giving you a 7.6% "<<endl;
           cout<<"increment to your salary for the past six months."<<endl;
           cout<<"To calculate your new annual salary"<<endl;
           cout<<endl;
           cout<<"Input you current annual salary: $";
           cin>>ansal;
           cout<<endl;
           
           //Calculate 
           nusal=ansal+(ansal*pyInc); //New Annual Salary
           nuMthpy=nusal/mths; //New Monthly Salary
           retPy=((ansal*pyInc)/mths)*6; //Retroactive Pay
           
           //Output Salary
           cout<<"Your new annual salary is: $"<<nusal<<endl;
           cout<<"and your new monthly salary is: $"<<nuMthpy<<endl;
           cout<<"Your bonus pay for the last six months is: $"<<retPy<<endl; 
           cout<<endl;
           cout<<"If you would like to restart the process, "<<endl;
           cout<<"Either Press (Y) for yes or (N) for no, then press return:";
           cin>>ans;
           cout<<endl;
   }while (ans == 'y' || ans =='Y');
   
    //Exit Stage Right!
    return 0;
}

