/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3A

output the East basin storage on that day
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
    string junk, date_wanted, date, eastSt;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    getline(fin, junk);
    cout << "Enter date: ";
    cin >> date_wanted;
    cout << "East Basin Storage: ";
    while (fin >> date >> eastSt){
        fin.ignore(INT_MAX, '\n');
        if (date == date_wanted){
            cout << eastSt << " billion gallons";
        }
    }
    fin.close();
}