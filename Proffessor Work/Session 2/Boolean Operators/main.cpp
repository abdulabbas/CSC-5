/* 
 * File:   main.cpp
 * Author: Bradd
 *
 * Purpose:
 *      Demonstrate different types of boolean comparison operators
 */

//System Level Libraries
#include <iostream>

//Namespace
using namespace std;

//Global Constants

//Function Prototypes
void toContinue();

//Begin Execution
int main(int argc, char** argv) {
  
  //Bonus, what is this block statement?
    enum{
        ZERO, ONE, TWO, THREE, FOUR, FIVE, SIX, SEVEN, EIGHT, NINE, TEN,
        ELEVEN, TWELVE, THIRTEEN, FOURTEEN, FIFTEEN, SIXTEEN, SEVENTEEN
    };
    
  //Example 1 SEVERAL IF STATEMENTS
    cout<<"||==========================================================||"<<endl
        <<"||  EXAMPLE 1                                               ||"<<endl
        <<"||==========================================================||"<<endl;    
    if(SEVEN == FOURTEEN){
        cout<<"||  Seven equals fourteen"<<endl;
    }
    if(SEVEN != FOURTEEN){
        cout<<"||  Seven does not equal fourteen"<<endl;
    }
    if(SEVEN <= FOURTEEN){
        cout<<"||  Seven is less than fourteen"<<endl;
    }
    toContinue();
    
  //Example 2 FALL THROUGH OF IF ELSE
    cout<<"||==========================================================||"<<endl
        <<"||  EXAMPLE 2                                               ||"<<endl
        <<"||==========================================================||"<<endl;
    if(SEVEN == FOURTEEN){
        cout<<"||  Seven equals fourteen"<<endl;
    }
    else if(SEVEN != FOURTEEN){
        cout<<"||  Seven does not equal fourteen"<<endl;
    }
    else if(SEVEN <= FOURTEEN){
      //Why isn't this statement printing?
        cout<<"||  Seven is less than fourteen"<<endl;
    }
    toContinue();
    
  //Example 3 MATH IN BINARY OPERATION
    cout<<"||==========================================================||"<<endl
        <<"||  EXAMPLE 3                                               ||"<<endl
        <<"||==========================================================||"<<endl;
    if(FIVE * TWO == TEN){
        cout<<"||  Five times two equals ten"<<endl;
    }
    else{
        cout<<"||  Five times two does not equal ten"<<endl;
    }
    toContinue();
  
  //Example 4 FLOAT COMPARISON PITFALL
    cout<<"||==========================================================||"<<endl
        <<"||  EXAMPLE 4                                               ||"<<endl
        <<"||==========================================================||"<<endl;
    
    if(9.3 == 9.3f){
      //Why isn't this statement printing?
        cout<<"||  9.3 equals 9.3"<<endl;
    }
    else{
        cout<<"||  9.3 isn't equal to 9.3"<<endl;
    }
    
  //Example 5 String comparison
    cout<<"||==========================================================||"<<endl
        <<"||  EXAMPLE 5                                               ||"<<endl
        <<"||==========================================================||"<<endl;
    string apple = "apple";
    if(apple == "apples"){
        cout<<"Apples are apples!"<<endl;
    }
    else{
        cout<<"Apples are not apples!"<<endl;
    }
    
  //Stay Execution
    return 0;
}
void toContinue(){
    cout<<"||  Press ENTER to continue...";
    cin.ignore();
}

