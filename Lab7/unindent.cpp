/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab7A

Remove indentation
*/

#include <iostream>//
#include <fstream>//

using namespace std;

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

int main(){
    string line;
    while (getline(cin,line)){
        cout << removeLeadingSpaces(line) << endl;
    }
}