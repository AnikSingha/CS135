/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e5.6

Return the middle of a string
*/

#include <iostream>
#include <string>

using namespace std; //

string middle(string str){
    int length = str.size();
    string x;
    if (length % 2 == 0){
        x = str[(length / 2) - 1];
        x += str[(length / 2)];
    } else{
        x = str[(length - 1) / 2];
    }
    return x;
}

int main(){
    string x;
    cout << "Enter a string: ";
    cin >> x;
    cout << middle(x);
}