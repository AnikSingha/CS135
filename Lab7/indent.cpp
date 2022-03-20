/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab7B

Add indentation
*/

#include <iostream>//
#include <fstream>//

using namespace std;//

string removeLeadingSpaces(string line){
    int counter = 0;
    string new_line;
    while (isspace(line[counter])){
        counter += 1;
    }
    for (counter; counter< line.size(); counter++){
        new_line += line[counter];
    }
    return new_line;
}

int countChar(string line, char c){
    int count = 0;
    for (int i = 0; i < line.size(); i++){
        if (line[i] == c){
            count += 1;
        }
    }
    return count;
}

int main(){
    int counter = 0;
    string line, updated;
    while (getline(cin, line, '\n')){
        string newLine = removeLeadingSpaces(line),
        indents = "";
        for(int i = 0; i < (newLine[0] != '}' ? counter : counter - 1 ); i++){
            indents += '\t';
        }
        cout << indents << newLine << endl;
        counter += countChar(line, '{') - countChar(line, '}');
    }
}