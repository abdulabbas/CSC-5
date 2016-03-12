/* 
 * File:   main.cpp
 * Author: AbdulHakim Abbas
 * Purpose: Midterm Questions
 * For CSC 5 
 * Created on July 15, 2015, 3:45 PM
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std; 
//User libraries
//Global Constants
//Function Prototypes
void Menu();
int getN();
void def(int);
void problem1();//1st part of Problem1
void problem2();//Function takes in four character numbers to display stars 
void problem3();//Function to print out a check
void problem4();//Function for ISP packages 
void problem5();//Function for the total pay depends on hours worked
void problem6();//Function for a sequence
//Execution begins here!
int main(int argv,char *argc[]){
    int inN;
    do{
        Menu();
        inN=getN();
        switch(inN){
        case 1: problem1();break;
        case 2: problem2();break;
        case 3: problem3();break;
        case 4: problem4();break;
        case 5: problem5();break;
        case 6: problem6();break;
            default:;
        };
    }while(inN<7);
    return 0;
}
/*********************
 * Menu Function     *
 *********************
 * 
 */
void Menu(){
    cout<<"Type 1 for problem 1"<<endl;
    cout<<"Type 2 for problem 2"<<endl;
    cout<<"Type 3 for problem 3"<<endl;
    cout<<"Type 4 for problem 4"<<endl;
    cout<<"Type 5 for problem 5"<<endl;
    cout<<"Type 6 for problem 6"<<endl;
    cout<<"Type 7 to exit\n"<<endl;
}

//Choose problem number function
int getN(){
    int inN;
    cin>>inN;
    return inN;
}
/*************************************************
 * Solution to the first part of Problem1        *
 *************************************************
 *  
 */
void problem1()
{    
cout<<"In problem # 1"<<endl<<endl;
//It is the 1st part of Problem1 which displays the row side of the solution
int i,j,n,a=1;
cout<<"Enter the number of rows : ";
cin>>n;
for(i=n;i>=1;i--)
{
for(j=1;j<=n;j++)
{
if(i==j)
cout<<a;
else
cout<<".";
}
a++;
cout<<endl;
}
}

/*********************************
 * Solution to Problem 2         *
 *********************************
 *  
 */
void problem2(){
cout<<"In problem # 2"<<endl<<endl;
//Declare the variables
  char g,h,x,z;
  cout<<"Input four characters an example is (1357, or 24a86): "<<endl;
  cin>>g>>h>>x>>z;
  
      if(g=='1'){
        cout<<"1 *"<<endl;
    }else if(g=='2'){
        cout<<"2 **"<<endl;
    }else if(g=='3'){
        cout<<"3 ***"<<endl;
    }else if(g=='4'){
        cout<<"4 ****"<<endl;
    }else if(g=='5'){
        cout<<"5 *****"<<endl;
    }else if(g=='6'){
        cout<<"6 ******"<<endl;
    }else if(g=='7'){
        cout<<"7 *******"<<endl;
    }else if(g=='8'){
        cout<<"8 ********"<<endl;
    }else if(g=='9'){
        cout<<"9 *********"<<endl;
    }else cout<<g<<" ?"<<endl;
    
    if(h=='1'){
        cout<<"1 *"<<endl;
    }else if(h=='2'){
        cout<<"2 **"<<endl;
    }else if(h=='3'){
        cout<<"3 ***"<<endl;
    }else if(h=='4'){
        cout<<"4 ****"<<endl;
    }else if(h=='5'){
        cout<<"5 *****"<<endl;
    }else if(h=='6'){
        cout<<"6 ******"<<endl;
    }else if(h=='7'){
        cout<<"7 *******"<<endl;
    }else if(h=='8'){
        cout<<"8 ********"<<endl;
    }else if(h=='9'){
        cout<<"9 *********"<<endl;
    }else cout<<h<<" ?"<<endl;
    
    if(x=='1'){
        cout<<"1 *"<<endl;
    }else if(x=='2'){
        cout<<"2 **"<<endl;
    }else if(x=='3'){
        cout<<"3 ***"<<endl;
    }else if(x=='4'){
        cout<<"4 ****"<<endl;
    }else if(x=='5'){
        cout<<"5 *****"<<endl;
    }else if(x=='6'){
        cout<<"6 ******"<<endl;
    }else if(x=='7'){
        cout<<"7 *******"<<endl;
    }else if(x=='8'){
        cout<<"8 ********"<<endl;
    }else if(x=='9'){
        cout<<"9 *********"<<endl;
    }else cout<<x<<" ?"<<endl;
    
    if(z=='1'){
        cout<<"1 *"<<endl;
    }else if(z=='2'){
        cout<<"2 **"<<endl;
    }else if(z=='3'){
        cout<<"3 ***"<<endl;
    }else if(z=='4'){
        cout<<"4 ****"<<endl;
    }else if(z=='5'){
        cout<<"5 *****"<<endl;
    }else if(z=='6'){
        cout<<"6 ******"<<endl;
    }else if(z=='7'){
        cout<<"7 *******"<<endl;
    }else if(z=='8'){
        cout<<"8 ********"<<endl;
    }else if(z=='9'){
        cout<<"9 *********"<<endl;
    }else cout<<z<<" ?"<<endl;
}
/*****************************************
 * Solution to Problem 3                 *
 ***************************************** 
 * 
 */
