/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2C

Store, update, and retrieve numbers using arrays
*/

#include <iostream>

using namespace std;

int main() {
    int myData[10], i, v; //
    for (int x = 0; x < 10; x++){
        myData[x] = 1;
    } //
    do{
        for (int x = 0; x < 10; x++){
            cout << myData[x] << " ";
        }
        cout << '\n' << '\n';
        cout << "Input index: ";
        cin >> i;
        cout << "Input value: "; //
        cin >> v;
        cout << '\n' << '\n';
        if (i >= 0 && i < 10){
            myData[i] = v;
        }
     } while(i >= 0 && i < 10);
     cout << "Index out of range. Exit.";
}