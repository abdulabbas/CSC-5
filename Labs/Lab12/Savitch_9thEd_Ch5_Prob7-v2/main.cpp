/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Problem_7_V2 
 * Created on July 9, 2015, 1:01 PM
 */


//System Libraries
#include <iostream>
#include <cstring>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes
bool isLpYr(unsigned short);
int  gtMnVal(string,unsigned short);
int  gtYrVal(unsigned short);
int  gtCntVl(unsigned short);
string dayOfWk(string,short,unsigned short);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short year;
    string month;
    const int SIZE=4;
    char rday[SIZE];
    short nDay;
    
    //Input the date
    cout<<"Input date form of July 4, 2008"<<endl;
    cin>>month;
    cin>>rday;
    cin>>year;
    
    //Translate the day into a number
    if(strlen(rday)==3){
        nDay=(rday[0]-48)*10+(rday[1]-48);
    }else{
        nDay=rday[0]-48;
    }
    
    //Your day corresponding to the date is
    cout<<"Day = "<<dayOfWk(month,nDay,year)<<endl;
    
    //Exit stage right!
    return 0;
}

string dayOfWk(string mn,short day,
        unsigned short yr){
    //Declare Variable
    char numDay=(day+gtMnVal(mn,yr)+
                gtYrVal(yr)+gtCntVl(yr))%7;
    //Return the day of the week
    switch(numDay){
        case 0:return "Sunday";
        case 1:return "Monday";
        case 2:return "Tuesday";
        case 3:return "Wednesday";
        case 4:return "Thursday";
        case 5:return "Friday";
        case 6:return "Saturday";
        default:{
            cout<<"Bad Day"<<endl;
            return "Sunday";
        }
    }
}

int  gtCntVl(unsigned short year){
    return 2*(3-year/100%4);
}

int  gtYrVal(unsigned short year){
    //return the results
    return year%100+year%100/4;
}

int  gtMnVal(string month,unsigned short year){
    if(month=="January"){
        if(isLpYr(year))return 6;
        return 0;
    }else if(month=="February"){
        if(isLpYr(year))return 2;
        return 3;
    }else if(month=="March"){
        return 3;
    }else if(month=="April"){
        return 6;
    }else if(month=="May"){
        return 1;
    }else if(month=="June"){
        return 4;
    }else if(month=="July"){
        return 6;
    }else if(month=="August"){
        return 2;
    }else if(month=="September"){
        return 5;
    }else if(month=="October"){
        return 0;
    }else if(month=="November"){
        return 3;
    }else if(month=="December"){
        return 5;
    }else{
        cout<<"This is not possible"<<endl;
        return -1;
    }
}

/******************************************************
 ***************** isLpYr *****************************
 ******************************************************
 * Purpose:  To determine if the year is a leap year
 * Input:
 *      year->Years associated with AD
 * Output:
 *      bool->True if leap year || False if not a leap year
 */
bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0)&&!(year%100==0)));
}