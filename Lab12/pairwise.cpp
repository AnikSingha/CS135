/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab12D

Create a function that returns the pairwise of two vectors
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> sumPairWise(const vector<int> &v1, const vector<int> &v2){
    vector<int> pair, larger, smaller;
    if (v1.size() > v2.size()){
        larger = v1;
        smaller = v2;
    } else {
        larger = v2;
        smaller = v1;
    }
    for (int i = 0; i < smaller.size(); i++){
        pair.push_back(larger[i] + smaller[i]);
    }
    pair.push_back(larger[larger.size() - 1]);
    return pair;
}

int main(){
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};
    sumPairWise(v1, v2); // returns [5, 7, 3]
}