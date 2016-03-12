/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 *Purpose: Gas Tax 
 * Created on June 24, 2015, 2:08 PM
 */

#include <iostream> //I/O Library

using namespace std;  //Namespace for iostream

//User Libraries 

//Global Constants 
const unsigned char CNVPCT=100;//Conversion to Percentage

//Function Prototype 

//Execution begins here!
int main() {
	
	//Declare Variables
	float fedTax=0.18;   //Federal Tax $'s
	float calTax=0.38;   //California Tax $'s
	float slsTax=0.08f;  //California Sales Tax %
	float gallon=3.69;   //Price of a gallon of gas $'s
	float totTax, pctTax;//Total tax $'s and its percentage
	float slsTxV;        //Sales Tax Value $'s
	
	//Calculate the total tax and it's percentage
	//Assumes no double taxation
	slsTxV=(gallon-calTax-fedTax)*(1-1/(1+slsTax));
	totTax=fedTax+calTax+slsTxV;
	pctTax=totTax/gallon*CNVPCT;
	
	//Output the results
	cout<<"The total tax on a gallon of gas @ $";
	cout<<gallon<<"/gallon -> $"<<totTax<<endl;
	cout<<"The percentage tax = "<<pctTax<<" %"<<endl;
	
	//Exit Stage Right!
	return 0;
}

