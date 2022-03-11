/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e6.8

Check if two arrays are equal
*/

#include <iostream>

using namespace std; 

bool equals(int a[], int a_size, int b[], int b_size){
    for (int i = 0; i < max(a_size, b_size); i++){
        if (a[i] != b[i])
            return false;
    }
    return true;
}