/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To display squares using the upper case x character
 * Created on July 10, 2015, 1:30 PM
 */

#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
//Declare a variable
    int widHght;
//Prompt for the input
    cout<<"How large do you want the character square"<<endl;
    cin>>widHght;
//Utilize countable loops
    for(int row=1;row<=widHght;row++){
        for(int col=1;col<=widHght;col++){
            cout<<"X";
        }
        cout<<endl;
        
    }
    cout<<endl;
//Exit stage right!
    return 0;
}

