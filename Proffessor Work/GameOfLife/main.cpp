/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on July 23, 2012, 11:40 AM
 * Game of Life
 *  Cells that have exactly 3 living neighbours at one instant will be "on" in the next instant.
 *  Cells that have exactly 2 living neighbours at one instant will stay as they are in the next instant.
 *  Cells with any other number of living neighbours at one instant will turn "off" the next instant.
 */

#include <cstdlib>
#include <iostream>    
#include <ctime>
#include <cmath>
#include <iomanip>
using namespace std;

const int COLS=20;
void fillArray(bool [][COLS],int);
int countNeighbor(bool [][COLS],int,int,int);
void nextGen(bool [][COLS],int);
int display(bool [][COLS],int,int);
void pause(int);

int main(int argc, char** argv) {
    //Declare and randomize
    srand(static_cast<unsigned int>(time(0)));
    const int ROWS=8;
    bool gol[ROWS][COLS];
    //Fill the array
    fillArray(gol,ROWS);
    //Display the array
    const int GEN=500;
    for(int i=1;i<=GEN;i++){
        display(gol,ROWS,i);
        pause(1);
        nextGen(gol,ROWS);
    }
    //Exit stage right
    return 0;
}

void nextGen(bool gol[][COLS],int ROWS){
    //Create a new temporary array
    bool golTemp[ROWS][COLS];
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            //cout<<countNeighbor(gol,ROWS,row,col);
            int c=countNeighbor(gol,ROWS,row,col);
            if(c==3)golTemp[row][col]=1;
            else if(c==2)golTemp[row][col]=gol[row][col];
            else golTemp[row][col]=0;
        }
        //cout<<endl;
    }
    //copy the new array into the old
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            gol[row][col]=golTemp[row][col];
        }
    }
}

int countNeighbor(bool gol[][COLS],int ROWS,int r,int c){
    int count=0;
    if(r==0||r==ROWS-1||c==0||c==COLS-1)return count;
    for(int row=r-1;row<=r+1;row++){
        for(int col=c-1;col<=c+1;col++){
            if(row==r&&col==c)continue;
            else if(row==0||row==ROWS-1||col==0||col==COLS-1)continue;
            else if(gol[row][col])count++;
        }
    }
    return count;
}

void pause(int pTime){
    int beg=time(0),end,delta;
    do{
        end=time(0);
        delta=end-beg;
    }while(delta<pTime);
}

int display(bool gol[][COLS],int ROWS,int gen){
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            if(row==0||row==ROWS-1||col==0||col==COLS-1)cout<<" ";
            else if(gol[row][col])cout<<"*";
            else cout<<"-";
        }
        if(row==1)cout<<setw(5)<<gen;
        cout<<endl;
    }
    cout<<endl;
}

void fillArray(bool gol[][COLS],int ROWS){
    float howOftenLive=0.99;
    unsigned int maxRand=pow(2,31)-1;
    for(int row=0;row<ROWS;row++){
        for(int col=0;col<COLS;col++){
            gol[row][col]=rand()%2;
            if(1.0f*rand()/maxRand>howOftenLive)gol[row][col]=0;
        }
    }
}

