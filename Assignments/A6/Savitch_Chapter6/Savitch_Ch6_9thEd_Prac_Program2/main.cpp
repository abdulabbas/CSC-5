/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Assignment 6 
 * Created on July 24, 2015, 11:43 AM
 */


//System Libraries
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
void rmBlk(ifstream& , ofstream&);
//Execution Starts Here!
int main(int argc, char** argv) {
    //Declare Variables
    ifstream infile;
    ofstream outfile;
    infile.open("input.dat");
     if(infile.fail()){
        cout<<"Input file failed to open.\n";
        exit(1);
    }
    outfile.open("output.dat");
     if(outfile.fail()){
        cout<<"Output file failed to open.\n";
        exit(1);
    }
    rmBlk(infile, outfile);
    infile.close();
    outfile.close();    
    //Exit Stage Right
    return 0;
}
//Execution of functions done here!
void rmBlk(ifstream& infile, ofstream& outfile){
    string next;
    while (infile>>next){
        outfile<<next<<" ";
    } 
}

