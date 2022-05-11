/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e6.20

Vector Append
*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std; //


vector<int> merge_sorted(vector<int> a, vector<int> b){
    for(int i = 0; i < b.size(); i++){
        a.push_back(b[i]);
        sort(a.begin(), a.end());
    }
    return a;
}


int main(){
    vector<int> a = {1, 4, 9, 16};
    vector<int> b = {4, 7, 9, 9, 11};
    vector<int> c = merge_sorted(a,b);
}