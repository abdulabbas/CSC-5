/* 
 * File:   main.cpp
 * Author: Abdul-Hakim
 * Purpose: Problem-3-Gaddis-8thEd-Chapter-8 
 * Created on July 23, 2015, 12:10 PM
 */

//System Libraries
#include <iostream>
#include <vector>
using namespace std;
//User Libraries

//Global Constants

//Function Prototypes
void tSort(vector<int>&);//ticket sorting
bool search(vector<int>,int);//search for ticket
//Execution begins here
int main(int argc, char** argv) {

vector<int> list;

//Store values in the vector.
list.push_back(13579);
list.push_back(26791);
list.push_back(26792);
list.push_back(33445);
list.push_back(55555);
list.push_back(62483);
list.push_back(77777);
list.push_back(79422);
list.push_back(85647);
list.push_back(93121);

//get winning number
int wNumber;

cout<<"Enter this week’s winning number ";
cin>>wNumber;

//sort ticket
tSort(list);

//check if win
if(search(list,wNumber)) {
cout<<"One of the tickets is a winner this week."<<endl;
}
else cout<<"Not one of the tickets is a winner this week."<<endl;

return 0;
}

void tSort(vector<int>& ticket)
{

int size=ticket.size();
int startScan,minIndex,tempTicket,minTicket;
for(startScan=0;startScan<(size-1);startScan++)
{
minIndex=startScan;
minTicket=ticket[startScan];
for(int index = startScan+1;index<size;index++)
{
if(minTicket>ticket[index])
{
minTicket=ticket[index];
minIndex=index;
}
ticket[minIndex]=ticket[startScan];
ticket[startScan]=minTicket;
}
}

}

bool search(vector<int> list,int wNumber)
{
//declare boolean
bool fnd=false;
int first=0,
last=list.size()-1,
middle;
while(!fnd&&first<=last)
{
middle=(first+last)/2;
if(list[middle]==wNumber) fnd=true;
else if(list[middle]>wNumber) last=middle-1;
else first=middle+1;
}
return fnd;

}

