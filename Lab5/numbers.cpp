/*
Author: Anik Singha
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab5

Functions and prime numbers
*/

#include <iostream>

using namespace std;

bool isDivisibleBy(int n, int d){
    if (n % d == 0){
        return true;
    }
    return false; 
}

bool isPrime(int n){
    for (int i = n - 1; i > 1; i--){
        if (isDivisibleBy(n, i)){
            return false;
        }
    }
    return true;
}

int nextPrime(int n){
    int c = n + 1;
    while (isPrime(c) == false){
        c += 1;
    }
    return c;
}

int countPrimes(int a, int b){
    int total = 0;
    for (int x = a; x <= b; x++){
        if (isPrime(x)){
            total += 1;
        }
    }
    return total;
}

bool isTwinPrime(int n){
    if (isPrime(n) && (isPrime(n-2) || isPrime(n+2))){
        return true;
    }
    return false;
}

int nextTwinPrime(int n){
    int c = n + 1;
    while (isTwinPrime(c) != true){
        c += 1;
    }
    return c;
}

int largestTwinPrime(int a, int b){
    for (int i = b; i >= a; i--){
        if (isTwinPrime(i)){
            return i;
        }
    }
    return -1;
}

int main() {
    int n, d;
    cout << "Input two integers: ";
    cin >> n >> d;
    cout << largestTwinPrime(n,d);
}