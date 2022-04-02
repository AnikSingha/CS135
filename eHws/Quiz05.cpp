/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab Quiz 5
*/

#include <iostream>
#include <fstream>

using namespace std;

int main(){
    string line;
    ifstream fin("data.txt");
    while (fin >> line){
        cout << line << endl;
    }
    fin.close();
}