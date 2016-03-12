/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Assignment 6
 * Created on July 24, 2015, 8:33 PM
 */

//System Libraries
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
void correct(ifstream &, ofstream &);
void other(ifstream &, ofstream &);
//Execution Begins Here!
int main(int argc, char** argv) {
//Declare Variables
    ifstream in;
    in.open("before.txt");
    ofstream out;
    out.open("after.txt");
//Declare function    
    char correct;
    while(!in.eof()){
        in>>correct;
        if (correct == '>'){
            out<<"<"<<endl;
        }else if(correct == '<'){
            out<< ">"<<endl;;
            
        }else{
            out<<correct;
        }
        
    }
    
    in.close();
    out.close();
    cout<<"End of Editing file."<<endl;
    return 0;
}

