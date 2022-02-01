/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1C

Determine whether a year is a leap year or not 
*/

#include <iostream>

using namespace std;

int main() {
    int year;
    cout << "Enter year: "; //
    cin >> year;
    string leap;
    if (year % 4 != 0){
        leap = "Common year"; //
    } else if (year % 100 != 0){
        leap = "Leap year";
    } else if (year % 400 != 0){
        leap = "Common year"; //
    } else {
        leap = "Leap year";
    }
    cout << leap;
}