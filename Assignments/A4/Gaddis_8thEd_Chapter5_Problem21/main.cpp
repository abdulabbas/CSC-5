/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: A Modified version of the Random Number Guessing Game
 * Created on July 11, 2015, 2:37 PM
 */

//System libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
//Declare the Variables
    srand(static_cast<unsigned int>(time(0)));
    int number;
        int random;
        bool tryAgn= true;
        char reply;
        int guess;
//Prompt the user for inputs 
        cout <<"Want to play a game?"<<endl;
        cout <<"Try and guess the number I am thinking of"<<endl;
        cout <<"and you will win."<<endl;
//Use the While loop to generate random number
        while (tryAgn)
        {
        random = rand() % 15 + 1;

        cout <<"I'm thinking of a number between 1 and 15."<<endl;

        cout << "\nTry and guess my number: "<<endl;
        cin>>number;
        
        int played=0;
        while (number != random)
        {
        played++;
        if (number < random)
        {
        cout << "Your guess is too low...try again: "<<endl;
        cin>>number;
        }
        if (number > random)
        {
        cout << "Your guess is too high...try again: "<<endl;
        cin>>number;
        }

        }

        if (number == random)
        {
        cout << "Congratulations you have won."<<endl;
        cout << "You made "<<played<<" attempts."<<endl; 
        }
        }
//Exit stage right!        
            return 0;
        }
