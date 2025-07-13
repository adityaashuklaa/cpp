// Recursion => (When a function calls itself until a specified condition is met.)
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(){
    cout << 1 << endl;
    print();
}

int main(){
    print();
    return 0;
}

int cnt = 0;
void print2(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    if(cnt ==3 ) return; // This is generally stated as the base case, cause after this the function will not execute.
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


// Sum of first n numbers, there are two ways, one is parameterised way and another one is functional.
// Functional way
int sumN(int n){
    if(n == 0) return 0;
    return n + sumN(n-1);
}
int facN(int n){
    if(n == 1) return 1;
    return n * facN(n-1); 
    // TC => 0(n); SC => 0(n)  
}
// int main(){
//     int n = 5;
//     cout << facN(n);

//     return 0;
// }

void arrF(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]);
    arrF(i+1, arr, n);
}
// int main(){
//     int n;
//     cin >> n;
//     int arr[n];
//     for(int i = 0; i<n; i++) cin >> arr[i];
//     arrF(0, arr, n);
//     for(int i = 0; i < n; i++) cout << arr[i] << " ";
//     return 0;
// }

// Check if a given string is palindrome or not
// "MADAM" => "MADAM" on reverse

bool f(int i, string &s){
    if(i >= s.size() / 2) return true;
    if(s[i] != s[s.size() - i - 1]) return false;
    return f(i+1, s);   
}

int main(){
    string s ="madsm";
    cout << f(0, s);
    return 0;
}

// It will start printing 1 until the memory is almost full, this is called stack overflow.
// The condition used to stop recursion is base condition.

// Reverse arr using recursion

// Multiple recursion calls (Fibonacci Series)

