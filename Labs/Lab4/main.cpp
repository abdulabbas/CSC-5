/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *Purpose: To calculate Percent of the Violent Crimes of the USA Compared to the UK
 * Created on June 25, 2015, 1:21 PM
 */

#include <iostream>//File I/O
#include <iomanip>

using namespace std;//std namespace --> iostream

//User Libraries
// Global Constants
//Function Prototype

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variable Here
    
    float usaVc = 11.88e6f;//Violent Crimes in the USA
    float usaPop = 318e6f;//Population in the USA 
    float ukVc = 6.52e6f;//Violent Crimes in the UK
    float ukPop = 64.1e6f;//Population in the UK
    
    float vcPusa; //Percentage of Violent Crimes in USA
    float vcPuk; //Percentage of Violent Crimes in UK 
    //Input Values Here  
    
    //Process Input Here
    vcPusa = (usaVc / usaPop) * 100; //Calculate % of violent crimes in US
    vcPuk = (ukVc / ukPop) * 100; //Calculate % of violent crimes in UK
    
    //Output Unknowns Here
    cout << "Percentage of violent crimes in the United States = " << fixed << showpoint << setprecision(2) << vcPusa << "%" << endl;
    cout << "Percentage of violent crimes in the United Kingdom = " << vcPuk << "%" << endl;
    //ExitStage Right!
    return 0;
}

