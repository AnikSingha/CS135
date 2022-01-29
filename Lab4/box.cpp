/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4A

Output a box 
*/

#include <iostream>

using namespace std;

int main() {
    int width, height;
    string ast = "*";
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl << "Shape:" << endl << endl;
    for (int row = 0; row < height; row++){
        for (int col = 0; col < width; col++){
            cout << ast;
        }
        cout << endl << endl;
    }
}
