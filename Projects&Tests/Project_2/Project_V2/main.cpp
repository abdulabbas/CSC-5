/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: Project 2
 * Created on July 23, 2015, 7:05 PM
 */

//System Libraries
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <fstream>
#include <vector>
using namespace std;
//User libraries
//Global Constants
//Function Prototypes
int letterFill (char, string, string&);
void printman(unsigned int stage);
//Execution begins here!
int main(int argv,char *argc[]){
//Declare the variables needed for this program
unsigned int stage=0;
int MAX_TRY=9,numWrGs=0,choice,choice2,nmWrGs2=0,MX_TRY2=9;
char letter,letter2;
string word;
string pNm;
//Make an array that holds words
string words[] =
{
"trash",
"cash",
"rat",
"bat",
"tag",
"tap", 
"rap",        
"pack",        
"belt",        
"heat",
"argue",
"faith",
"cat",
"whole",        
"rash",        
"heap",        
"reap",        
"king",
"rage",
"target"
};

//Choose and copy a word from the array of words randomly
srand(time(NULL));
int n=rand()% 10;
word=words[n];

//Initialize the secret word with the * characters
string unknown(word.length(),'*');

//Welcome the user by displaying a prompt
cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout << "\n\nWelcome to hangman...guess a random word";
cout << "\n\nEach letter is represented by a star.";
cout << "\n\nYou have to type only one letter in one try";
cout << "\n\nYou have 9 tries to try and guess the word.";
cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

//Prompt the user for them to input their name
cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
cout<<"\n\nDear player enter your name please!";
cin >> pNm;
cout << "\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

//Prompt user to pick if they want to play or not!
cout<<"\nDo you want to play a game?"<<endl;
cout<<"Press 1 for Yes, and 2 for No"<<endl;
cout<<" "<<endl;
cout<<"Please input your choice here: ";
cin>>choice;


    //If Choice Is Yes, Ask For First Or Second Mode
    if(choice==1){
        cout<<"\n "<<endl;
        cout<<"\nOkay! Now that we know you want to play, what path would you like to pick?";
        cout<<"\nThe First Path or the Second Path? ";
        cout<<"\nPlease press 4 for The First Path ";
        cout<<"\nand 5 for The Second Path."<<endl;
        cout<<" "<<endl;
        cout<<"\nPlease enter your choice here: ";
        cin>>choice2;
        
        //If First, Start First Mode
        if(choice2==4){
            cout<<"You choose the First Path. Get ready";
            
            //Randomize The Words In The Game
            srand(time(NULL));
            int n=rand()%10;
            word=words[n];
            
            //Initialize Secret Word With *
            string unknown(word.length(),'*');
    
            //Loop Until The Guesses Are Used Up
            while(numWrGs<MAX_TRY){
                printman(stage);
        
                cout<<" "<<endl;
                cout<<" "<<unknown<<endl;
                cout<<"Please choose a letter: ";
                cin>>letter;
        
                 //Fill The Secret Word With A Letter, Otherwise
                 //Increment Number Of Wrong Guesses
                 if(letterFill(letter,word,unknown)==0){
                     cout<<"You got the ";
                     cout<<"wrong letter!"<<endl;
                     numWrGs++;
                     ++stage;
                 }else cout<<"Amazing you found a letter! ";
                       cout<<" "<<endl;
              
                 //Tell The User How Many Guesses They Have Left
                 cout<<" You have "<<MAX_TRY-numWrGs<<" guesses left."<<endl;
            
                 //Check To See If User Guesses Word
                 if(word==unknown){
                     cout<<" "<<endl;
                     cout<<word<<endl;
                     cout<<" "<<endl;
                     cout<<"You guessed the right word."<<endl;
                     break;
                 }

          
             }
    
             //Output If User Loses
             if(numWrGs==MAX_TRY){
                 printman(stage);
                 cout<<" "<<endl;
                 cout<<"The word was : "<<word<<"."<<endl;
             }

            //INITIALIZE Second MODE!!!!! You Go Bro!
            }else if(choice2==5){
                
                //Welcome User To Second Mode!!!
                cout<<"I see you've chosen the Second Path. ";
                //Declare Variables
                ifstream myfile;
                vector<string> words2;
                string word2;
                //Open File
                myfile.open("words.dat",ios::in);
                  
                if(!myfile){
                    cout<<"Sorry! No file found!"<<endl;
                    return 0;
                }
                
                while(myfile>>word2){
                    words2.push_back(word2);
                }
                
                //Randomize The Words In The Game
                srand(time(NULL));
                int s=rand()%10;
                word2=words2[s];
             
                //Close The File
                myfile.close();
    
                //Initialize Secret Word With *
                string unknwn2(word2.length(),'*');
    
                //Loop Until The Guesses Are Used Up
                while(nmWrGs2<MX_TRY2){
                    printman(stage);
        
                    cout<<" "<<endl;
                    cout<<" "<<unknwn2<<endl;
                    cout<<"Please choose a letter: ";
                    cin>>letter2;
        
                 //Fill The Secret Word With A Letter, Otherwise
                 //Increment Number Of Wrong Guesses
                 if(letterFill(letter2,word2,unknwn2)==0){
                     cout<<"Wrong letter! Try again!"<<endl;
                     nmWrGs2++;
                     ++stage;
                 }else cout<<"You found a letter! I knew you could do this!";
                    cout<<" "<<endl;
              
                 //Tell The User How Many Guesses They Have Left
                 cout<<" You have "<<MX_TRY2-nmWrGs2<<" guesses left."<<endl;
        
                 //Check To See If User Guesses Word
                 if(word2==unknwn2){
                     cout<<" "<<endl;
                     cout<<word2<<endl;
                     cout<<" "<<endl;
                     cout<<"How astounding! Amazing! ";
                     break;
                 }
             }
    
             //Output If User Loses
             if(nmWrGs2==MX_TRY2){
                 printman(stage);
                 cout<<" "<<endl;
                 cout<<"It seems you didn't have what it takes to win."<<endl;
                 cout<<" "<<endl;
                 cout<<"The word was : "<<word2<<"."<<endl;
                 cout<<" "<<endl;
             }
             
        }

    }

    //If Choice Is No, End The Game
    else if(choice==2){
        cout<<"Fine, don't play this game!"<<endl;
        return 0;
    }
    
    //If User Picks A Letter, End The Game
    else {
        cout<<"You choose the wrong input! This means I must exit! ";
    }
        
    return 0;
}

