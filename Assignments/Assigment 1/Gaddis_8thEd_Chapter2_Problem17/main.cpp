/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: To find out three things
 * Created on June 27, 2015, 10:42 AM
 */

#include <iostream>//File I/O

using namespace std;//std name space --> iostream

//User Libraries 
//Global constants
//Function Prototypes
//Execution Begins here!
int main(int argc, char** argv) {
//Declare variables 
    int tStock;//Holds the total amount of stock brought
    float price;//Holds the price of one stock
    float cost;//Holds the cost of the stocks
    float cmsn;//Holds the commission that the stock broker gets
    float total;//Holds the total amount paid
//Process Input here    
    tStock = 750;//The amount of stock bought
    price = 35.00f;//The cost of one stock
    cost = tStock * price;//The cost of the stocks 
    cmsn = cost * 0.02f;//The commission of the stock broker
    total = cmsn + cost;//The total amount paid 
//Output here
    cout<<"The cost of the stocks alone is $"<<cost<<endl;//The cost of the stocks 
    cout<<"The stock broker commission is $" <<cmsn<<endl;//The commission of the stock broker
    cout<<"The total amount paid is $" <<total<<endl;//The total amount paid 
//Exit stage right    
    return 0;
}

