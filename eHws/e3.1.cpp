/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e3.1

Ouput whether a number is negative, 0, or positive
*/

#include <iostream>

using namespace std; //

int main(){
    int num;
    cin >> num;
    if (num < 0){
        cout << "Negative"; //
    } else if (num == 0){
        cout << "Zero"; //
    } else {
        cout << "Positive"; //
    }
}