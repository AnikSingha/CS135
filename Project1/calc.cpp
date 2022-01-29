/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project1B

Create a calculator
*/

#include <iostream>

using namespace std;

int main(){
    int num, answer = 0;
    char operation;
    cin >> answer;
    while (cin >> operation >> num){
        if (operation == '+'){
            answer += num;
        } else if (operation == '-'){
            answer -= num;
        }
    }
    cout << answer << endl;
}