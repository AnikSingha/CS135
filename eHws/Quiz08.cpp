/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz08

Remove e from string
*/

#include <iostream>

using namespace std; //

void remove_e(string & sentence){
    string x = "";
    for (int i=0; i < sentence.length(); i++){
        if (sentence[i] != 'e'){
            x += sentence[i];
        }
    }
    sentence = x;
}

int main(){
    string x = "Hello Hello";
    cout << x << endl;
    remove_e(x);
    cout << x;
}