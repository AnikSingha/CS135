/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project1C

Create a BETTER calculator
*/

#include <iostream>

using namespace std;

int main(){
    int num, answer = 0;
    char operation;
    cin >> answer;
    while (cin >> operation){
        if (operation == '+'){
            cin >> num;
            answer += num;
        } else if(operation == '-'){
            cin >> num;
            answer -= num;
        } else if (operation == ';'){ //
            cout << answer << endl;
            cin >> answer;
        }
    }
}