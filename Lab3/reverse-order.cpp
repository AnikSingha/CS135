/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3D

Reverse chronological order
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;

int main(){
    string junk, earlier, later, date, arrayDates[365];
    double eastSt, eastEl, westSt, westEl, westElevations[365];
    int counter = 0, start_count, end_count;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    getline(fin, junk);
    cout << "Enter earlier date: ";
    cin >> earlier;
    cout << "Enter later date: ";
    cin >> later;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        westElevations[counter] = westEl;
        arrayDates[counter] = date;
        if (date == earlier){
            start_count = counter;
        }
        if (date == later){
            end_count = counter;
        }
        counter++;
    }
    fin.close();
    while (end_count != start_count - 1){
        double w = westElevations[end_count];
        cout << arrayDates[end_count] << " " << w << " ft" << endl;
        end_count--;
    }
}