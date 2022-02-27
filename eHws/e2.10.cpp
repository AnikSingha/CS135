/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e2.1

convert from inches to millimeters
*/

#include <iostream>

using namespace std; // 

int main(){
    int gallons;
    double fuel_efficiency, price;
    cout << "Enter the number of gallons";
    cin >> gallons;
    cout << "Enter the fuel efficiency";
    cin >> fuel_efficiency;
    cout << "Enter price per gallon";
    cin >> price;
    cout << "The cost per 100 miles is " << price * (100 / fuel_efficiency) << endl;
    cout << "The car can cross " << fuel_efficiency * gallons;

}