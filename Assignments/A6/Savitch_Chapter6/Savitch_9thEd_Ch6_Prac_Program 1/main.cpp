/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Assignment 6
 * Created on July 24, 2015, 3:32 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
void maxs(ifstream&, int&);
void mins(ifstream&, int&);
//Execution Starts Here
int main(int argc, char** argv) {
//Declare Variables
    ifstream fin;
    ofstream fout;
    int max, min;
    fin.open("input.dat");
    if(fin.fail()){
        cout<<"Input file failed to open.\n";
        exit(1);
    }
    fin>>max;
    maxs(fin, max);
    cout<<"The largest number in the file: "<<max<<endl;
    fin.close();
    fin.open("input.dat");
    if(fin.fail()){
        cout<<"Input file failed to open.\n";
        exit(1);
    }
    cout<<"\n";
    fin>>min;
    mins(fin, min);
    cout<<"The smallest number in the file: "<<min<<endl;
    fin.close();
    cout<<"\n";
    cout<<"End of Program.\n";
    //Exit Stage Right
    return 0;
}

void maxs(ifstream& fin, int& max){
    int next;
    while(fin>>next){
        if(next>max)
            max=next;
    }
}
void mins(ifstream& fin, int& min){
    int next;
    while(fin>>next){
        if(next<min)
            min=next;
    }
}
