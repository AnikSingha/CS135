/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e9.5

Implement a class Rectangle
*/

#include <iostream>

using namespace std; //

class Rectangle{
    private:
        double width, height;
    public:
        Rectangle(double width, double height){
            this->width = width;
            this->height = height;
        }
        double get_perimeter(){
            return (width * 2) + (height * 2);
        }
        double get_area(){
            return width * height;
        }
        void resize(double factor){
            width *= factor;
            height *= factor;
        }
};