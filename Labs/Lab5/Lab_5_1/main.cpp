/* 
 * File:   main.cpp
 * Author: Abdul Hakim Abbas
 *Purpose: To show the truth
 * Created on June 29, 2015, 12:47 PM
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    
    //Declare variables
    bool x,y;
    
    //Output the heading of the table
    cout<<"The Truth Table"<<endl;
    cout<<"X Y !X !Y X&&Y X||Y X^Y (X^Y)^Y ";
    cout<<"(X^Y)^X !(X&&Y) !X||!Y !(X||Y) !X&&!Y"<<endl;
    
    //Row 1 output
    x=true;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"     ";
    cout<< (x^y? 'T':'F')<<"      ";
    cout<< ((x^y)^y? 'T':'F')<<"      ";    
    cout<< ((x^y)^x? 'T':'F')<<"       ";   
    cout<< (!(x&&y)? 'T':'F')<<"       ";  
    cout<< (!x||!y? 'T':'F')<<"       "; 
    cout<< (!(x||y)? 'T':'F')<<"       "; 
    cout<< (!x&&!y? 'T':'F')<<endl;     
    
    //Row 2 output
    x=true;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<< (x^y? 'T':'F')<<"      ";
    cout<< ((x^y)^y? 'T':'F')<<"      ";    
    cout<< ((x^y)^x? 'T':'F')<<"       ";   
    cout<< (!(x&&y)? 'T':'F')<<"       ";  
    cout<< (!x||!y? 'T':'F')<<"       "; 
    cout<< (!(x||y)? 'T':'F')<<"       "; 
    cout<< (!x&&!y? 'T':'F')<<endl;     
       
    
    //Row 3 output
    x=false;y=true;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";    
    cout<< (x^y? 'T':'F')<<"      ";
    cout<< ((x^y)^y? 'T':'F')<<"      ";    
    cout<< ((x^y)^x? 'T':'F')<<"       ";   
    cout<< (!(x&&y)? 'T':'F')<<"       ";  
    cout<< (!x||!y? 'T':'F')<<"       "; 
    cout<< (!(x||y)? 'T':'F')<<"       "; 
    cout<< (!x&&!y? 'T':'F')<<endl;     
       
    
    //Row 4 output
    x=false;y=false;
    cout<<(x?'T':'F')<<" ";
    cout<<(y?'T':'F')<<"  ";
    cout<<(!x?'T':'F')<<"  ";
    cout<<(!y?'T':'F')<<"   ";
    cout<<(x&&y?'T':'F')<<"    ";
    cout<<(x||y?'T':'F')<<"    ";
    cout<< (x^y? 'T':'F')<<"      ";
    cout<< ((x^y)^y? 'T':'F')<<"      ";    
    cout<< ((x^y)^x? 'T':'F')<<"       ";   
    cout<< (!(x&&y)? 'T':'F')<<"       ";  
    cout<< (!x||!y? 'T':'F')<<"       "; 
    cout<< (!(x||y)? 'T':'F')<<"       "; 
    cout<< (!x&&!y? 'T':'F')<<endl;     
        
    return 0;
}
