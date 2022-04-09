/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e7.18

Perimeter of a triangle
*/

#include <iostream>
#include <cmath>

using namespace std; //

struct Point{
    public:
        double x,y;
};

struct Triangle{
    public:
        Point A,B,C;
};

double distance(Point a, Point b){
    return sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
}

double perimeter(Triangle x){
    double side1 = distance(x.A, x.B);
    double side2 = distance(x.A, x.C);
    double side3 = distance(x.B, x.C);
    return side1 + side2 + side3;
}

int main(){
    Point a, b, c;
    cout << "Enter two values for point a: ";
    cin >> a.x >> a.y;
    cout << "Enter two values for point b: ";
    cin >> b.x >> b.y;
    cout << "Enter two values for point c: ";
    cin >> c.x >> c.y;
    Triangle d = {a,b,c};
    cout << perimeter(d);
}