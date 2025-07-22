// Recursion => (When a function calls itself until a specified condition is met.)
// #include<bits/stdc++.h>
#include<iostream>
using namespace std;

void print(){
    cout << 1 << endl;
    print();
}

int printFun(){
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

int printFun2(){
    print2();
    return 0;
}

// Print Names N times
void f(int i , int n){
    if(i > n) return; // Base Case
    cout << "Aditya";  
    f(i+1, n); // TC => 0(n)
}

void main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int n;
    cin >> n;
    f(1, n);
}

void reversePrint(){
    int n;
    cin >> n;
    g(n, n);
}

void g(int i, int n){
    if(i < 1) return;
    cout << i;
    g(i-1, n);
}

// Print from 1 to n, but in case of backtracking.
void h(int i, int n){ // Without using h(i+1, n)
    if(i < 1) return;
    h(i-1, n);
    cout << i;
}
void backtrack1(){
    int n;
    cin >> n;  
    h(n, n);
}

//  Print from n to 1, but without using f(i-1, n)
void f(int i, int n){
    if(i > n) return;  
    f(i+1, n);
    cout << i;
}
void main(){
    int n;
    cin >> n;
    f(1, n);
}


// Sum of first n numbers, there are two ways, one is parameterised way and another one is functional.

// Parameterised Way
void ParaFact(int i, int sum){
    if(i < 1) {
        cout << sum;  
        return;
    }
    ParaFact(i-1, sum + i);
}

void main() {
    int n;
    cin >> n;
    ParaFact(n, 0);
}
// Functional way
int sumN(int n){
    if(n == 0) return 0;
    return n + sumN(n-1);
}

// Factorial of N
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

void arrRev(int l, int arr[], int r){
    if(l >= r) return;
    swap(arr[l], arr[r]);
    arrRev(l+1, r-1);
}

void arrRevFun(){
    int n;
    cin >> n;
    int arr[] = {1, 2, 3, 4, 5};
    arrRev(0, arr, n-1);
}

//  Swaping Array using 1 pointer
void arrF(int i, int arr[], int n){
    if(i >= n/2) return;
    swap(arr[i], arr[n-i-1]); // 4-0-1 = 3
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

bool f(int i, string &s){ // using reference &
    if(i >= s.size() / 2) return true; // TC => n/2
    if(s[i] != s[s.size() - i - 1]) return false;
    return f(i+1, s);   
}

int stringRecursion(){
    string s ="madsm";
    cout << f(0, s);
    return 0;
}

// It will start printing 1 until the memory is almost full, this is called stack overflow.
// The condition used to stop recursion is base condition.


// Multiple recursion calls (Fibonacci Series)

int funcFib(int n){ // TC => near about (2)n
    if (n<= 1) return n;
    int last = funcFib(n-1);
    int slast = funcFib(n-2);
    return last + slast;  
}

int main6(){
    cout << funcFib(4);
}
