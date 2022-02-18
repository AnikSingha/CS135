/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e1.7

Output whether a set of three numbers are increasing or decreasing 
*/

#include <iostream>

using namespace std; //

int main(){
    int first, second, third;
    cin >> first, second, third;
    if (second > first && third > second){
        cout << "Increasing";
    } else if (second < first && third < second){
        cout << "Decreasing";
    } else {
        cout << "Neither";
    }
}