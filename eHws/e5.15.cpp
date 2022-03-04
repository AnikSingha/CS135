/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e5.15

Sort 3 function
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

void sort3(int&a, int&b, int&c){
    sort2(c,b);
    sort2(b,c);
    sort2(a,b);
    sort2(a,c);
    sort2(b,c);
}

int main(){
    int a, b, c;
    cout << "Enter three numbers: ";
    cin >> a >> b >> c;
    sort3(a,b,c);
    cout << a << b << c;
}