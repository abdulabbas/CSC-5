/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Created on July 16, 2015, 11:30 AM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <iomanip>
#include <ctime>
using namespace std;

//User Libraries

//Global Constants
const double MXRND=pow(2,31)-1;

//Function Prototype
float normal();//Normal distribution
void filAray(float [],int);
void prntAry(const float [],int,int);
float max(float [],int);
float min(float [],int);
float mean(float [],int);
float stdev(float [],int);

int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    const int SIZE=500000;
    float array[SIZE];
    
    //Initialize the array
    filAray(array,SIZE);
    
    //Output the initial array
    //prntAry(array,SIZE,5);
    
    //Print the statistics
    cout<<"The max value of the array = "<<max(array,SIZE)<<endl;
    cout<<"The min value of the array = "<<min(array,SIZE)<<endl;
    cout<<"The mean value of the array = "<<mean(array,SIZE)<<endl;
    cout<<"The standard deviation of the array = "<<stdev(array,SIZE)<<endl;
    
    //Exit stage right!
    return 0;
}

/**************************************************
 *      Standard Deviation of an Array            *
 **************************************************
 * Purpose:  To find the std
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    standard deviation
 */
float stdev(float a[],int n){
    //Declare variable and initialize
    float std=0,avg=mean(a,n);
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        float amavg=(a[i]-avg);
        std+=(amavg*amavg);
        //std+=(a[i]-mean(a,n)*a[i]-mean(a,n));
    }
    //Return the maximum value
    return sqrt(std/(n-1));
}

/**************************************************
 *                Mean of an Array                *
 **************************************************
 * Purpose:  To find the mean
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    mean value
 */
float mean(float a[],int n){
    //Declare variable and initialize
    float mean=0;
    //Loop to find the maximum
    for(int i=0;i<n;i++){
        mean+=a[i];
    }
    //Return the maximum value
    return mean/n;
}

/**************************************************
 *                Max of an Array                 *
 **************************************************
 * Purpose:  To find the maximum
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    maximum value
 */
float max(float a[],int n){
    //Declare variable and initialize
    float max=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(max<a[i])max=a[i];
    }
    //Return the maximum value
    return max;
}

/**************************************************
 *                Min of an Array                 *
 **************************************************
 * Purpose:  To find the minimum
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 * Output:
 *    minimum value
 */
float min(float a[],int n){
    //Declare variable and initialize
    float min=a[0];
    //Loop to find the maximum
    for(int i=1;i<n;i++){
        if(min>a[i])min=a[i];
    }
    //Return the maximum value
    return min;
}

/**************************************************
 *                Print Array                      *
 **************************************************
 * Purpose:  To print a float type array with any
 *           number of columns
 * Input:
 *    n-> The size of the array
 *    a-> The float Array
 *    nCols->Number of columns to display the array.
 * Output:
 *    On Screen
 */
void prntAry(const float a[],int n,int nCols){
    //Format
    cout<<fixed<<showpoint<<setprecision(4);
    //Separate outputs with a line
    cout<<endl;
    //Loop and output every element in the array
    for(int i=0;i<n;i++){
        cout<<setw(8)<<a[i];
        //When column is reached go to next line
        if((i%nCols)==(nCols-1))cout<<endl;
    }
    //Separate outputs with a line
    cout<<endl;
}

/**************************************************
 *                Fill Array                      *
 **************************************************
 * Purpose:  To fill an array with float normal
 *           random numbers.
 * Input:
 *    n-> The size of the array
 * Input-Output:
 *    a-> The integer Array
 * Output:
 */
void filAray(float a[],int n){
    //Loop on every element and equate to 2 digits
    for(int i=0;i<n;i++){
        a[i]=normal();//[-6,6];
    }
}

/*******************************************************
 *           Normal Distribution Approximation         *
 *******************************************************
 * Output->Normal density function approximation
 */
float normal(){
    //Declare a variable
    float norm=0;//[-6,6]
    //Loop 12 times
    for(int i=1;i<=12;i++){
        norm+=(rand()/MXRND-0.5);//[-0.5,0.5];
    }
    //Exit and return the norm variable
    return norm;
}

