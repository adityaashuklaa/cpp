// Hashing => Pre storing and fetching.
// To find out the count of the number appearing in an array. 

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int f(int number, int arr[]){
    int cnt  = 0;
    for(int i=0; i<number; i++){
        if(arr[i] == number){
            cnt = cnt + 1;
        }
    }  
    return cnt;
} // This method is too time consuming and a heavy approach, there are better ways as well. 
// Here's is where Hashing comes in which makes it easier to calculate

int hash[1300000] = {0}; // Globally it can go upto (10 pow 7)
int main(){
    int n;   
    cin >> n;  
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    // precompute
    int hash[13] = {0};  // inside main the hash size can only go upto (10 pow 6)
    for(int i=0; i<n; i++){
        hash[arr[i]] += 1;
    }

    int q;
    cin >> q;
    while(q--) {
        int number;
        cin >> number;
        // fetch
        cout << hash[number] << endl;
    }
    return 0;
}

// Character Hashing
int main2(){
    string s;
    cin >> s;

    // precompute
    // int hash[26] = {0};  // For just lowercase
    int hash[256] = {0};  // For Every Character
    for(int i = 0; i<s.size(); i++) {
        hash[s[i] - 'a']++;
    }

    int q;
    cin >> q;
    while(q--) {
        char c;
        cin >> c;
        // fetch
        cout << hash[c - 'a'] << endl;
    }
    return 0;
}

// Map => stores all the values in sorted order. Follows Divison Method.

int main3(){ // TC => logn
    int n;
    cin >> n;
    int arr[n];  
    for(int i; i<n; i++){
        cin >> arr[i];
    }
    //pre-compute
    map<int, int> mpp; // You can change datatype acc. to the value.
    for(int i=0; i<n; i++) {
        mpp[arr[i]]++;
    }   

    // iterating the map
    // for(auto it: mpp) {
    //     cout << it.first << "->" << it.second << endl;    
    // }

    int q;
    cin >> q;
    while(--q) {
        int number; 
        cin >> number;
        // fetch
        cout << mpp[number] << endl;
    }
    return 0;  
}

// Unordered Map
/*
    Tc => O(1)
    in rare of the case it takes 0(n) => n is number of elements
    Collison => Everyone went to the same hash place.
*/