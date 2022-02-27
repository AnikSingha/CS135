/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab2D

Compute Fibonacci numbers with loops and arrays
*/

#include <iostream>

using namespace std;

int main() {
    int fib[60];
    fib[0] = 0;
    fib[1] = 1; //
    cout << fib[0] << '\n' << fib[1] << '\n';
    for (int i = 2; i < 60; i++){
        fib[i] = fib[i-1] + fib[i-2]; //
        cout << fib[i] << '\n'; //
    }
}