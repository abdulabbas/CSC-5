/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: To display the characters for the ASCII codes of 0 to 127
 * Created on July 11, 2015, 11:32 AM
 */

//System Libraries
#include <iostream>
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
// Declare and initialize variables
    const unsigned char UCH_MIN = 32;
    const unsigned char UCH_MAX = 127;
//Output ASCII code 32 to 127
    for(int i = UCH_MIN, cnt = 0; i <= UCH_MAX; ++cnt, ++i) {
        cout << (char)i << " ";
        if(cnt % 16 == 0)
            cout << endl;
    }//The end of the for loop
    cout << endl;
//Exit stage right!    
    return 0;
}//The end of the main Function

