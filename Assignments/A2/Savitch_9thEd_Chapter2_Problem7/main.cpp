/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Created on July 4, 2015, 1:06 AM
 */

//System Libraries
#include <iostream>
using namespace std; //std namespace --> iostream
 
//User Libraries
 
//Global constants
 
//Function Prototypes
 
//Execution Begins Here!
int main(int argc, char** argv) {
 
    //Declare Variables
    unsigned short totCost=0;        //totCost= total cost with inflation after number of years
    float numOfYr;          //numOfYr= Number of years inputed by user
    float cstItm;          //cstItm = The cost of the item inputed by user
    float rateInf;        //rateInf= Rate of Inflation inputed by user
 
    //We have the user input what the variables equal 
    cout<<"Please enter the cost of 200 Pencils:$ ";
    cin>>cstItm;
    cout<<endl;
    cout<<"OK Now enter the number of years you would "
        <<"like to purchase for: ";
    cin>>numOfYr;
    cout<<endl;
    cout<<"Finally enter the rate of inflation:% ";
    cin>>rateInf;
    cout<<endl;
 
    //percentage change to decimal
    rateInf=rateInf/100;
 
    //Continuation of the loop until numOfYr is done
    for(int i=0;i<numOfYr;i++){
        cstItm+=cstItm*rateInf;
        totCost+=cstItm;
    }
    cout<<"The total cost of the Pencils after "<<numOfYr<<
        " years with the rate of inflation is = "<<"$"<<totCost<<endl;
 
    return 0;
}