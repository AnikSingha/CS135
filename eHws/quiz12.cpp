/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Quiz12

*/

#include <iostream>

using namespace std; //

class Money{
    public:
        int dollars;
        int cents;
};

Money add_money(Money x, Money y){
    int cents = x.cents + y.cents;
    Money z = {x.dollars + y.dollars + (cents / 100), cents % 100};
    return z;
}