// Quick Sort Algo
 /*
    Pick a pivot & place it in it's correct place in the sorted array.
    Quick Sort doesn't uses any extra temp array, it's slightly better than merge sort. But it has the similar TC as merge sort.
    It's just basically pick up a element(pivot), place it to it's right position, then smaller on left and larger on right.
    It's a divide and conquere algo.
 */
#include <bits/stdc++.h>
using namespace std;
int partition(vector<int> &arr, int low, int high){
    int pivot = arr[low];
    int i = low;
    int j = high;
    while( i < j) {
        while(arr[i] <= pivot && i <= high - 1) {
            i++;
        }
        while(arr[j] > pivot && j >= low + 1) {
            j--;
        }
        if(i<j) swap(arr[i], arr[j]);
    }
    swap(arr[low], arr[j]);
    return j;
}
void qs(vector<int> &arr, int low, int high) {
    if(low < high){
        int pIndex = partition(arr, low, high);
        qs(arr, low, pIndex - 1);
        qs(arr, pIndex + 1, high);
    }
}

vector<int> quickSort(vector<itn> arr){
    qs(arr, 0, arr.size() - 1);
    return arr;
}