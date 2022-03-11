/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: QuizSubstring

Print a word, idk bruh
*/

#include <iostream>

using namespace std; 

int main(){
    string word;
    getline(cin,word);
    for (int i = 0; i <= word.size(); i++){
        cout << word.substr(0,i) << endl;
    }
    for (int i = word.size() - 1; i > -1; i--){
        word.resize(i);
        cout << word << endl;
    }
}