/* 
 * File:   main.cpp
 * Created on September 30, 2013, 1:26 PM
 */

//Libraries
#include <cstdlib>
#include <iostream>
#include <ctime>
using namespace std;

//No Global Constants

//No Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare variables and set seed
    char user,comptr,ans;
    srand(static_cast<unsigned int>(time(0)));
    
    //Loop for play
    do{
        //Ask user for his choice
        cout<<"Type R for Rock"<<endl;
        cout<<"Type P for Paper"<<endl;
        cout<<"Type S for Scissors"<<endl;
        cin>>user;
        
        //Generate the computers response
        comptr=rand()%3+80;
        if(comptr%2)comptr+=2;
        
        //Test the output
        cout<<"User = "<<user<<endl;
        cout<<"Computer = "<<comptr<<endl;
        
        switch(user){
            case 'R':
            case 'r':{
                switch(comptr){
                    case 'R':{
                        cout<<"Tie"<<endl;
                        break;
                    }
                    case 'S':{
                        cout<<"Win"<<endl;
                        break;
                    }
                    default:{
                        cout<<"Lose"<<endl;
                        break;
                    }
                }
            }
            break;
            case 'S':
            case 's':{
                switch(comptr){
                    case 'R':{
                        cout<<"Lose"<<endl;
                        break;
                    }
                    case 'S':{
                        cout<<"Tie"<<endl;
                        break;
                    }
                    default:{
                        cout<<"Win"<<endl;
                        break;
                    }
                }
            }
            break;
            case 'P':
            case 'p':{
                switch(comptr){
                    case 'R':{
                        cout<<"Win"<<endl;
                        break;
                    }
                    case 'S':{
                        cout<<"Lose"<<endl;
                        break;
                    }
                    default:{
                        cout<<"Tie"<<endl;
                        break;
                    }
                }
            }
            break;
            default: cout<<"User can't type"<<endl;
        }
        
        //Keep Going
        cout<<"Want to play again?"<<endl;
        cout<<"If yes type Y"<<endl;
        cin>>ans;
    }while(ans=='Y'||ans=='y');
    
    //Exit Stage Right
    return 0;
}