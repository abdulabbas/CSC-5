/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: How many bars can some eat with out gaining weight
 * Created on June 30, 2015, 12:12 PM
 */

//System Libraries
#include <fstream>
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short wtLbs, htInch, ageYrs, bmr;
    unsigned char  nChcBar,calChoc=230;
    char sex;
    ifstream input;
    
    //Loop as long as we have data
    input.open("bmr.dat");
    //Exhaust the data in the file
    //while(!input.eof()){
    while(input>>sex>>wtLbs>>htInch>>ageYrs){
        //Read from file
        //input>>sex>>wtLbs>>htInch>>ageYrs;
        //Calculate BMR due to Sex
        if(sex=='F'){
            bmr=655+4.3*wtLbs+4.7*htInch-4.7*ageYrs;
        }else{
            bmr=66+6.3*wtLbs+12.9*htInch-6.8*ageYrs;
        }
        //What is the equivalent number of chocolate bars
        nChcBar=bmr/calChoc;
        //Output the results
        cout<<"Sex = "<<sex<<endl;
        cout<<"Wt  = "<<wtLbs<<"(lbs)"<<endl;
        cout<<"Ht  = "<<htInch<<"(inches)"<<endl;
        cout<<"Age = "<<ageYrs<<"(years)"<<endl;
        cout<<"Your BMR = "<<bmr<<"(cal)"<<endl;
        cout<<"Number of candy bars you may consume = "
                <<static_cast<int>(nChcBar)<<endl;
        cout<<endl<<endl;
    }
    
    //Exit stage right!
    return 0;
}