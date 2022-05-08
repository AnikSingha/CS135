/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab12D

Create a function that returns the pairwise of two vectors
*/

#include <iostream>
#include <vector>

using namespace std; //

vector<int> sumPairWise(vector<int> &v1, vector<int> &v2){
    vector<int> x;
    int big = max(v1.size(), v2.size());
    int small = min(v1.size(), v2.size());
    for (int i = 0; i < big - small; i++){
        if (v1.size() > v2.size()){
            v2.push_back(0);
        } 
        if (v1.size() < v2.size()){
            v1.push_back(0);
        }
    }
    for (int i = 0; i < big; i++){
        x.push_back(v1[i] + v2[i]);
    }
    return x;
}

int main(){
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    vector<int> x = sumPairWise(v1, v2); // returns [5, 7, 3]
    for (int i = 0; i < x.size(); i++){
        cout << x[i] << " ";
    }
}