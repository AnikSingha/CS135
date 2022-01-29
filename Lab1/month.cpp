/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab1D

Asks the user to input the year and the month (1-12) and prints the number of days in that month
*/

#include <iostream>

using namespace std;

int main() {
    int year, month;
    cout << "Enter year: ";
    cin >> year;
    cout << "Enter month: ";
    cin >> month;
    bool leap;
    if (year % 4 != 0){
        leap = false;
    } else if (year % 100 != 0){
        leap = true;
    } else if (year % 400 != 0){
        leap = false;
    } else {
        leap = true;
    }
    if (month == 1 || month == 3 || month == 5 || month == 7 || 
        month == 8 || month == 10 || month == 12){
            cout << "31 days";
        } else if (month == 4 || month == 6 || month == 9 || month == 11){
            cout << "30 days";
        } else if (month == 2 && leap == true){
            cout << "29 days";
        } else {
            cout << "28 days";
        }
}