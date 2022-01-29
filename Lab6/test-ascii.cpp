/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6A

Test ascii
*/

#include <iostream>

using namespace std;

int main() {
    string s;
    cout << "Input: ";
    getline(cin, s);
    cout << endl << endl;
    for (int i = 0; i < s.length(); i++){
        cout << s[i] << " " << (int)s[i] << endl;
    }
}