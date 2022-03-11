
/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6B

Caesar Cipher Theory
*/

#include <iostream>

using namespace std;

//Function that takes care of the upper case characters
char shiftUpper(char c, int rshift){
    int shifted;
    if ((int)c + rshift > 90){
        shifted = (int)c - (26 - rshift);
    } else {
        shifted = (int)c + rshift;
    }
    return shifted;
}

//Function that takes care of the lower case characters
char shiftLower(char c, int rshift){
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

//Both functions get used here, to shift any character, whether it be upper case or lose case
char shiftChar(char c, int rshift){
    if ((int)c >= 65 && (int)c <= 90){
        return shiftUpper(c, rshift);
    } else {
        return shiftLower(c, rshift);
    }
}

//Uses a for loop and shiftChar function to shift each character one by one
string encryptCaesar(string plaintext, int rshift){
    string shifted;
    for (int i = 0; i < plaintext.size(); i++){
        shifted += shiftChar(plaintext[i], rshift);
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