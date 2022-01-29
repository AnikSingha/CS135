/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab12B

Create a function that returns a vector 
with only positives
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> goodVibes(const vector<int> &v){
    vector<int> positive;
    for (int i = 0; i < v.size(); i++){
        if (v[i] > 0){
            positive.push_back(v[i]);
        }
    }
    return positive;
}

int main(){
    /*
    vector<int> x = goodVibes({1,2,-1,3,4,-1,6});
    for (int i = 0; i < x.size(); i++){
        cout << x[i] << endl;
    }
    */
}