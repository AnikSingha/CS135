/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e7.16

Distance between 2 points
*/

#include <iostream>
#include <cmath>

using namespace std; //

struct Point{
    public:
        double x,y;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

int main(){
    Point a,b;
    cout << "Enter two values for point a: ";
    cin >> a.x >> a.y;
    cout << "Enter two values for point b: ";
    cin >> b.x >> b.y;
    cout << distance(a,b);
}
