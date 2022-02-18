/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4F

Upside-down trapezoid
*/

#include <iostream>

using namespace std;

int main() {
    int width, height, stars, spaces = 0;
    cout << "Input width: ";
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    stars = width;
    if (height * 2 > width){
        cout << endl << endl << "Impossible shape!";
        return 0;
    }
    cout << endl << endl << "Shape:" << endl << endl;
    for (int row = 0; row < height; row++){
        for (int x = 0; x < spaces; x++){
            cout << " ";
        }
        for (int i = 0; i < stars; i++){
            cout << "*";
        }
        cout << endl;
        spaces += 1;
        stars -= 2;
    }
}
