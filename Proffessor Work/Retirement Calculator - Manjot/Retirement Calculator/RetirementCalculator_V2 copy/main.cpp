/* 
 * File:   main.cpp
 * Author: Manjot Dhindsa
 * Created on July 8, 2015, 9:30 PM
 * Purpose: Retirement Calculator
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std; //std namespace --> iostream

//User Libraries

//Global constants

//Function Prototypes
float retire(float &,float &,float &,float &,float &,int &,float &);
void  heading();
void  prompt(float &,float &,float &,int &,int &,int &);
float table(int &,int &,float,float &,float &,float &,
            float &,float &,float &,int &,int &,int &);

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare Variables
    float salary;    //Average Salary in $'s
    float invRate;   //Investment Rate -> see Calif Muni Bonds
    float savReq;    //Savings required at retirement
    float pDep;      //Of your gross Salary -> Percentage Deposited
    float deposit;   //Yearly deposit in $'s
    float savings=0; //Initial Savings at start of Employment
    int   year   =0; //Start at year 0
    int   mm,dd,yy;  //User enters month day and year
    int   start  =0; //For the year in the table
    int   date;      //date++ gets repeated in the for loop
    float intRst =0; //Interest Rate
    
    //Prompt user for salary, investment rate, and Percentage Deposited.
    prompt(salary,invRate,pDep,mm,dd,yy);
    
    //Calculate required savings
    invRate=invRate/100;
    pDep=pDep/100;
    savReq=salary/invRate;
    
    //Calculate when we can retire
    retire(deposit,savings,pDep,salary,invRate,year,savReq);
    
    //Heading for the Table.
    heading();
    
    //The table for each year till retirement
    table(start,date,savings,intRst,salary,savReq,
          pDep,invRate,deposit,mm,dd,yy);
    
    //Exit Stage Right!
    return 0;
}

//Prints out my table
float table(int &start,int &date,
            float savings,float &intRst,
            float &salary,float &savReq,
            float &pDep,float &invRate,
            float &deposit,int &mm,int &dd,int &yy){
    //The table for each year for 50 years
    savings=0;
    do{
        cout<<setw(4)<<start<<setw(9)<<mm<<"/"<<dd<<"/"<<yy
            <<setw(13)<<savings<<setw(14)<<intRst<<setw(17)
            <<deposit<<endl;
        savings*=(1+invRate);
        savings+=deposit;
        intRst+=savings*invRate;
        start++;
        yy++;
    }while(savings<=savReq);
    cout<<setw(4)<<start<<setw(9)<<mm<<"/"<<dd<<"/"<<yy
            <<setw(13)<<savings<<setw(14)<<intRst<<setw(17)
            <<deposit<<endl;
}

//Pass by reference (&) so that it will continue on after the function
void prompt(float &salary,float &invRate,float &pDep,
            int &mm,int &dd,int &yy){
    //Prompt user for salary, investment rate, and Percentage Deposited.
    cout<<"Enter your salary for the year\n$";
    cin>>salary;
    cout<<"Ok now enter your Investment Rate\n%";
    cin>>invRate;
    cout<<"Also enter the Percentage you would like to "
          "deposit from your gross\nsalary\n%";
    cin>>pDep;
    cout<<"Lastly enter the date at which you start depositing."
          " (month day year)\n";
    cin>>mm>>dd>>yy;
    cout<<endl;
}

//Heading for the table we are going to make
void  heading(){
    //Heading for the Table.
    cout<<"Year        Date         Savings        "
          "Interest        Deposit"<<endl;
}

//Function to find when we can retire
float retire(float &deposit,float &savings,float &pDep,
             float &salary, float &invRate,int &year, 
             float &savReq){
    //Loop to calculate when retirement is possible
    do{
        deposit=pDep*salary;  //Deposit based on salary
        savings*=(1+invRate); //Based upon investment rate
        savings+=deposit;     //Add the deposit after earning interest        
        year++;
    }while(savings<savReq);   //When we have enough to retire then exit the loop

    //Display the results
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<"I can retire in "<<year<<" years with $"
        <<savings<<" in savings!!!"<<endl;
    cout<<endl;
}
