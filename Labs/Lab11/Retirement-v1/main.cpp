/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Created on July 8, 2015, 10:45 AM
 */
//Retire_V1
#include <iostream>
using namespace std;

//User Libraries
//Function Prototypes
//Global constants
//Execution begins here
int main(int argc, char** argv) {
//Declare Variables
    float salary=90000;//Average Salary
    float invRate=0.05f;//Investment Rate
    float savReq;//Savings required
    float pDep=0.10f;//Of your gross Salary
    float deposit;//Yearly deposit in $
    float savings=0;//Initial Savings
    float year=0;//Start at year 0
//Calculate required savings
    savReq=salary/invRate;
//Loop to calculate when Retirement is possible    
    do{
        deposit=pDep*salary;//Deposit based on salary 
        savings*=(1+invRate);//Earning based upon investment rate
        savings+=deposit;//Add deposit after earning investment rate
        year++;//Adds 1 year
    }while(savings<savReq);//When we have enough to retire then exit the loop
//Output results
   cout<<"I can retire in "<<year<<"(years) with $"<<savings<<" in savings !!!"<<endl; 
//Exit stage right    
    return 0;
}
