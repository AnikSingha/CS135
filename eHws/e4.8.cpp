/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e1.7

Prnt each letter of a word on a different line
*/

#include <iostream>

using namespace std; //

int main(){
    string word;
    cin >> word;
    for (int i = 0; i < word.length(); i++){
        cout << word[i] << endl;
    }
}