/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project1A

Write a program that reads a sequence of integers from cin
and reports their sum.
*/

#include <iostream>

using namespace std;

int main() {
    int num, sum = 0;
    while (cin >> num){
        sum += num;
    }
    cout << sum << endl;
}
