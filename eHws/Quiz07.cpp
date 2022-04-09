/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz07

Max of 3 functions
*/

#include <iostream>

using namespace std; //

int max3(int a, int b, int c){
    int x = max(a,b);
    int y = max(x,c);
    return y;
}

int main(){

}