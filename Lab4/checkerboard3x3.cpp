/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4G

Print a checkerboard of 3x3 sqaures
*/

#include <iostream> //

using namespace std; //

int main() {
    int width, height;
    string ast = "*";
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl << endl << "Shape:" << endl << endl;
    for (int row = 0; row < height; row++){
        for (int col = 0; col < width; col++){
            if ((row / 3) % 2 < 1){
                if ((col / 3) % 2 < 1){
                    cout << ast;
                } else {
                    cout << " ";
                }
            }
            if ((row / 3) % 2 >= 1){
                if ((col / 3) % 2 >= 1){
                    cout << ast;
                } else {
                    cout << " ";
                }
            }
        } 
        cout << endl << endl;
    }
}
