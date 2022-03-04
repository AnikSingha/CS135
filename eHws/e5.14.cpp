/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e5.14

Sort function
*/

#include <iostream>

using namespace std; //

void sort2(int& a, int& b){
    int old = a;
    if (a >b){
        a = b;
        b = old;
    }
}

int main(){
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    sort2(a,b);
    cout << a << b;
}