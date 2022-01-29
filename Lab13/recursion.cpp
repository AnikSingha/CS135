/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab13A

Print all numbers in range
*/

#include <iostream>

using namespace std;

void printRange(int left, int right){
    if (left <= right){
        cout << left << " ";
        printRange(left + 1, right);
    }
}

int sumRange(int left, int right){
    if (left < right){
        left +=  sumRange(left + 1, right);
    }
    return left;
}

int sumArray(int *arr, int size){
    
}

int main(){
    printRange(-2, 10);
    cout << endl << sumRange(1,3);
}