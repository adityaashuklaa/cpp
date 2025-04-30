#include<bits/stdc++.h>

// Basic Maths
// For Extracting Digits
int count(int n){
    int cnt = 0;
    while(n > 0){
        int lastDigit = n % 10; // It doesn't have any meaning, so can remove it totally.
        cnt = cnt + 1;
        n = n/10;
    }
    return cnt;
}
// Another method to ccount digits.
int count(int n){
    int cnt = (int)(log10(n));
    return cnt; 
    // TC => 0(log10(n)) 
}

// Reverse Number
int  main(){
    int n;
    cin >> n;
    int revNum = 0;
    while(n > 0){
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n/10;
    }
    cout  << revNum;
}

// Palindrome
int palindrome(){
    int n;
    cin >> n;
    int revNum = 0;
    int dup = n;
    while(n > 0){
        int ld = n % 10;
        revNum = (revNum * 10) + ld;
        n = n/10;
    }
    if (dup == revNum) cout << "True";
    else cout << "False";
}

// Amstrong Number 
int Amrstrong(int n){
    int sum = 0;
    int dup = n;
    while(n > 0){
        int lastdigit = n % 10;
        sum = sum + (lastdigit * lastdigit * lastdigit);
        n = n/10;
    }
    if (dup == sum) cout << "True";
    else cout << "False";
}