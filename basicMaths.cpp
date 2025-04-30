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

// Print all divisors 
int printAllDivisors(){
    for(i=1; i<=n; i++){ // TC => 0(n)
        if(n%i = 0){
            cout << i << " ";
        }
    }
}

// Optimised Way
int printDevisors(int n){ // tc => 
    vector<int> ls;
    // for(int i =1; i<=sqrt(n); i++){
    for(int i = 1; i*i<=n; i++){ // tc => 0(sqrt(n))
        if(n%i==0){
            ls.push_back(i);
            if((n/i) !=i){
                ls.push_back(n/i);
            }
        }
    }
    // tc => 0(n log n): n =>   number of factors
    sort(ls.begin(), ls.end());
    // 0 (number of factors) 
    for(auto it : ls)  cout << it << " ";
}

int prime(int n){ // TC => 0(sqrt(n))
    int cnt = 0;
    for(int i =1; i*i <= n; i++){
        if(n%i == 0){
            cnt++;
            if((n/i)!= i)
            cnt++;
        }
    }
    if (cnt == 2) cout << "Prime";
    else cout << "Not a Prime";
}

// Euclidean Algorithm 
// gcd(n1, n2) = gcd(n1-n2, n2) where n1 > n2
// gcd(n1, n2) = gcd(n1%n2, n2) where n1 > n2. If one of them is zero, the another is gcd.
// TC => 0(log phi (m(a, b)))  In terms of divison the iteratiosn will be in terms of logn

int gcd(int a, int b){
    while(a > 0 && b > 0){
        if (a > b) a = a%b;
        else b = b % a;
    }
    if(a==0) return b;
    return a;
}