/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: To find the amount need for retirement
 * Created on July 8, 2015, 12:16 PM
 */
//Retire_V2
///System Library
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
void heading(float,float,float,float);
void table(int,string,int,double,float,float);
void retire(float,float,float,float &,float &,double &);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float  salary=100000; //Average Salary in $'s
    float  invRate=0.06f; //Investment Rate -> see Calif Muni Bonds
    float  savReq;        //Savings required at retirement
    float  pDep=0.20f;    //Of your gross Salary -> Percentage Deposited 
    float  deposit;       //Yearly deposit in $'s
    double savings=0;     //Initial Savings at start of Employment
    int    year=0;        //Start at year 0
    string date="06/01/"; //Assume you can start saving when you graduate
    int    gradYr=18;     //Graduation
    float  interst=0.0f;  //Yearly Interest
   
    //Calculate required savings
    savReq=salary/invRate;
    
    //Display the heading
    heading(salary,invRate,pDep,savReq);
    
    //Loop to calculate when Retirement is possible
    table(year,date,gradYr,savings,interst,salary*pDep);
    do{
       
        retire(salary,invRate,pDep,interst,deposit,savings);
        year++;//Proceed to the next year
        gradYr++;
        table(year,date,gradYr,savings,interst,deposit);
    }while(savings<savReq);//When we have enough to retire then exit the loop
    
    //Display the results
    cout<<fixed<<showpoint<<setprecision(2)<<endl;
    cout<<"I can retire in "<<year<<" (years) with $"
            <<savings<<" in savings!!!"<<endl;
    
    //Exit Stage Right!
    return 0;
}

/****************************************************************
 *********************  Table   *********************************
 ****************************************************************
 *Inputs
 *  y->Year at which you started saving, a simple counter
 *  d->Month and Day graduated
 *  g->Graduation year
 *  i->Interest earned during the year
 * yd->Yearly Deposit in $'s
 *  s->Savings in $'s
 */
void table(int y,string d,int g,double s,float i,float yd){
    cout<<fixed<<showpoint<<setprecision(2);
    cout<<setw(4)<<y;
    cout<<setw(8)<<d;
    cout<<g;
    cout<<setw(12)<<s;
    cout<<setw(10)<<i;
    cout<<setw(11)<<yd;
    cout<<endl;
}


/****************************************************************
 *********************  Retire  *********************************
 ****************************************************************
 *Inputs
 *  salary->Salary in $'s
 *  invRate->Investment Rate
 *  pDep->Percent of Salary to deposit
 * Outputs
 *  deposit->Yearly Deposit in $'s
 */
void retire(float salary,float invRate,float pDep,
     float &interst,float &deposit,double &savings){
     //Calculate the current year results
     //Yearly Deposit
     deposit=pDep*salary; //Deposit based on salary
     deposit=static_cast<int>(deposit*100)/100.0f;//Truncate penny
     //Update savings with interest and deposit
     savings+=interst;//Earning based upon investment rate
     savings+=deposit;    //Add the deposit after earning interest
     //Yearly Interest
     interst=savings*invRate;//Interest based on investment rate
     interst=static_cast<int>(interst*100)/100.0f;//Truncate penny
}

/****************************************************************
 ********************* Heading **********************************
 ****************************************************************
 *Inputs
 *  s->Salary in $'s
 *  i->Investment Rate
 *  p->Percent of Salary to deposit
 *  r->Savings needed to retire
 */
void heading(float s,float i,float p,float r){
    cout<<"Retirement Calculator based on Muni-Bond Investment"<<endl;
    cout<<"               Salary     = $"<<setw(7)<<s<<endl;
    cout<<"      Investment Rate     = "<<setw(7)<<i*100<<"%"<<endl;
    cout<<"      Yearly Deposit Rate = "<<setw(7)<<p*100<<"%"<<endl;
    cout<<fixed<<setprecision(0);
    cout<<"Savings needed to retire -> $"<<setw(7)<<r<<endl;
    cout<<endl;
    cout<<"                   Beg Yr   End of Yr  End of Yr"<<endl;
    cout<<"Year    Date       Savings   Interest   Deposit"<<endl;
}