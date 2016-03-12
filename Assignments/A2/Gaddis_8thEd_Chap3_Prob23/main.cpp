/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: To find out the end result of the transaction
 * Created on July 3, 2015, 12:13 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants 
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare the variables
    int tStock;//Holds the total amount of stocks
    float Bprice;//Holds the total cost of the shares at the buying transaction
    float Bcmsn;//Holds the commission paid to the broker in the buying transaction
    float Bcost;//Holds the cost of one share at the buying phase of the transaction
    float profit;//Holds the profit made by the transactions
    float Sprice;//Holds the total cost of the shares at the selling transaction
    float Scmsn;//Holds the commission paid to the broker at the selling transaction
    float Scost;//Holds the cost of one share at the selling phase of the transaction
    float cmsn;//Hold the total cost of the commission paid to the Stock broker
    float total;//Holds the total cost of the stocks
//Process the Inputs Here
    tStock=1000;//Total amount of stocks for the transactions
    Bcost=45.50f;//Price of one share in $
    Bprice=tStock*Bcost;//The cost of the stocks when they were bought
    Bcmsn=Bprice*0.02f;//The commission given to the broker at the buying phase of the transaction
    Scost=56.90f;//The price of one share in the selling phase
    Sprice=tStock*Scost;//The cost of the stocks at the selling phase
    Scmsn=Sprice*0.02f;//The commission given to the broker at the selling phase
    cmsn=Bcmsn+Scmsn;//The total commission paid to the Stock broker
    total=Bprice+Sprice;//The total cost of the stocks
    profit=total-cmsn;//The total profit after paying off the two commissions
//Output the results
    cout<<"The total profit made by the transaction is $"<<profit<<endl;
    cout<<"The total amount that Joe paid for the stocks is $"<<total<<endl;     
    cout<<"The commission paid to the broker at the buying phase is $"<<Bcmsn<<endl;
    cout<<"The commission paid to the broker at the selling phase is $"<<Scmsn<<endl;
    cout<<"The total commission is $"<<cmsn<<endl;     
//Exit stage right!    
    return 0;
}

