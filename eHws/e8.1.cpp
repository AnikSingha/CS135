/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e8.1

File Writing
*/

#include <iostream>
#include <fstream>

using namespace std; //

int main(){
    fstream fin;
    fin.open("hello.txt", ios::out);
    fin << "Hello, World!";
    fin.close();
    string hello;
    fin.open("hello.txt", ios::in);
    while (getline(fin,hello)){
        cout << hello << endl;
    }
    fin.close();
}