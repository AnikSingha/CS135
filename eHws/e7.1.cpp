/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e7.1

Sort function that uses pointers
*/

#include <iostream>

using namespace std; //

void sort2(double* p, double * q){
    double temp = *p;
    if (p > q){
        *p = *q;
        *q = temp;
    }
}

int main(){
    double x = 5.7;
    double y = 3.2;
    sort2(&x, &y);
    cout << x << " " << y;
}