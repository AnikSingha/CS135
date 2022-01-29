/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab6D

Decryption
*/

#include <iostream>

using namespace std;

char unshiftCharCaesar(char c, int rshift){
    int shifted;
    if ((int)c < 97 || (int)c > 122){
        shifted = c;
    } else if ((int)c - rshift < 97){
        shifted = (int)c + (26 - rshift);
    } else {
        shifted = (int)c - rshift;
    }
    return shifted;
}

char unshiftUpperCaesar(char c, int rshift){
    int shifted;
    if ((int)c - rshift < 65){
        shifted = (int)c + (26 - rshift);
    } else {
        shifted = (int)c - rshift;
    }
    return shifted;
}

string decryptCaesar(string plaintext, int rshift){
    string shifted;
    for (int i = 0; i < plaintext.size(); i++){
        if ((int)plaintext[i] >= 65 && (int)plaintext[i] <= 90){
            shifted += unshiftUpperCaesar(plaintext[i], rshift);
        } else {
            shifted += unshiftCharCaesar(plaintext[i], rshift);
        }
    }
    return shifted;
}

char unshiftLowerVigenere(char c, char key){
    int shifted, rshift;
    rshift = (int)key - (int)'a';
    if ((int)c < 97 || (int)c > 122){
        shifted = c;
    } else if ((int)c - rshift < 97){
        shifted = (int)c + (26 - rshift);
    } else {
        shifted = (int)c - rshift;
    }
    return shifted;
}

char unshiftUpperVigenere(char c, char key){
    int shifted, rshift;
    rshift = (int)key - (int)'a';
    if ((int)c - rshift < 65){
        shifted = (int)c + (26 - rshift);
    } else {
        shifted = (int)c - rshift;
    }
    return shifted;
}

string decryptVigenere(string plaintext, string keyword){
    int key_index = 0;
    string shifted;
    for (int i = 0; i < plaintext.size(); i++){
        if (key_index == keyword.length()){
            key_index = 0;
        }
        if ((int)plaintext[i] >= 65 && (int)plaintext[i] <= 90){
            shifted += unshiftUpperVigenere(plaintext[i], keyword[key_index]);
            key_index += 1;
        } else {
            shifted += unshiftLowerVigenere(plaintext[i], keyword[key_index]);
            if ((int)plaintext[i] > 96 && (int)plaintext[i] < 123){
                key_index += 1;
            }
        }
        //cout << key_index << " " << keyword.length() << " " << plaintext[i] << " " << shifted[i] << endl;
    }
    return shifted;
}

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
    int shift;
    cout << "Enter plaintext: ";
    getline(cin, plaintext);
    cout << endl << endl << "= Caesar =" << endl;
    cout << "Enter shift: ";
    cin >> shift;
    cout << "Ciphertext: " << encryptCaesar(plaintext, shift) << endl;
    cout << "Decrypted: " << decryptCaesar(encryptCaesar(plaintext, shift), shift) << endl << endl << endl;
    cout << "= Vigenere =" << endl;
    cout << "Enter keyword: ";
    cin >> keyword;
    cout << "Ciphertext: " << encryptVigenere(plaintext, keyword) << endl;
    cout << "Decrypted: " << decryptVigenere(encryptVigenere(plaintext, keyword), keyword);

}