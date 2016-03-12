/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Assignment 6 
 * Created on July 24, 2015, 11:51 AM
 */

//System Libraries
#include <iostream>
#include <fstream>
using namespace std;

//Global Constants

//Function Prototypes
void merge(ifstream& fin1, ifstream& fin2, ofstream& fout);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    ifstream fin1, fin2;
    ofstream fout;
    
    merge(fin1, fin2, fout);
    
    //Exit Stage Right
    return 0;
}
//Execution of the functions
void merge(ifstream& fin1, ifstream& fin2, ofstream& fout){
    int setA, setB, set;
    //Open Files
    fout.open("out.dat");
    fin1.open("in1.dat");
    fin2.open("in2.dat");
    //Read and Input Data to Output File
    while (fin1>>setA){
        fout<<setA<<" "<<endl;   
    }
    
    while (fin2>>setB){
        fout<<setB<<" "<<endl;
    }
    //Close Files
    fin2.close();
    fin1.close();
    fout.close();
}

