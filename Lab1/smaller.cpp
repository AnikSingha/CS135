/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1A

Find and output the smaller of two integers
*/

#include <iostream>

using namespace std;

int main() {
    int first, second;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    if (first < second){
        cout << "The smaller of the two is " << first;
    }
     else
        cout << "The smaller of the two is " << second;
}