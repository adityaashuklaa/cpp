// Sorting
/* Selection Sort => Select the minimums
    % Get the minimum from the entire array and swap.

    ## Algorithm
    % swap at index 0, & minimum index [0 - n-1]
    % swap at index 1, & minimum index [1 - n-1]
    % swap at index 2, & minimum index [2 - n-1]
    % swap at index n-2 & minimum index

    TC => n*2/2 + n/2 (Ignore constant and smaller values)
    = 0(n*2)
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

// Bubble Sort
/*
    Pushes Maximum to the last by adjacent swapping, certainly opposite of selection sort.
    TC => 0(n*2) this is the worst and the average complexity. 
    For the best complexity it can happen when the array is already in the correct order, and no swaps happens.
    For this case the TC will be 0(n)
*/

void bubble_sort(int arr[], int n){
    for(int i = n-1; i>=0; i--){
        int didSwap = 0;
        for(int j = 0; j<=i-1; j++){
            if(arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
                didSwap = 1;
            }
        }
        if(didSwap == 0) {
            break;
        }
    }
}

// Insertion Sort
/*
    Takes an element and places it in it's correct position.
    [14, 9, 15, 12, 6, 8, 13] => Take one element and compares with the left element and then shift.
*/

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
    bubble_sort(arr, n);
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    return 0;
}

