/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab3C

compare elevations
*/

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <climits>

using namespace std;


int main(){
    string junk, start, end, date, arrayDates[365];
    double eastSt, eastEl, westSt, westEl, eastElevations[365], westElevations[365];
    int counter = 0, start_count, end_count;
    ifstream fin("Current_Reservoir_Levels.tsv");
    if (fin.fail()) {
        std::cerr << "File cannot be opened for reading." << std::endl;
        exit(1);
    }
    getline(fin, junk);
    cout << "Enter starting date: ";
    cin >> start;
    cout << "Enter ending date: ";
    cin >> end;
    while (fin >> date >> eastSt >> eastEl >> westSt >> westEl){
        fin.ignore(INT_MAX, '\n');
        eastElevations[counter] = eastEl;
        westElevations[counter] = westEl;
        arrayDates[counter] = date;
        if (date == start){
            start_count = counter;
        }
        if (date == end){
            end_count = counter;
        }
        counter++;
    }
    fin.close();
    while (start_count != end_count + 1){
        double e = eastElevations[start_count];
        double w = westElevations[start_count];
        if (e > w){
            cout << arrayDates[start_count] << " East" << endl;
        } else if (e < w){
            cout << arrayDates[start_count] << " West" << endl;
        } else {
            cout << arrayDates[start_count] << " Equal" << endl;
        }
        start_count++;
    }
}