/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: Country Club Membership Charges
 * Created on July 10, 2015, 10:56 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Functions
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float tax=0.04f,membr=2500, years,tot,fin; //Tax,Membership,Years
    while(years<6){
        cout<<"Membership fee is 2,500 for a year."<<endl
            <<"It will increase 4% each year."<<endl;
        tot=tax*membr*years;
        years++;
        fin=tot+membr;
        cout<<fin<<endl;
    }
//Exit stage right!    
    return 0;
}

