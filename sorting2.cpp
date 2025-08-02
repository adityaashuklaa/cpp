// Merge Sort
/*
    There are three sorting algos but all of them where taking 0(n*2) TC, that's why Merge sort is used as it is more optimised in terms of TC.
    Merge sort is based on Divide and Merge. 
    Suppose you have an array of 9 elements, you have to divide them into two parts, and there are two ways to do that either 5/4 or 4/5. Here i'm following 5/4 path, and have to make sure i need to follow this approach throughout the sorting.
*/  

#include<bits/stdc++.h>
using namespace std;  

void merge(vector<int> &arr, int low, int mid, int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left <= mid && right <= high){
        if(arr[left] <= arr[right]) {
            temp.push_back(arr[left]);
            left++;
        }
        else {
            temp.push_back(arr[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(arr[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(arr[right]);
        right++;
    }

}

void mS(vector<int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    ms(arr, mid+1, high);
    merge(arr, low, mid, high);
}   
void mergeSort(vector<int> &arr, int n) {
    mS(arr, 0, n-1);
}