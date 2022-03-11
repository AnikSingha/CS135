/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e3.5

Output whether a set of three numbers are increasing or decreasing 
*/

#include <iostream>

using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    if (c > b && b > a)
    {
        cout << "Increasing";
    }

    else if (c < b && b < a)
    {
        
        cout << "Decreasing";
    }

    else
    {
        cout << "Neither";
    }
}