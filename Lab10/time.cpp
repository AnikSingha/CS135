/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab10A

Work with Classes
*/

#include <iostream>

using namespace std; //

class Time { 
public:
    int h; //
    int m; //
};

enum Genre {ACTION, COMEDY, DRAMA, ROMANCE, THRILLER}; //

class Movie { 
public: 
    string title;
    Genre genre;     // only one genre per movie
    int duration;    // in minutes
};

class TimeSlot { 
public: 
    Movie movie;     // what movie
    Time startTime;  // when it starts
};

int minutesSinceMidnight(Time time){
    int hours = time.h;
    int minutes = time.m;
    return (hours * 60) + minutes;
}

int minutesUntil(Time earlier, Time later){
    return minutesSinceMidnight(later) - minutesSinceMidnight(earlier);
}

Time addMinutes(Time time0, int min){
    Time p = time0;
    int minutes = p.m + min;
    p.h += minutes / 60; // It's an integer
    p.m = minutes % 60;
    return p;
}

string genre(Movie movie){
    string output;
    if (movie.genre == ACTION){
        output = "ACTION";
    } else if (movie.genre == COMEDY){
        output = "COMEDY";
    } else if (movie.genre == DRAMA){
        output = "DRAMA";
    } else if (movie.genre == ROMANCE){
        output = "ROMANCE";
    } else if (movie.genre == THRILLER){
        output = "THRILLER";
    }
    return output;
}

void printTimeSlot(TimeSlot ts){
    string output;
    Time endTime = addMinutes(ts.startTime, ts.movie.duration);
    output += ts.movie.title + " ";
    output += genre(ts.movie) + " (";
    output += to_string(ts.movie.duration) + " min) ";
    output += "[starts at " + to_string(ts.startTime.h) + ":" + to_string(ts.startTime.m) + ",";
    output += " ends by " + to_string(endTime.h) + ":" + to_string(endTime.m) + ']';
    cout << output;
}

TimeSlot scheduleAfter(TimeSlot ts, Movie nextMovie){
    TimeSlot next = {nextMovie, addMinutes(ts.startTime, ts.movie.duration)};
    return next;
}

bool timeOverlap(TimeSlot ts1, TimeSlot ts2){
    TimeSlot earlier, later, end;
    Time endTime;
    int s1 = minutesSinceMidnight(ts1.startTime);
    int s2 = minutesSinceMidnight(ts2.startTime);
    if (s2 > s1){
        earlier = ts1;
        later = ts2;
        endTime = addMinutes(ts1.startTime, ts1.movie.duration);
    } else if (s2 == s1){
        return true;
    } else {
        earlier = ts2;
        later = ts1;
        endTime = addMinutes(ts2.startTime, ts2.movie.duration);
    }
    end = {earlier.movie, endTime};
    if (minutesUntil(earlier.startTime, later.startTime) < end.movie.duration){
        return true;
    }
    return false;
}

int main(){
    Movie m1 = {"Back to the future", COMEDY, 116};
    Movie m2 = {"Black Panther", ACTION, 125};
    Movie m3 = {"Avengers", ACTION, 140};
    TimeSlot t1 = {m1, {9, 15}};
    TimeSlot t2 = {m2, {9, 15}};
    TimeSlot t3 = {m2, {10, 30}};
    TimeSlot t4 = {m3, {14, 10}};
    cout << timeOverlap(t1, t2) << endl;
    cout << timeOverlap(t2, t3) << endl;
    cout << timeOverlap(t1, t3) << endl;
    cout << timeOverlap(t3, t4) << endl;
}