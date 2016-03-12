/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 * Purpose: To confuse the Math Instructor
 * Created on June 25, 2015, 11:19 AM
 */

#include <iostream>//File I/O
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <cmath>//Math Library
using namespace std;//std namespace -> iostream

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins

int main(int argc, char** argv) {
    
    //Declare variables
    unsigned short a, b, c;
    short d, e, f;
    ofstream out;
    srand(static_cast<unsigned int>(time(0)));
    int thrwDce;
    
    //Initialize values
    a = 20000;
    b = 50000;
    d = 20000;
    e = 30000;
    out.open("number.dat");
    thrwDce = rand() % 6 + 1;
    
    //Perform a simple addition
    c = a + b;
    f = d + e;
    
    //Output the results
    cout << setw(6) << c << " = " << a << " + " << b << endl;
    cout << setw(6) << f << " = " << d << " + " << e << endl;
    cout << "The Dice value = " << thrwDce << endl;
    cout << pow(2, 3) << " = " << exp(3 * log(2));
    out << setw(6) << c << " = " << a << " + " << b << endl;
    out << setw(6) << f << " = " << d << " + " << e << endl;
    out << "The Dice value = " << thrwDce << endl;
    
    //Exit
    out.close();
    return 0;
}