void problem3()
{
    cout<<"In problem # 3"<<endl<<endl;
//Declare Variables
    unsigned short amnt, v, f, r, z;
    string date, pFn, pLn, ahFn, ahLn;
    const int SIZE=25;
    
    cout<<"Enter the following to produce a check: "<<endl;
    cout<<"Date (01/01/15): "<<endl;
    cin>>date;
    cout<<"Payee (first name and last name): "<<endl;
    cin>>pFn>>pLn;
    cout<<"Amount (in dollars ex. 123): "<<endl;
    cin>>amnt;
    cout<<"The account holder (first name and last name): "<<endl;
    cin>>ahFn>>ahLn;
    
    //To output a check
    cout<<"*********************************************************************"<<endl;
    cout<<" "<<endl;
    cout<<ahFn<<" "<<ahLn<<endl;
    cout<<"STREET ADDRESS"<<endl;
    cout<<"CITY, STATE  ZIP                                    "<<date<<endl;
    cout<<" "<<endl;
    cout<<"Pay to the Order of: "<<pFn<<" "<<pLn<<"                 $"<<amnt<<".0"<<endl;
    cout<<" "<<endl;
    
    
    if(amnt>=1000){
        cout<<"That is too much money for the range of this check."<<endl;
    }
    else if(amnt>=100){
        {
        v=amnt/100;
            if(v==9)cout<<"Nine";
            else if(v==8)cout<<"Eight";
            else if(v==7)cout<<"Seven";
            else if(v==6)cout<<"Six";
            else if(v==5)cout<<"Five";
            else if(v==4)cout<<"Four";
            else if(v==3)cout<<"Three";
            else if(v==2)cout<<"Two";
            else if(v==1)cout<<"One";
	    cout<<" Hundred and ";
        }
        amnt=amnt%100;
    }if(amnt>=20){
        {
        f=amnt/10;
            if(f==9)cout<<"Ninety";
            else if(f==8)cout<<"Eighty";
            else if(f==7)cout<<"Seventy";
            else if(f==6)cout<<"Sixty";
            else if(f==5)cout<<"Fifty";
            else if(f==4)cout<<"Forty";
            else if(f==3)cout<<"Thirty";
            else if(f==2)cout<<"Twenty";
            cout<<"-";
        }
        amnt=amnt%10;
    }if(amnt>=1){
        {
        r=amnt/1;
            if(r==19)cout<<"Nineteen";
            else if(r==18)cout<<"Eighteen";
            else if(r==17)cout<<"Seventeen";
            else if(r==16)cout<<"Sixteen";
            else if(r==15)cout<<"Fifteen";
            else if(r==14)cout<<"Fourteen";
            else if(r==13)cout<<"Thirteen";
            else if(r==12)cout<<"Twelve";
            else if(r==11)cout<<"Eleven";
            else if(r==10)cout<<"Ten";
            else if(r==9)cout<<"Nine";
            else if(r==8)cout<<"Eight";
            else if(r==7)cout<<"Seven";
            else if(r==6)cout<<"Six";
            else if(r==5)cout<<"Five";
            else if(r==4)cout<<"Four";
            else if(r==3)cout<<"Three";
            else if(r==2)cout<<"Two";
            else if(r==1)cout<<"One";
	   
        }
        amnt=amnt%1;
    }
    
    
    //A check looks something like this
    cout<<amnt<<" and no/100's Dollars"<<endl;
    cout<<" "<<endl;
    cout<<"BANK OF CSC5"<<endl;
    cout<<" "<<endl;
    cout<<"FOR: GOTTA PAY THE RENT                        "<<ahFn<<" "<<ahLn<<endl;
    cout<<" "<<endl;
    cout<<"*********************************************************************"<<endl;
    
    
}
/*********************************************
 * Solution to Problem 4                     * 
 *********************************************
 *  
 */
