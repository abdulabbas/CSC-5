/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: A Deep Fried Twinkie Vending Machine
 * Created on July 9, 2015, 10:12 PM
 */

//System Libraries
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    float coinIn;   //This Holds The Inserted Coin Amount
    float totl;     //This Holds The Total
    float chng;     //This Holds The Returned Change Amount
// Display a Prompt for the User Input
    cout<<"Deep Fried Twinkies- $3.50";
    cout<<"\n";
    cout<<"Vending Machine Only Accepts The Following Coins";
    cout<<"\n";
    cout<<"$Dollar Coins, Quarters, Dimes, and Nickels.";
    cout<<"\n";
// Calculations and Set Decimal Precision
    totl=0;
    do{
        cout.setf(ios::fixed);
        cout.setf(ios::showpoint);
        cout.precision(2); 
//This is a Prompt so user can input the coins into the machine       
        cout<<"Insert Coin: ";       
    cin>>coinIn;
        totl=totl+coinIn;
//This displays the amount that has been input to the machine        
        cout<<"You have inserted $";
    cout<<totl;
    cout<<"\n";
//To Calculate the total amount of change to return to the User    
    }while (totl<3.50);
    chng=totl-3.50;
       if (chng>0){
       cout<<"\n";
       cout<<"Your change is: $";
       cout<<chng;
       cout<<"\n";
//Give The User their Twinkie    
       cout<<"\n";       
       cout<<"Enjoy your deep-fried twinkie!";
       cout<<"\n";
       }else
       {
 //Give The User their Twinkie            
           cout<<"\n";
           cout<<"Enjoy your deep-fried twinkie!";
           cout<<"\n";
       }
//Exit Stage Right
    return 0;
}