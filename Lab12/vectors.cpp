/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab12A

Create a function that returns a vector
*/

#include <iostream>
#include <vector>

using namespace std;

vector<int> makeVector(int n){
    vector<int> x;
    for (int i = 0; i < n; i++){
        x.push_back(i);
    }
    return x;
}

int main(){
    /*
    vector<int> x = makeVector(21);
    for (int i = 0; i < x.size(); i++){
        cout << x[i] << endl;
    }
    */
}