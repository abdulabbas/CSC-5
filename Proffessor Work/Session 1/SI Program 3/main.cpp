/* 
 * File:   main.cpp
 * Author: Carey, Bradd
 *
 * Created on June 24, 2014
 * 
 * Purpose:
 *      Elaborate on project 1 by introducing iomanip
 *      Outputs using cout.precision and fixed to make 
 *      currency appear properly
 */

//1
#include <iostream>//2
#include <iomanip>

//3

//4

//5

//6
using namespace std;

/*
 * Gaddis 7th Edition
 * Chapter 2, Problem 4 SUPER ENHANCED:
 *      Write a program that computes the tax and tip on a restaurant bill for a patron with a
        $44.50 meal charge. The tax should be 6.75 percent of the meal cost. The tip should
        be 15 percent of the total after adding the tax. Display the meal cost, tax amount, tip
        amount, and total bill on the screen.
 */
int main(int argc, char** argv) {
    //7
    float bill;
    float tax;
    float tip;
    float total;
    string name;
    bool service = false;
    
    cout<<"||======================================||"<<endl;
    cout<<"||  Tip Calculator                      ||"<<endl;
    cout<<"||======================================||"<<endl;
    
    //8
    cout<<"||  Enter Your Bill:  $";
    cin>>bill;
    cin.ignore();
    //9
    cout<<"||  Tax percent is 6.75%"<<endl;
    tax = bill * 0.0675;
    //10
    cout<<"||  Enter gratuity percent = ";
    cin>>tip;
    cin.ignore();
    tip = bill * (tip/100.0);
    
    cout<<"||  Waiter/Waitress Name:  ";
    cin>>name;
    
    //11
    total = bill + tax + tip;
    
    //12
    if(tip>0){
        service = true;
    }
    cout.precision(2);
    cout<<fixed;
    cout<<"||======================================||"<<endl;
    cout<<"||  Bill  = $"<<bill<<endl;
    cout<<"||  Tax   = $"<<tax<<endl;
    cout<<"||  Tip   = $"<<tip<<endl;
    cout<<"||  Total = $"<<total<<endl;
    cout<<"||======================================||"<<endl;
    if(service){
        cout<<"||  Thanks for your excellent service "<<name<<endl;
    }
    else{
        cout<<"||  Next time don't do such a terrible job"<<name<<endl;
    }
    
    //13
    return 0;
}



