#include <iostream>
#include <iomanip>
#include "Board.hpp"

using namespace std;

Board::Board(){
    max = 0; 
    target = 32;
    numRows = 3; 
    numCols = 3;
    panel[numRows][numCols];
}

Board::Board(int m){
    max = 0; 
    target = 32;
    if(m >= 1){ 
        numRows = m; 
        numCols = m; 
    } else { 
        numRows = 3; 
        numCols = 3; 
    }
    panel[numRows][numCols];
}

Board::Board(int m, int n){
    max = 0; 
    target = 32;
    if(m >= 1 && n >= 1){ 
        numRows = m; 
        numCols = n; 
    } else {
        numRows = 3; 
        numCols = 3; 
    }
    panel[numRows][numCols];
}

Board::~Board(){
    for(int i = 0; i < sizeof(panel) / sizeof(panel[0]); i++){
        delete[] panel[i];
    }
    delete[] panel;
    panel = nullptr;
}

void Board::print() const{
    for(int row = 0; row < numRows; row++){
        for (int i = 0; i < numCols; i++){
            cout << "+----";
        }
        
        cout << "+" << endl;

        for(int col = 0; col <= numCols; col++){
            if(col != numCols - 1){    
                cout << "|    ";
            }
        }
        cout << "|" << endl;
    }
    for (int j = 0; j < numCols; j++){
            cout << "+----";
    }
    cout << "+" << endl;
}