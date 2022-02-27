/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab4D

Lower triangle
*/

#include <iostream> //

using namespace std; //

int main() {
    int length;
    string line;
    cout << "Input side length: ";
    cin >> length;
    cout << endl << endl << "Shape:" << endl << endl;
    for (int row = 0; row < length; row++){
        line += "*";
        cout << line << endl << endl;
    }
}
