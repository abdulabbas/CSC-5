/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Part1 of Purpose: To output a Parallel Array related to the (N) and (N^2)
 * Part2 of Purpose: And to output a 2d Array for the Times Table that is up to 12
 * Created on July 15, 2015, 12:16 PM
 */
//System Libraries
#include <cstdlib>
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
//User Libraries
//Global Constants
void pA(int[],int);
void TdA(int[],int[],int);//Holds the Times Table function        
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare values for the parallel array    
   const int g=10;//Size of pA 
   int r[g]={1,2,3,4,5,6,7,8,9,10}; 
//Declare the values for the 2 dimensional array 
   const int t=12;//Size of TdA
   int y[t]={1,2,3,4,5,6,7,8,9,10,11,12};//Is for the rows
   int c[t]={1,2,3,4,5,6,7,8,9,10,11,12};//Is for the columns
//Outputs  
   pA(r,g);//To display the Parallel Array
   cout<<'\n';//To create a space between the two types of Arrays
   TdA(y,c,t);//To display the Two Dimensional Array
//Exit stage right!    
    return 0;
}
/**********************************
 * Parallel Array                 *
 **********************************
 * 
 */
void pA(int d[],int k){
        cout<<"N"<<setw(8)<<"N^2"<<endl;
    for(int i=0;i<k;i++){
        cout<<d[i]<<setw(8)<<d[i]*d[i]<<endl;
    }
}

/***********************************************
 * Two dimensional Array                       *
 ***********************************************
 * 
 */
void TdA(int a[],int t[],int S){
for( int row = 0; row < 12; ++row )
{
    for( int column = 0; column < 12; ++column )
    {
        cout<<( column + 1 ) * ( row + 1 ) << '\t';
    }
   cout<<endl;
}
}

