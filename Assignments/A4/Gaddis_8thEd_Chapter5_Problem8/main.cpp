/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: Math Tutor Program Modified With A Menu
 * Created on July 11, 2015, 12:47 PM
 */

//System Libraries
#include <iostream>
#include <iomanip> //For setw
#include <cstdlib> //For rand and srand
#include <ctime> //For the time function
using namespace std;
//User Libraries
//Global Functions
//Function Prototypes
//Execution Begins Here!
int main(int argc, char** argv) {
//Set the seed
	unsigned seed = time(0);
//Generate new random number
	srand(seed);
	while(true) {
//Declare and initialize the variables
		unsigned short uSh_frstN = 0; //First number;
		unsigned short uSh_scndN = 0; //Second number;
		int i_answr = 0; //User answer
		unsigned char uCh_menu = 5; //Menu selection
//Display the menu and let the user select one of the five options
		cout << "Select:\n"
			 << "1. Addition\n"
			 << "2. Subtraction\n"
			 << "3. Multiplication\n"
			 << "4. Division\n"
			 << "5. Quit\n> ";
		cin >> uCh_menu;
//It depends on the user selection,
//Add, Subtract, Multiply, or Divide the two random numbers which the user entered
		switch(uCh_menu) {
			case '1': {	
//Assign the two random numbers here for the Addition case
				uSh_frstN = rand() % 1000 + 1; // 1 to 1000
				uSh_scndN = rand() % 1000 + 1; // 1 to 1000
//Display a question and let it take the input value of the answer of the Addition case
				cout << setw(5) << uSh_frstN << endl
					 << "+" << setw(4) << uSh_scndN << endl
					 << "-----\n ";
				cin >> i_answr;
//Check the answer using the If loop is correct outcome for the Addition case
				if(i_answr == uSh_frstN + uSh_scndN)
					cout << "Correct!\n";
				else 
					cout << "Wrong!  Ans: " << uSh_frstN + uSh_scndN << endl;

				break;
			}
			case '2': {
//Assign the two random numbers here for the Subtraction case
				uSh_frstN = rand() % 1000 + 1; // 1 to 1000
				uSh_scndN = rand() % 1000 + 1; // 1 to 1000
//Display a question and let it take the input value of the answer of the Subtraction case
				cout << setw(5) << uSh_frstN << endl
					 << "-" << setw(4) << uSh_scndN << endl
					 << "-----\n ";
				cin >> i_answr;
//Check the answer using the If loop is correct outcome for the Subtraction case
				if(i_answr == uSh_frstN - uSh_scndN)
					cout << "Correct!\n";
				else 
					cout << "Wrong!  Ans: " << uSh_frstN - uSh_scndN << endl;
				break;
			}
			case '3': {
//Assign the two random numbers here for the Multiplication case
				uSh_frstN = rand() % 100 + 1; // 1 to 100
				uSh_scndN = rand() % 100 + 1; // 1 to 100
//Display a question and let it take the input value of the answer of the Multiplication case
				cout << setw(5) << uSh_frstN << endl
					 << "*" << setw(4) << uSh_scndN << endl
					 << "-----\n ";
				cin >> i_answr;
//Check the answer using the If loop is correct outcome for the Multiplication case
				if(i_answr == uSh_frstN * uSh_scndN)
					cout << "Correct!\n";
				else 
					cout << "Wrong!  Ans: " << uSh_frstN * uSh_scndN << endl;
				break;
			}
			case '4': {
//Assign the two random numbers here for the Division case
				uSh_frstN = rand() % 100 + 1; // 1 to 100
				uSh_scndN = rand() % 100 + 1; // 1 to 100
//Display a question and let it take the input value of the answer of the Division case
				float f_answr = 0.0f;
				float f_check = 0.0f;

				cout << setw(5) << uSh_frstN << endl
					 << "/" << setw(4) << uSh_scndN << endl
					 << "-----\n ";
				cin >> f_answr;

				f_check = uSh_frstN / (float)uSh_scndN;
				f_check = static_cast<int>(f_check * 100.0f) / 100.0f;
//Check the answer using the If loop is correct outcome for the Division case
				if(f_answr == f_check)
					cout << "Correct!\n";
				else 
					cout << "Wrong!  Ans: " << f_check << endl;
				break;
			}
			case '5': {
				cout << "Exiting the game\n";
				return 1;
			} 
		}//End of the switch case
		
		cout << endl << endl;
	}//End of the while loop
//Exit stage right!
	return 0;
}//The end of the main function

