/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: Is the First Project which is the Game of Hangman
 * Created on July 15, 2015, 3:48 PM
 */

//System Libraries that is used for this program are found in the hash include library
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;
//User libraries are declared here
//Global Constants are declared here
const int MAX_TRIES=20;
//Function Prototypes are declared here 
int letterFill (char, string, string&);
//Execution begins here!
int main(int argv,char *argc[]){
//Declare the variables needed for this program    
string name;
char letter;
int num_of_wrong_guesses=0;
string word;
//Make an array that holds the words of the game that are chosen at random
string words[] =
{
"course",
"mode",
"plans",
"process",
"disposal",
"battery",
"midterm",
"office",
"notes",
"laptops",
"machines",
"center",
"butter",
"milk",
"water",
"culture",
"passport",
"passed",
"failed",
"equator",
"paper",
"approach",
"final",
"projects",
"college",
"university",
"code",
"factory",
"method",
"source",
"supply",
"nectar",
"ambiguity",
"model",
"clarity",
"stereotypes",
"marketing",
"comply",
"three",
"vacation",
"information",
"printer",
"application",
"hardware",
"software",
"objects",
"router",
"technology",
"design",
"mobile",
"systems",
"security",
"networks",
"java",
"manners",
"computer",
"compilers"
"pillars",
"noble",
"society",
"data",
"file",
"complete",
"rules",
"guide",
"lines",
"edition",
"first",
"volume",
"area",
"poetry",
"organs",
"internal",
"external",
"elements",
"elementary",
"education",
"power",
"charts",
"statements",
"principles",
"last",
"green",
"blue",
"cyan",
"red",
"black",
"white",
"gray",
"pink",
"cards",
"paper",
"chalk",
"walls",
"wallet",
"painter",
"boards",
"experience",
"assisting",
"revolting",
"hacking",
"backing",
"engaging",
"forensics",
"general",
"platforms",
"fragmentation"
"minimal",
"cascading",
"style",
"height",
"width",
"ground",
"shortcut",
"parameter",
"disks",
"extract",
"compression",
"yellow",
"extensible",
"sockets",
"array",
"framework",
"header",
"footer",
"animation",
"extract",        
"intersect",
"acquisition",
"espionage",
"enterprise",
"remote",
"physical",       
"regional",
"abdominal",        
"laceration",        
"tension",
"assault",
"ligaments",
"tennis",
"classic",
"modern",
"emergency",
"wilderness",
"hammer"        
};

//Choose and copy a word from array of words randomly
srand(time(NULL));
int n=rand()% 10;
word=words[n];

//Initialize the secret word with the * characters
string unknown(word.length(),'*');

//Welcome the user by displaying a prompt

cout << "\n\nWelcome to hangman...guess a random word";
cout << "\n\nEach letter is represented by a star.";
cout << "\n\nYou have to type only one letter in one try";
cout << "\n\nYou have " << MAX_TRIES << " tries to try and guess the word.";
cout << "\n~~~~~~~~~~~~~~~~~\\~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\\~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";

//This Loop is done until the all guesses are used up
while (num_of_wrong_guesses < MAX_TRIES)
{
cout << "\n\n" << unknown;
cout << "\n\nGuess a letter: ";
cin >> letter;
//Fill secret word with letter if the guess is correct.
//Otherwise increment the number of wrong guesses.
if (letterFill(letter, word, unknown)==0)
{
cout << endl << "Whoops! That letter isn't in there!" << endl;
num_of_wrong_guesses++;
}
else
{
cout << endl << "You found a letter! Isn't that exciting!" << endl;
}
//Tell user how many guesses has they have left
cout << "You have " << MAX_TRIES - num_of_wrong_guesses;
cout << " guesses left." << endl;
//Check if user has guessed the word
if (word==unknown)
{
cout << word << endl;
cout << "Yeah! You got it!";
break;
}

}
if(num_of_wrong_guesses == MAX_TRIES)
{
cout << "\nSorry, you lose...you've been hanged." << endl;
cout << "The word was : " << word << endl;
}
cin.ignore();
cin.get();
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