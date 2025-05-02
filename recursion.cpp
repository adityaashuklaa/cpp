// Recursion => (When a function calls itself until a specified condition is met.)
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

// void print(){
//     cout << 1 << endl;
//     print();
// }

// int main(){
//     print();
//     return 0;
// }

int cnt = 0;
void print2(){
    if(cnt ==3 ) return;
    cout << cnt << endl;
    cnt ++;
    print2();
}

int main2(){
    print2();
    return 0;
}

// Print Names N times
void f(int i , int n){
    if(i > n) return;
    cout << "Aditya";
    f(i+1, n);
}

void printName(int n){
    f(1, n);
}

// Print linear from 1 to n. 


// It will start printing 1 until the memory is almost full, this is called stack overflow.
// The condition used to stop recursion is base condition.