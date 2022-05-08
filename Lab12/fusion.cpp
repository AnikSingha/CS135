/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab12C

Create a function that empties a vector into another vector
*/

#include <iostream>
#include <vector>

using namespace std;

void gogeta(vector<int> &goku, vector<int> &vegeta){
    for (int i = 0; i < vegeta.size(); i++){
        goku.push_back(vegeta[i]);
    }
    vegeta.clear();
}

int main(){
    vector<int> v1{1,2,3};
    vector<int> v2{4,5};

    gogeta(v1, v2); // v1 is now [1,2,3,4,5] and v2 is empty.
}
