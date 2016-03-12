/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: The sales bar chart of Five stores
 * Created on July 10, 2015, 11:04 AM
 */

//System Libraries
#include <iostream> //Input/Output Library
#include <iomanip>  //Parametric Library
#include <cstdlib>  //General Utilites Library
using namespace std;
//User Libraries
//Global Constants
//Function Prototypes
//Execution Begins Here
int main(int argc, char** argv) {
    
//Declare Variables
    int sales1 = 1, sales2 = 1, sales3 = 1, sales4 = 1, sales5 = 1;
    int div1, div2, div3, div4, div5;
    
    //Prompt user for inputs
    cout << setw(38) << "* Sales Bar Chart *\n";
    cout << setw(38) << "-------------------\n";
    cout << "\"Orange Software, Inc.\" has 5 divisions located in the U.S. This"
            "\nprogram creates a visual representation of the daily sales for"
            "\neach location." << endl;
    cout << "Enter today's sales for the San Francisco division: $";
    cin >> div1;
    cout << "Enter today's sales for the Chicago division: $";
    cin >> div2;
    cout << "Enter today's sales for the Seattle division: $";
    cin >> div3;
    cout << "Enter today's sales for the New York division: $";
    cin >> div4;
    cout << "Enter today's sales for the Austin division: $";
    cin >> div5;
    cout << "\n";
    
    //Format inputs
    sales1 = div1 / 100;
    sales2 = div2 / 100;
    sales3 = div3 / 100;
    sales4 = div4 / 100;
    sales5 = div5 / 100;
    
    //Loop each division to determine amount of asterisks
    cout << setw(38) << "ORANGE SOFTWARE, INC" << endl;
    cout << setw(36) << "(Each * = $100)" << endl;
    cout << setw(26) << "San Francisco: ";
    while (sales1 >= 1)
    {
        cout << "*";
        sales1--;
    }
    cout << "\n";
    cout << setw(26) << "Chicago: ";
    while (sales2 >= 1)
    {
        cout << "*";
        sales2--;
    }
    cout << "\n";
    cout << setw(26) << "Seattle: ";
    while (sales3 >= 1)
    {
        cout << "*";
        sales3--;
    }
    cout << "\n";
    cout << setw(26) << "New York: ";
    while (sales4 >= 1)
    {
        cout << "*";
        sales4--;
    }
    cout << "\n";
    cout << setw(26) << "Austin: ";
    while (sales5 >= 1)
    {
        cout << "*";
        sales5--;
    }
    cout << "\n";
//Exit stage right!    
    return 0;
}

