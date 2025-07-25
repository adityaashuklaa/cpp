// Sorting
/* Selection Sort => Select the minimums
    % Get the minimum from the entire array and swap.

    ## Algorithm
    % swap at index 0, & minimum index [0 - n-1]
    % swap at index 1, & minimum index [1 - n-1]
    % swap at index 2, & minimum index [2 - n-1]
    % swap at index n-2 & minimum index
*/ 

#include<bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n){
    for(int i=0; i<=n-2; i++){
        int mini = i;
        for(int j=i; j<=n-1;j++){
            if(arr[j] < arr[mini]) {
                mini = j;
            }
        }
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
}

int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    selection_sort(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}
