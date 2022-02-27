/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4B

Output a checkerboard
*/

#include <iostream> //

using namespace std;//

int main() {
    int width, height, actual;
    string ast = "*";
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl << "Shape:" << endl << endl;
    for (int row = 0; row < height; row++){
        for (int col = 0; col < width; col++){
            if (row % 2 == 0){
                if (col % 2 == 0){
                    cout << ast;
                } else {
                    cout << " ";
                }
            } else if (row % 2 == 1){
                if (col % 2 == 0){
                    cout << " ";
                } else {
                    cout << ast;
                }
            }
        } 
        cout << endl << endl;
    }
}