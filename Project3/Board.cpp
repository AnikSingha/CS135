#include "Board.hpp"
#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

/*Board::Board(){
    max = 0;
    target = 32;
    numRows = 3;
    numCols = 3;
    panel = new int*[3];
    for(int i = 0; i < 3; i++){
        panel[i] = new int[3];
    }
}
Board::Board(int m){
    if(m >= 1){
        numRows = m;
        numCols = m;
    }
    else{
        numRows = 3;
        numCols = 3;
    }
    max = 0;
    target = 32;
    panel = new int*[numRows];
    for(int i = 0; i < numRows; i++){
        panel[i] = new int[numCols];
    }
}
Board::Board(int m, int n){
    if(m >= 1 && n >= 1){
        numRows = m;
        numCols = n;
    }
    else{
        numRows = 3;
        numCols = 3;
    }
    max = 0;
    target = 32;
    panel = new int*[numRows];
	for (int i = 0; i < numRows; i++)
		panel[i] = new int[numCols];
}
Board::~Board(){
    for (int i=0; i < numRows; i++){
    delete[] panel[i];
    panel[i] = nullptr;
    }
    delete[] panel;
    panel = nullptr;
}*/

void Board::print() const{
    for (int i = 0; i < numRows; i++){
		for (int j = 0; j < numCols; j++)
		cout << "+----";
        cout << "+" << endl;
		for (int j = 0; j < numCols; j++)
		{
			cout << "|";
			if (panel[i][j] != 0)
				cout << setw(4) << panel[i][j];
			else
				cout << setw(4) << "";
		}
		cout << "|" << endl;
	}
    for (int j = 0; j < numCols; j++)
    cout << "+----";
	cout << "+" << endl;
}

/*void Board::selectRandomCell(int& row, int& col){
    int empty_cells = 0;
    vector<int> v;
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols; j++){
            if(panel[i][j] == 0){
                empty_cells++;
                v.push_back((i * numCols) + j);
            }
        }
    }
    if(empty_cells != 0){
        int random = rand() % v.size();
        random = v.at(random);
        row = random / numCols;
        col = random % numCols;
        panel[row][col] = 1;
        Board::print();
    } 
    if(noAdjacentSameValue() || v.size() == 0){
        cout << "Game over. Try again." << endl;
    }
}

bool Board::noAdjacentSameValue() const{
    for(int i = 0; i < numRows; i++){
        for(int j = 0; j < numCols - 1; j++){
            if(panel[i][j] == panel[i][j+1]){
                return false;
            }
        }
    }
    for(int j = 0; j < numCols; j++){
        for(int i = 0; i < numRows - 1; i++){
            if(panel[i][j] == panel[i+1][j]){
                return false;
            }
        }
    }
    if(max < target){
        return true;
    }
}*/

void Board::pressLeft(){
    for (int i = 0; i < numRows; i++){
		for (int j = 0; j < numCols - 1; j++){
			if (panel[i][j] != 0 && panel[i][j] == panel[i][j+1]){
				panel[i][j] *= 2;
				for (int k = j+1; k < numCols - 1; k++){
					panel[i][k] = panel[i][k+1];
                }
				panel[i][numCols - 1] = 0;
				j--;
			}
		}
	}
	int row, col;
	Board::selectRandomCell(row, col);
}

void Board::pressRight(){
    for (int i = 0; i < numRows; i++){
		for (int j = numCols - 1; j > -1; j--){
			if (panel[i][j] != 0 && panel[i][j] == panel[i][j - 1]){
				panel[i][j] *= 2;
				for (int k = j-1; k > 0; k--){
					panel[i][k] = panel[i][k-1];
                }
				panel[i][0] = 0;
				j++;
			}
		}
	}
	int row, col;
	Board::selectRandomCell(row, col);
}

void Board::pressUp(){
    for (int i = 0; i < numRows - 1; i++){
        for (int j = 0; j < numCols; j++){
            if (panel[i][j] != 0 && panel[i][j] == panel[i+1][j]){
                panel[i][j] *= 2;
                for (int f = i+1; f < numRows - 1; f++){
                    panel[f][j] = panel[f+1][j];
                }
                panel[numRows - 1][j] = 0;
            }
        }
    }
	int row, col;
	Board::selectRandomCell(row, col);
}

void Board::pressDown(){
    for (int i = numRows - 1; i > 0; i--){
		for (int j = 0; j < numCols; j++){
			if (panel[i][j] != 0 && panel[i][j] == panel[i-1][j]){
				panel[i][j] *= 2;
				for (int f = i-1; f > 0; f--){
					panel[f][j] = panel[f-1][j];
                }
				panel[0][j] = 0;
			}
		}
	}
	int row, col;
	Board::selectRandomCell(row, col);
}