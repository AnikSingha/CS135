/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6B

Caesar Cipher Theory
*/

#include <iostream>

using namespace std;

char shiftChar(char c, int rshift){
    int shifted;
    if ((int)c < 97 || (int)c > 122){
        shifted = c;
    } else if ((int)c + rshift > 122){
        shifted = (int)c - (26 - rshift);
    } else {
        shifted = (int)c + rshift;
    }
    return shifted;
}

char shiftUpper(char c, int rshift){
    int shifted;
    if ((int)c + rshift > 90){
        shifted = (int)c - (26 - rshift);
    } else {
        shifted = (int)c + rshift;
    }
    return shifted;
}

string encryptCaesar(string plaintext, int rshift){
    string shifted;
    for (int i = 0; i < plaintext.size(); i++){
        if ((int)plaintext[i] >= 65 && (int)plaintext[i] <= 90){
            shifted += shiftUpper(plaintext[i], rshift);
        } else {
            shifted += shiftChar(plaintext[i], rshift);
        }
    }
    return shifted;
}

int main() {
    string text;
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, text);
    cout << "Enter shift: ";
    cin >> shift;
    cout << "Ciphertext: " << encryptCaesar(text, shift);
}