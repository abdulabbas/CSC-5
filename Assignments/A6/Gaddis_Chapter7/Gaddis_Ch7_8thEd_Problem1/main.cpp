/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Gaddis-Chapter-7-Problem-1
 * Created on July 23, 2015, 12:08 PM
 */

//System Libraries
#include <iostream>
using namespace std;
const int Num = 10; //constant set as an integer Num = 10

int main(int argc, char** argv) {
int min; //holds the smallest value
int max; //holds the largest value
int a[Num]; //holds the 10 values in array
for(int i=0;i<10;i++) //sorts out the given values
{
cout<< "\nPlease Enter the values one after the other(max of 10): ";
cin>> a[i]; //sets the given values by user into an array
}
min=a[0]; //setting both largest and smallest values array [0]]
max=a[0];
for(int i=1;i<10;i++)
	{
		if(min>a[i]) //if smallest value is greater[i] then smallest value equals array value
		{
			min=a[i];
		}
		else if(max<a[i]) //else if largest value is less than [i] then max value equals array value
		{
			max = a[i];
		}
	} 
cout<<"The largest number is: "<< max << endl; //displays the max value
cout<<"The smallest number is: "<< min << endl; //displays the smallest value
    
    //Exit stage right
    return 0;
}

