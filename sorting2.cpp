// Merge Sort
/*
    There are three sorting algos but all of them where taking 0(n*2) TC, that's why Merge sort is used as it is more optimised in terms of TC.
    Merge sort is based on Divide and Merge. 
    Suppose you have an array of 9 elements, you have to divide them into two parts, and there are two ways to do that either 5/4 or 4/5. Here i'm following 5/4 path, and have to make sure i need to follow this approach throughout the sorting.
*/  

#include<bits/stdc++.h>
using namespace std;  

void mS(vector<int> &arr, int low, int high) {
    if(low == high) return;
    int mid = (low + high) / 2;
    mS(arr, low, mid);
    ms(arr, mid+1, high);
}   
void mergeSort(vector<int> &arr, int n) {

}