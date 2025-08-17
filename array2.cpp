// Left rotate the array by one place. 
#include <bits/stdc++.h>
using namespace std;    
// Bruteforce Approach
temp = arr[0];
for(int i=1; i<n; i++){
    arr[i-1] = arr[i];
}
arr[n-1] = temp;
// TC => 0(n) SC => 0(1)

// Left rotating array by D places.
/*
    arr[] = [1, 2, 3, 4, 5, 6, 7] 
    If the rotation is being done for the 8 places it can be expressed as 7+1 rotations.
    So, for no. of rotations D = d % n, whatever the remainder left, is the rotation.
    TC => 0(n+d);
    SC => 0(d)
*/

void leftRotate(int arr[], int n, int d){
    d = d%n;
    int temp[d];
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    for(int i=d; i<n; i++){
        arr[i-d] == arr[i];
    }
    for(int i = n-d; i<n; i++){
        arr[i] = temp[i - (n-d)];
    }
}
// Optimal Approch
void leftRotateOpt(int arr[], int n, int d){
    reverse(arr, arr+d); // CPP have reverse STL, if asked not to use then below is the manual approach.
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}
// Manual Reverse
void leftRotateManual(int arr[], int start, int end){
    while (start <= end)
    {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    
}

// Moving Zeroes in the end

// Bruteforce Approach
vector<int> moveZeroes(int n, vector<int> a){
    vector<int> temp;
    for(int i = 0; i<n; i++){
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }
    int nz = temp.size();
    for(int i = 0; i<nz; i++){
        arr[i] = temp[i];
    }

    for(int i = nz; i<n; i++){
        a[i] = 0;
    }

    return a;
}

// Optimal Approach
vector<int> moveZeroesOp(int n, vector<int> a){
    int j = -1;
    for(int i = 0; i<n; i++){
        if(a[i] == 0){
            j = i;
            break;
        }
    }
    if(j == -1) return a;

    for(int i = j+1; i<n; i++){
        if(a[i] != 0) {
            swap(a[i], a[j]);
            j++;
        }
    }
    return a;
}
// Linear Search in Array
int linearSearch(int n, int num, vector<int>){
    for(int i = 0; i<num; i++){
        if(arr[i] == num) {
            return i;
        }
    }
    return -1;
}

// Union of two sorted arrays
vector <int> sortedArray(vector <int> a, vector <int> b){
    int n1 = a.size();
    int n2 = b.size();
    set<int> st;
    for(int i = 0; i<n1; i++){
        st.insert(a[i]);
    }
    for(int i = 0; i<n2; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}