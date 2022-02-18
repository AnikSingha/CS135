/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3B

finds the minimum and maximum storage in East basin in 2018
*/

#include <iostream>
#include <fstream>
#include <cstdlib> //
#include <climits> //

using namespace std;

int main(){
    double min = 100, max = 0;
    string junk, date;
    double eastSt;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    getline(fin, junk);
    while (fin >> date >> eastSt){
        fin.ignore(INT_MAX, '\n');
        if (eastSt > max){
            max = eastSt;
        }
        if (eastSt < min){
            min = eastSt;
        }
    }
    cout << "Minimum storage in East basin: " << min << " billion gallons"<< endl;
    cout << "Maximum storage in East basin: " << max << " billion gallons";
    fin.close();
}