/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4E

Upper triangle
*/

#include <iostream>

using namespace std;

int main() {
    int length;
    string line, ast = "*";
    cout << "Input side length: ";
    cin >> length;
    cout << endl << endl << "Shape:" << endl << endl;
    for (int x = 0; x < length; x++){
        line += ast;
    }
    cout << line << endl << endl;
    for (int i = 0; i < length - 1; i++){
        line[i] = ' ';
        cout << line << endl << endl;
    }
}