/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Project1D

Create a calculator that can do sqaures
*/

#include <iostream>

using namespace std;

int main(){
    int num, temp, answer = 0;
    char operation, old_op = '+';
    cin >> num;
    answer += num;
    while (cin >> operation){
        if (operation == '+'){
            old_op = '+';
            cin >> num;
            answer += num;
        } else if(operation == '-'){//
            old_op = '-';
            cin >> num;
            answer -= num;
        } else if (operation == ';'){
            cout << answer << endl;//
            cin >> num;
            answer = num;
            old_op = ' ';
        }
        if (operation == '^'){//
            temp = num;
            num *= num;
            if (old_op == '-'){
                answer += temp;
                answer -= num;
            } else{
                answer += num;
                answer -= temp;
            }
        }
    }
}