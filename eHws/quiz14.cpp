/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz14
*/

#include <iostream>
#include <vector>

using namespace std; //

vector<int> makeVector(int n){
    vector<int> list;
    if (n > 0){
        for (int i = 0; i < n; i++){
            list.push_back(i);
        }
    }
    return list;
}