/*******************************************************************
 * Letter Fill Function                                            *
 *******************************************************************
 * Purpose: To fill up characters of the word to be guessed, and if
 * already guessed it returns a zero. 
 */
int letterFill (char guess, string secretword, string &guessword)
{
int i;
int matches=0;
int len=secretword.length();
for (i=0; i<len; i++)
{
// Did we already match this letter in a previous guess?
if (guess==guessword[i])
return 0;

// Is the guess in the secret word?
if (guess==secretword[i])
{
guessword[i]=guess;
matches++;
}
}
return matches;
}

/******************************************************************************************
 * Print Man Function                                                                     *
 ******************************************************************************************
 * Purpose: To use stages to print out the stick figure man due to the wrong guesses. 
 */

void printman(unsigned int stage){
        
        // |/---
        // |  o
        // | /|\
        // | / \
        // |____
 
        switch(stage)
        {
             case 0:
                cout << "\n\n\n\n\n";
                break;
            case 1:
                cout << "\n\n\n\n_____";
                break;
            case 2:
                cout << "|\n|\n|\n|\n|____";
                break;
            case 3:
                cout << "|/---\n|\n|\n|\n|____";
                break;
            case 4:
                cout << "|/---\n|  o\n|\n|\n|____";
                break;
            case 5:
                cout << "|/---\n|  o\n|  |\n|\n|____";
                break;
            case 6:
                cout << "|/---\n|  o\n| /|\n|\n|____";
                break;
            case 7:
                cout << "|/---\n|  o\n| /|\\\n|\n|____";
                break;
            case 8:
                cout << "|/---\n|  o\n| /|\\\n| /\n|____";
                break;
            case 9:
                cout << "|/---\n|  o\n| /|\\\n| / \\\n|____";
                break;
            default:
               cout << "|/---\n|  o\n| /|\\\n| / \\\n|____";
               break;
        }
    return;
}




