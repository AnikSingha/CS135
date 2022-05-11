#include <iostream>
#include <iomanip>
#include <vector>
#include <cstdlib>
#include "Board.hpp"

using namespace std;

/*
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
*/

Board::~Board(){
    delete[] panel;
	panel = nullptr;
}

void Board::print() const {
	for (int i = 0; i < numRows; i++) {
		for (int h = 0; h < numCols; h++) {
			cout << "+----";
		}
		cout << "+" << endl;
		for (int x = 0; x < numCols; x++) {
			cout << "|";
			if (panel[i][x] != 0) {
				cout << std::setw(4) << panel[i][x];
			}
			else {
				cout << "    ";
			}
		}
		cout << "|" << endl;
	}
	for (int i = 0; i < numCols; i++) {
		cout << "+----";
	}
	cout << "+" << endl;
}

bool Board::noAdjacentSameValue() const {
	for (int i = 1; i < numRows; i++) {
		for (int j = 1; j < numCols - 1; j++) {
			if (panel[i][j] == panel[i][j + 1])
				return false;
		}
	}
	for (int j = 0; j < numCols; j++) {
		for (int i = 0; i < numRows - 1; i++) {
			if (panel[i][j] == panel[i + 1][j]) {
				return false;
			}
		}
	}
	return true;
}

void Board::selectRandomCell(int& row, int& col) {
	std::vector<int> zeroes;
	for (int i = 0; i < numRows; i++) {
		for (int j = 0; j < numCols; j++) {
			if (panel[i][j] == 0) {
				zeroes.push_back(i * numCols + j);
			}
		}
	}
	if (zeroes.size() > 0) {
		int r = rand() % zeroes.size() + 0;
		r = zeroes.at(r);
		row = r / numCols;
		col = r % numCols;
		panel[row][col] = 1;
		Board::print();
	}
	if (noAdjacentSameValue() || zeroes.size() == 0) {
		cout << "Game over. Try again." << endl;
	}
}