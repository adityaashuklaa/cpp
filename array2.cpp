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