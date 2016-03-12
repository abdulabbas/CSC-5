/* 
 * File:   main.cpp
 * Created on October 1, 2013, 10:29 AM
 */

//Library
#include <iostream>
using namespace std;

//No Global Constants

//No Function Prototypes

//Executions Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short side,maxSide=79;
    
    //Prompt for the input
    do{
        cout<<"How large to make triangle?"<<endl;
        cout<<"Range 0-79"<<endl;
        cin>>side;
    }while(side>maxSide);
    
    //Print the first line
    cout<<endl;
    for(int row=side;row>=1;row--){
        for(int col=1;col<=row;col++){
            cout<<'X';
        }
        cout<<endl;
    }
    cout<<endl;
    
    //Exit Stage right
    return 0;
}

