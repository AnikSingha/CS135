/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4C

Output a cross
*/

#include <iostream> // 

using namespace std; //

int main() {
    int size, lower, upper;
    string line, ast = "*";
    cout << "Input size: ";
    cin >> size;
    cout << endl << endl << "Shape:" << endl << endl;
    lower = 1;
    upper = size;
    for (int row = 0; row < size; row++){
        line = "";
        for (int col = 0; col < size + 1; col++){
            if (col == lower || col == upper){
                line += ast;
            } else {
                line += " ";
            }
        }
        lower += 1;
        upper -= 1;
        cout << line << endl << endl;
    }
}