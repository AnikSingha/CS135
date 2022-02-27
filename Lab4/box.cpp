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
<<<<<<< HEAD
<<<<<<< HEAD
    string ast = "*";
    cout << "Input width: "; //
=======
=======
>>>>>>> 23214425940c1cefeb6b01bfe98767f99f0eb17c
    cout << "Input width: ";
>>>>>>> b6b9041fb35568b72896e3d47f56834c582459b3
    cin >> width;
    cout << "Input height: ";
    cin >> height;
    cout << endl << "Shape:" << endl << endl;
    for (int row = 0; row < height; row++){
        for (int col = 0; col < width; col++){
            cout << "*";
        }
        cout << endl << endl;
    }
}
