/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *Purpose: To show how to swap
 * Created on June 29, 2015, 1:18 PM
 */


//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a,b;
    int min=10,max=100;
    
    //Input the values for a and b
    cout<<"Input 2 integer values between "<<min<<" and ";
    cout<<max<<endl;
    cin>>a>>b;
    
    //Validate the results
    if(a>=min && a <=max && b>=min && b<=max){
        //Prompt the user for which swap
        cout<<"What swap would you like to choose?"<<endl;
        cout<<"Storage variable -> s or in-place xor -> i"<<endl;
        //Declare the variable type
        char type;
        cin>>type;
        switch(type){
            case 's':{
                int temp = a;
                a = b;
                b = temp;
                cout<<"type is visible due to scope!"<<endl;
                cout<<"type = "<<type<<endl;
                break;
            }
            case 'i':{
                a=a^b;
                b=a^b;
                a=a^b;
                break;
            }
            default: 
                cout<<"You don't follow instructions"<<endl;
                cout<<"You didn't type an s or an i"<<endl;
                return 1;
        }
    }else{
        cout<<"You don't follow instructions"<<endl;
        cout<<"Values not between range given"<<endl;
        
        cout<<"No swap for you"<<endl;
        return 1;
    }
    
    //Output the results for the swap
    cout<<"old a  = "<<b<<", new a = "<<a<<endl;
    cout<<"old b  = "<<a<<", new b = "<<b<<endl;
    
    //Exit stage right!
    return 0;
}

