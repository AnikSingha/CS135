/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz10

*/

#include <iostream>

using namespace std; //

int countChar(string line, char c){
    int count = 0;
    for (int i = 0; i < line.size(); i++){
        if (line[i] == c){
            count += 1;
        }
    }
    return count;
}

int unbalanced_brackets(string Input){
    int open = countChar(Input, '{');
    int closed = countChar(Input, '}');
    return open - closed;
}