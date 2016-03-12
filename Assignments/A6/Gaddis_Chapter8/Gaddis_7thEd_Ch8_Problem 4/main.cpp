/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Assignment 6
 * Created on July 24, 2015, 9:38 PM
 */

 //System Libraries
  #include <iostream>
 using namespace std;
 //User Libraries
 
 // Function prototype
 void sortArray(int [], int);
 void showArray(const int [], int);
 int binarySearch(const int [], int, int);
 const int SIZE = 18;
 
//Execution Begins
 int main()
 {
 // Array with customer charge accounts.
 int charge_account_numbers[SIZE] = {5658845, 4520125, 7895122, 8777541, 8451277, 1302850,
 					8080152, 4562555, 5552012, 5050552, 7825877, 1250255,
 					1005231, 6545231, 3852085, 7576651, 7881200, 4581002};
 // Sort the values.
 sortArray(charge_account_numbers, 18);
 
 // Display them again.
 cout << "The sorted values are:\n";
 showArray(charge_account_numbers, 18);	
 
 int  srch_results; // To hold the search results
 int custCD ; // To hold a new customer charge account number
 
 // Get a new customer charge account number to search for.
 cout << "Enter the new customer charge account number (7 digits) : ";
 cin >> custCD;
 
 // Search for the code.
 srch_results = binarySearch(charge_account_numbers, SIZE, custCD);
 
 // If srch_results contains -1 the code was not found.
 if (srch_results == -1)
 cout << "The number does not exist in the array.\n";
 else
 {
 // Otherwise srch_results contains the array subscript of
 // the specified employee ID in the array.
 cout << "That ID is found at element " << srch_results;
 cout << " in the array.\n";
 }
 return 0;
 }
 
 //***************************************************************
 // The binarySearch function performs a binary search on an *
 // integer array. array, which has a maximum of size elements, *
 // is searched for the number stored in value. If the number is *
 // found, its array subscript is returned. Otherwise, -1 is *
 // returned indicating the value was not in the array. *
 //***************************************************************
 
 int binarySearch(const int array[], int size, int value)
 {
 int first = 0, // First array element
 last = size - 1, // Last array element
 middle, // Midpoint of search
 position = -1; // Position of search value
 bool found = false; // Flag for match
 
 while (!found && first <= last)
 {
 middle = (first + last) / 2; // Calculate midpoint
 if (array[middle] == value) // If value is found at mid
 {
 found = true;
 position = middle;
 }
 else if (array[middle] > value) // If value is in lower half
 last = middle - 1;
 else
 first = middle + 1; // If value is in upper half
 }
 return position;
 }
 
 //***********************************************************
 // Definition of function sortArray *
 // This function performs an ascending order bubble sort on *
 // array. size is the number of elements in the array. *
 //***********************************************************
 
 void sortArray(int array[], int size)
 {
 bool swap;
 int temp;
 
 do
 {
 swap = false;
 for (int count = 0; count < (size - 1); count++)
 {
 if (array[count] > array[count + 1])
 {
 temp = array[count];
 array[count] = array[count + 1];
 array[count + 1] = temp;
 swap = true;
 }
 }
 } while (swap);
 }
 
/*************************************************************
 // Definition of function showArray. *
 // This function displays the contents of array. size is the *
 // number of elements. *
 *************************************************************/
 
 void showArray(const int array[], int size)
 {
 for (int count = 0; count < size; count++)
 cout << array[count] << " ";
 cout << endl;
 }

