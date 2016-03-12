/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Created on July 6, 2015, 12:41 PM
 * Purpose: To find out the savings
 */

//System Library 
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Library

//Global Constant

//Function Prototypes
float save1(float,float,int);
float save2(float,float,int);
float save3(float,float,int);
float save4(float,float,int);
float save5(float,float,int);
float save5(float,float,float);
float save6(float,float,int);
float save7(float,float,int);
float save8(float,float,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables
    float pv=1e4f;//Present Value in $'s
    float i=5e-2f;//Interest Rate 
    int nCmpd=50; //Number of compounding periods (yrs)
    
    //Output the future value of our savings
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"Present Value = $"<<pv<<endl;
    cout<<"Interest Rate =  "<<i*100<<"%"<<endl;
    cout<<"Years to save =  "<<nCmpd<<"(yrs)"<<endl;
    cout<<"Savings 1 =     $"<<save1(pv,i,nCmpd)<<endl;
    cout<<"Savings 2 =     $"<<save2(pv,i,nCmpd)<<endl;
    cout<<"Savings 3 =     $"<<save3(pv,i,nCmpd)<<endl;
    cout<<"Savings 4 =     $"<<save4(pv,i,nCmpd)<<endl;
    cout<<"Savings 5 =     $"<<save5(pv,i,nCmpd)<<endl;
    float fnCmpd=nCmpd;
    cout<<"Same savings 5 but with n as a float"<<endl;
    cout<<"Savings 5 =     $"<<save5(pv,i,fnCmpd)<<endl;
    cout<<"Bank Savings 6 =     $"<<save6(pv,i,nCmpd)<<endl;
    cout<<"The Peoples Bank Savings 7 =     $"<<save7(pv,i,nCmpd)<<endl;
    cout<<"The More Peoples Bank Savings 8 =     $"<<save8(pv,i,nCmpd)<<endl;
    
    //Exit stage right
    return 0;
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save7(float p,float i,int n){
    //Loop to determine the answer
    for(int year=1;year<=n;year++){
        p*=(1+i);
        //Scale to pennies and round
        p=static_cast<int>(p*100+0.5)/100.0f;
    }
    return p;
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save8(float p,float i,int n){
    //Loop to determine the answer
    for(int year=1;year<=n;year++){
        p*=(1+i);
        //Scale to pennies and round up
        p=static_cast<int>(p*100+1.0)/100.0f;
    }
    return p;
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save6(float p,float i,int n){
    //Loop to determine the answer
    for(int year=1;year<=n;year++){
        p*=(1+i);
        //Scale to pennies.
        p=static_cast<int>(p*100)/100.0f;
    }
    return p;
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save5(float p,float i,float n){
    //Loop to determine the answer
    float power=1.0f;
    for(int year=1;year<=n;year++){
        power*=(1+i);
    }
    cout<<"n is a float"<<endl;
    return p*power;
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save5(float p,float i,int n){
    //Loop to determine the answer
    float power=1.0f;
    for(int year=1;year<=n;year++){
        power*=(1+i);
    }
    cout<<"n is an integer"<<endl;
    return p*power;
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save4(float p,float i,int n){
    //Call ourself aka recursion
    if(n<=0)return p;
    return save4(p,i,n-1)*(1+i);
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save3(float p,float i,int n){
    //Use the exp and log function
    return p*exp(n*log(1+i));
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save2(float p,float i,int n){
    //Use the power function
    return p*pow(1+i,n);
}

//Savings Function
//Inputs
//p->Present Value in $'s
//i->Interest Rate %/year
//n->Compounding periods (yr)
float save1(float p,float i,int n){
    //Loop to determine the answer
    for(int year=1;year<=n;year++){
        p*=(1+i);
    }
    return p;
}

