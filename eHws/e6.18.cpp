/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e6.18

Vector Append
*/

#include <iostream>
#include <vector>

using namespace std; //

vector<int> append(vector<int> a, vector<int> b){
    for (int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
    }
    return a;
}