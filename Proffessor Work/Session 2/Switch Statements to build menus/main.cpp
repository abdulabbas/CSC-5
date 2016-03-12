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
    short choice;
  //Display a Main Menu
    do{
        do{
            cout<<"||==========================================================||"<<endl
                <<"||  YOUR FUTURE HOMEWORK ASSIGNMENTS!!!                     ||"<<endl
                <<"||==========================================================||"<<endl;
            cout<<"|| [1] Problem 1 - Gaddis/Savitch 4.1                       ||"<<endl
                <<"|| [2] Problem 2 - Gaddis/Savitch 4.2                       ||"<<endl
                <<"|| [3] Problem 3 - Gaddis/Savitch 4.3                       ||"<<endl
                <<"|| [4] Problem 4 - Gaddis/Savitch 4.4                       ||"<<endl
                <<"|| [5] Problem 5 - Gaddis/Savitch 4.5                       ||"<<endl
                <<"|| [6] Problem 6 - Gaddis/Savitch 4.6                       ||"<<endl
                <<"||==========================================================||"<<endl
                <<"|| [0] EXIT PROGRAM                                         ||"<<endl
                <<"||==========================================================||"<<endl;
            cout<<"||  ENTER CHOICE:  ";
            cin>>choice;
            cin.ignore();
        }while(choice < 0 || choice > 6);
      //Go to different parts of your program based on that choice!
        switch(choice){
            case ZERO:
                break;
            case ONE:
                cout<<"||  EXECUTING PROGRAM 1:  "<<endl;
                toContinue();
                break;
            case TWO:
                cout<<"||  EXECUTING PROGRAM 2:  "<<endl;
               toContinue();
                break;
            case THREE:
                cout<<"||  EXECUTING PROGRAM 3:  "<<endl;
                toContinue();
                break;
            case FOUR:
                cout<<"||  EXECUTING PROGRAM 4:  "<<endl;
                toContinue();
                break;
            case FIVE:
                cout<<"||  EXECUTING PROGRAM 5:  "<<endl;
                toContinue();
                break;
            case SIX:
                cout<<"||  EXECUTING PROGRAM 6:  "<<endl;
                toContinue();
                break;
        }
    }while(choice);
    
    cout<<"||  EXITING PROGRAM..."<<endl;

  //Stay Execution
    return 0;
}
void toContinue(){
    cout<<"||  Press ENTER to continue...";
    cin.ignore();
}
