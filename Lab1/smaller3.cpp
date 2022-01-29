/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1B

Find and output the smaller of three integers
*/

#include <iostream>

using namespace std;

int main() {
    int first, second, third, lesser;
    cout << "Enter the first number: ";
    cin >> first;
    cout << "Enter the second number: ";
    cin >> second;
    cout << "Enter the third number: ";
    cin >> third;
    if (first < second){
        lesser = first;
    } else {
        lesser = second;
    }
    if (lesser > third){
        lesser = third;
    }
    cout << "The smaller of the three is: " << lesser;
}