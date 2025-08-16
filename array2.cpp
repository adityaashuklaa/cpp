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
