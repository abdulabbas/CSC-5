/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Created on July 9, 2015, 11:10 AM
 */
//P1_V1_1
#include <iostream>
#include <cstring>
#include <cstdlib>

using namespace std;
//User Libraries
//Global Constants
//Function prototypes
bool isLpYr(unsigned short);//To hold the Leap Years encountered
int  gtMnVal(string,unsigned short);//Holds the month values 
int  gtYrVal(unsigned short);//Holds the Year Values
int  gtCntVl(unsigned short);//Holds the Century value
string dayOfWk(string,short,unsigned short);//Holds the days of the week
//Execution Begins Here
int main(int argc, char** argv) {
    //Declare variables
    unsigned short year;
    string month;
    const int SIZE=4;
    char rday[SIZE];
    char day[SIZE-1];
    short nDay;
    
    //Input the date
    cout<<"Input date form of July 4, 2008"<<endl;
    cin>>month;
    cin>>rday;
    cin>>year;
    
    //Translate the day into a number
    if(strlen(rday)==3){
        day[0]=rday[0];
        day[1]=rday[1];
        day[2]='\0';
    }else{
        day[0]=rday[0];
        day[1]='\0';
    }
    nDay=atoi(day);
    
    //Your day corresponding to the date is
    cout<<"Day = "<<dayOfWk(month,nDay,year)<<endl;
    
    //Exit stage right!
    return 0;
}
/******************************************************
 ***************** dayOfWk *****************************
 ******************************************************
 * Purpose:  To get the day of the week
 * Input:
 *      year->Years associated with AD
 * Output:  
 *      return cases-> Holds the needed values
 *      default case-> Holds error message and the sets day to Sunday
 */
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
/******************************************************
 ***************** gtCntVl *****************************
 ******************************************************
 * Purpose:  To get the century value
 * Input:
 *      yr-> Holds the year value
 *      numDay-> Holds the day values
 * Output:
 *      return -> [ 2*(3-year/100%4)] this calculation is done to output the century value related to year that is input
 */
int  gtCntVl(unsigned short year){
    return 2*(3-year/100%4);
}
/******************************************************
 ***************** gtYrVal *****************************
 ******************************************************
 * Purpose:  To gets the year value
 * Input:
 *      part1-> It modifies year by (year%100) to display its own value
 *      part2-> It takes (part1/4) to display its own value
 * Output:
 *      return-> (part1+part2) To display the result of gtYrVal function
 */
int  gtYrVal(unsigned short year){
    //Declare variables
    char part1,part2;
    //Calculate the parts
    part1=year%100;
    part2=part1/4;
    //Return the results
    return part1+part2;
}
/******************************************************
 ***************** gtMnVal *****************************
 ******************************************************
 * Function Prototype of Get Month Value
 * Purpose:  To display Month Values
 * Input:
 *      year-> Years associated with AD
 * Input-Output:
 *      month-> It has the word version of months 
 * Output:
 *      return cases-> Holds the needed values, and it can output a Sentinel value 
 */
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
 * Function Prototype that holds the Leap Years
 * Purpose:  To determine if the year is a leap year
 * Input:
 *      year->Years associated with AD
 * Output:
 *      bool->True if leap year || False if not a leap year
 */
bool isLpYr(unsigned short year){
    return ((year%400==0)||((year%4==0)&&!(year%100==0)));
}
//This is the end of the declared Function Prototypes