void problem4()
{
    
  cout<<"In problem # 4"<<endl<<endl;
  
  char input;//Holds the packages
  unsigned short hours;//Holds the hours of usage 
  float totCst;//Holds the total cost customer will pay 
  float save;//Holds the saved amount
//Let the user know about the Internet Service Providers three different package plans  
     cout<<"An ISP has 3 different subscription packages:\n"
         "      a)  $16.85 per month, 5 hours access.\n"
         "          Additional hours are $0.80 up to 20 hours\n"
         "          then $1 for all additional hours.\n"
         "      b)  $23.85 per month, 15 hours access.\n"
         "          Additional hours are $0.65 up to 25 hours\n"
         "          then $0.70 for each hour above this limit.\n"
         "      c)  $29.55 per month unlimited access."<<endl;
   cout<<endl;
//This is a prompt for the user to input which package they want and the hours they spent on the net!
    cout<<"How many hours would you like to access? ";
    cin>>hours;
    cout<<endl;
    cout<<"Which Package would you like to choose (a,b,or c)? ";
    cin>>input;
    cout<<endl;
  
//Results depending of which package
    cout<<fixed<<showpoint<<setprecision(2);
//Package Plan A 
    if(input=='a'||input=='A'){
        float cost=16.85;
        if(hours<=5){
            totCst=cost;
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
        }else if(hours>5&&hours<=20){
            totCst=cost+(.8*(hours-5));
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours>=14&&hours<=15){
                cout<<"You will save money by switching to package b.\n";
                save=totCst-(23.85);
                cout<<"You will save: $"<<save<<endl;
            }
            if(hours>15&&hours<=20){
                cout<<"You will save money by switching to package b.\n";
                save=totCst-(23.85+((hours-15)*.65));
                cout<<"You will save: $"<<save<<endl;
                }
        }else if(hours>20){
            totCst=cost+(.8*(20-5))+(hours-20);
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours>=21&&hours<=23){
                cout<<"You will save money by switching to package b.\n";
                save=totCst-(23.85+((hours-15)*.65));
                cout<<"You will save: $"<<save<<endl;
            }else if(hours>=24){
                cout<<"You will save money by switching to package c.\n";
                save=totCst-29.55;
                cout<<"You will save: $"<<save<<endl;
            }
        }
    }
    //Package Plan B
    if(input=='b'||input=='B'){
        float cost=23.85;
        if(hours<=15){
            totCst=cost;
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours<=13){
                cout<<"You will save money by switching to package a.\n";
                save=totCst-(16.85+(.8*(hours-5)));
                cout<<"You will save: $"<<save<<endl;
            }
        }else if(hours>15&&hours<=25){
            totCst=cost+((hours-15)*.65);
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            if(hours>=24&&hours<=25){
                cout<<"You will save money by switching to package c.\n";
                save=totCst-29.55;
                cout<<"You will save: $"<<save<<endl;
            }
        }else if(hours>25){
            totCst=cost+((25-15)*.65)+((hours-25)*.7);
            cout<<"Your total cost is: $"<<totCst<<" per month"<<endl;
            cout<<"You will save money by switching to package c.\n";
            save=totCst-29.55;
            cout<<"You will save: $"<<save<<endl;
        }
    }
    //Package Plan C
    if(input=='c'||input=='C'){
        float cost=29.55;
        cout<<"Your total cost is: $"<<cost<<" per month"<<endl;
        if(hours<=13){
            cout<<"You will save money by switching to package a.\n";
            save=cost-(16.85+(.8*(hours-5)));
            cout<<"You will save: $"<<save<<endl;
        }else if (hours>=14&&hours<=15){
            cout<<"You will save money by switching to package b.\n";
            save=cost-23.85;
            cout<<"You will save: $"<<save<<endl;
        }else if(hours>=16&&hours<=23){
            cout<<"You will save money by switching to package b.\n";
            save=cost-(23.85+((hours-15)*.65));
            cout<<"You will save: $"<<save<<endl;
        }
    }
}
/************************************************
 * Solution to Problem 5                        *
 ************************************************ 
 * 
 */
