/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab13

Print all numbers in range
*/

#include <iostream> //

using namespace std; //

void printRange(int left, int right){
    if (left <= right){
        cout << left << " ";
        printRange(left + 1, right);
    }
}

int sumRange(int left, int right){
    if (right < left){
        return 0;
    } else if (left < right){
        left +=  sumRange(left + 1, right);
    }
    return left;
}

int sumArray(int *arr, int size){
	if (size == 1){
		return *arr;
    } else if(size <= 0)
		return 0;
	return *arr + sumArray(arr + 1, size - 1);
}

bool isAlphanumeric(string s){
    if (s == ""){
        return true;
    } else if (!(isalnum(s[0]))){
		return false;
    }
	return isAlphanumeric(s.substr(1));
}

int main(){
   
}