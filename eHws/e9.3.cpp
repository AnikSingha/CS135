/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: e9.3

Simulate a circuit
*/

#include <iostream>

using namespace std; //

class Circuit{
    private:
        int first_switch_state = 0;
        int second_switch_state = 0;
        int lamp_state = 0;
    public:
        int get_first_switch_state(){
            return first_switch_state;
        }
        int get_second_switch_state(){
            return second_switch_state;
        }
        int get_lamp_state(){
            return lamp_state;
        }
        void toggle_first_switch(){
            if (first_switch_state == 0){
                first_switch_state = 1;
            } else{
                first_switch_state = 0;
            }
            if (lamp_state == 0){
                lamp_state = 1;
            } else{
                lamp_state = 0;
            }
        }
        void toggle_second_switch(){
            if (second_switch_state == 0){
                second_switch_state = 1;
            } else {
                second_switch_state = 0;
            }
            if (lamp_state == 0){
                lamp_state = 1;
            } else{
                lamp_state = 0;
            }
        }
};