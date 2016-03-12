/* 
 * File:   main.cpp
 * Author: Carey, Bradd
 *
 * Created on June 24, 2014
 * 
 * Purpose:
 *      Work on beginning terminology by properly labeling and commenting 
 *      on this working program.  Students will appropriately comment the 
 *      same way that Dr. Lehr would expect.  Let's do this his way for 
 *      maximum points.
 */

//1
#include <iostream>//2

//3

//4

//5

//6
using namespace std;

/*
 * Gaddis 7th Edition
 * Chapter 2, Problem 4:
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
    
    //8
    bill = 44.50f;
    //9
    tax = bill * 0.0675;
    //10
    tip = bill * 0.15;
    //11
    total = bill + tax + tip;
    
    //12
    cout<<"Bill  = $"<<bill<<endl;
    cout<<"Tax   = $"<<tax<<endl;
    cout<<"Tip   = $"<<tip<<endl;
    cout<<"Total = $"<<total<<endl;
    
    /*
     * Please give the technical term and use for the following:
     *  13)  cout
     *  14)  <<
     *  15)  endl
     *  16)  "stuff in here is called..?"
     */
    
    //17
    return 0;
}

