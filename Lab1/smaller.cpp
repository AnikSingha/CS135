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
    int first, second; // Initialize variables
    cout << "Enter the first number: "; // ask for input 
    cin >> first; // get value for first 
    cout << "Enter the second number: "; // ask for input for second
    cin >> second; // get value for second
    if (first < second){
        cout << "The smaller of the two is " << first;
    }
     else
        cout << "The smaller of the two is " << second;
}