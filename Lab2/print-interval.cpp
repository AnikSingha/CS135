/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2B

Print all numbers between two integers
*/

#include <iostream>

using namespace std;

int main() {
    int L, U;
    cout << "Please enter L: ";
    cin >> L;
    cout << "Please enter U: ";
    cin >> U;
    for (int i = L; i < U; i++){
        cout << i << " ";
    }
}