void problem5()
{
    cout<<"In problem # 5"<<endl<<endl;
    //Declare Variables
       float hrs;        //Hours worked
       float  pay;      //Hourly pay
       float  grsPay;  //Total pay
            
    //Ask user for their information Hours worked, Pay to return Gross Pay
    cout<<"How many hours did you work this week? ";
    cin>>hrs;
    cout<<endl;
    cout<<"How much do you get payed per hour? $";
    cin>>pay;
    cout<<endl;
    
    //Find Gross Pay
    if(hrs<=20){
        grsPay=pay*hrs;
        cout<<"Your gross pay is = $"<<grsPay<<endl;
    }else if(hrs>20&&hrs<=40){
        grsPay=((hrs-20)*(pay*1.5))+(20*pay);
        cout<<"Your gross pay is = $"<<grsPay<<endl;
    }else if(hrs>40){
        grsPay=((hrs-40)*(pay*2))+((20)*(pay*1.5))+(20*pay);
        cout<<"Your gross pay is = $"<<grsPay<<endl;
    }
}
/************************************
 * Solution to Problem 6            *
 ************************************ 
 * 
 */
void problem6()
{
    cout<<"In problem # 6"<<endl<<endl;
//Declare Variables
   unsigned short n;      //Number of terms that'll be incremented
   unsigned short x;     //What x is equal to due to the input of the user
   unsigned short z;     //Will replace n in For-Loop
   unsigned short nx=0; //What x will be raised with
            float d=0;   //To add on the totals in Loop
            float sum=0;  //The total will be equal to it
   
    //Ask user for what x and n are 
    cout<<"How many terms are there? ";
    cin>>n;
    cout<<"What is x equal to? ";
    cin>>x;
    cout<<endl;
    z=n;
    
    //Loop to find the sum
    for(int i=0;i<z;i++){
        //Find sum
        d=n/(pow(x,d));
        sum+=d;
        d++;
        n--;
    }
    
    //Output what sum is equal to
    cout<<fixed<<setprecision(2);
    cout<<"Your total sum is = "<<sum<<endl;
} 

//Exit Comment
void def(int inN)
{
    cout<<"You typed "<<inN<<" to exit the program"<<endl;
}