/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2A

Input Validation
*/

#include <iostream>

using namespace std;

int main() {
    int num;
    do{
        cout << "Please enter an integer: ";
        cin >> num;
    } while (0 >= num || num >= 100);
    cout << "Number squared is " << num * num;
}

