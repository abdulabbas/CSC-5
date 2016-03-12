/* 
 * File:   main.cpp
 * Created on September 26, 2013, 10:06 AM
 */

//Library
#include <iostream>
using namespace std;

//No Global Constants

//No Function Prototypes

//Execution Begin Here!!!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short number;
    char n1000,n100,n10;
    
    //Input the number
    cout<<"Conversion to Roman Numerals"<<endl;
    cout<<"Input a number between 1000-3000"<<endl;
    cout<<"No Validation Checking"<<endl;
    cin>>number;
    
    //Calculations
    n1000=number/1000;
    number-=n1000*1000;
    n100=number/100;
    number-=n100*100;
    n10=number/10;
    number-=n10*10;
    //cout<<static_cast<int>(n1000)<<" "
    //    <<static_cast<int>(n100)<<" "
    //    <<static_cast<int>(n10)<<" "
    //    <<number<<endl;
    
    //Output the 1000's
    switch(n1000){
        case 3: cout<<"M";
        case 2: cout<<"M";
        case 1: cout<<"M";
    }
    
     //Output the 100's
    switch(n100){
        case 9: cout<<"CM";break;
        case 8: cout<<"DCCC";break;
        case 7: cout<<"DCC";break;
        case 6: cout<<"DC";break;
        case 5: cout<<"D";break;
        case 4: cout<<"CD";break;
        case 3: cout<<"C";
        case 2: cout<<"C";
        case 1: cout<<"C";
        default:;
    }
    
    //Output the 10's
    switch(n10){
        case 9: cout<<"XC";break;
        case 8: cout<<"LXXX";break;
        case 7: cout<<"LXX";break;
        case 6: cout<<"LX";break;
        case 5: cout<<"L";break;
        case 4: cout<<"XL";break;
        case 3: cout<<"X";
        case 2: cout<<"X";
        case 1: cout<<"X";
        default:;
    }
    
    //Output the 1's
    switch(number){
        case 9: cout<<"IX";break;
        case 8: cout<<"VIII";break;
        case 7: cout<<"VII";break;
        case 6: cout<<"VI";break;
        case 5: cout<<"V";break;
        case 4: cout<<"IV";break;
        case 3: cout<<"I";
        case 2: cout<<"I";
        case 1: cout<<"I";
        default:;
    }
    cout<<endl;
    
    //Exit Stage Right
    return 0;
}

