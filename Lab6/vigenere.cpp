/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6C

Vigenere Cipher Theory
*/

#include <iostream>

using namespace std;

char shiftLower(char c, char key){
    int shifted, rshift;
    rshift = (int)key - (int)'a';
    if ((int)c < 97 || (int)c > 122){
        shifted = c;
    } else if ((int)c + rshift > 122){
        shifted = (int)c - (26 - rshift);
    } else {
        shifted = (int)c + rshift;
    }
    return shifted;
}

char shiftUpperv(char c, char key){
    int shifted, rshift;
    rshift = (int)key - (int)'a';
    if ((int)c + rshift > 90){
        shifted = (int)c - (26 - rshift);
    } else {
        shifted = (int)c + rshift;
    }
    return shifted;
}


string encryptVigenere(string plaintext, string keyword){
    int key_index = 0;
    string shifted;
    for (int i = 0; i < plaintext.size(); i++){
        if (key_index == keyword.length()){
            key_index = 0;
        }
        if ((int)plaintext[i] >= 65 && (int)plaintext[i] <= 90){
            shifted += shiftUpperv(plaintext[i], keyword[key_index]);
            key_index += 1;
        } else {
            shifted += shiftLower(plaintext[i], keyword[key_index]);
            if ((int)plaintext[i] > 96 && (int)plaintext[i] < 123){
                key_index += 1;
            }
        }
    }
    return shifted;
}

int main() {
    string plaintext, keyword;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << "Enter keyword: ";
    cin >> keyword;
    cout << encryptVigenere(plaintext, keyword);
}