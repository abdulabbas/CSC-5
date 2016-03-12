/* 
 * File:   main.cpp
 * Author: Bradd
 *
 * Purpose:
 *      Demonstrate purpose of do while validation
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

  //Example 1 Validating strings by length with DO/WHILE
    cout<<"||==========================================================||"<<endl
        <<"||  EXAMPLE 1 - VALIDATION OF STRING LENGTH (DO/WHILE)      ||"<<endl
        <<"||==========================================================||"<<endl;
    
    string password;
  //Do whatever comes before while until while(false)
    do{
        if(password.length()){
            cout<<"||  ERROR:  <Password must be at least 8 characters long>"<<endl;
        }
        cout<<"||  Please enter your password:  ";
        getline(cin,password);
    }while(password.length() <= SEVEN);
    
  //Example 2 Validate a cin actually worked
    cout<<"||==========================================================||"<<endl
        <<"||  EXAMPLE 2 - VALIDATE A CIN>> ACTUALLY WORKED            ||"<<endl
        <<"||==========================================================||"<<endl;
    int integer;
    bool fail;
    do{
        cout<<"||  Please enter an integer:  ";
        cin>>integer;
        fail = false;  //Assumes you'll put it in right
      //If you don't put it in right
        if(cin.fail()||cin.peek()=='.'){
            fail = true;  //Tell the computer you suck
            cin.clear();  //Tell the computer that you're sorry
            string dummy; //Grab a trash can
            cin>>dummy;   //Put your garbage in the trash
            //Then, remind yourself that you suck...
            cout<<"||  ERROR: <INVALID INPUT...PLEASE ENTER INTEGER>"<<endl;
        }
        cin.ignore();
    }while(fail);
    cout<<"||  Your number is:  "<<integer<<endl;
    
    
    
    
    
  //Stay Execution
    return 0;
}
void toContinue(){
    cout<<"||  Press ENTER to continue...";
    cin.ignore();
}
