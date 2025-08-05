// Arrays
/*
    Whenever array is defined inside the main then the array elements stores the garbage value and when the array is being defined in the global scope the elements carries value 0.
    Max size of the array when you define it inside main() it is 10pow6 and when it is being defined in the global scope it's size is 10pow7.
    Array follows 0 based indexing, where first index is 0 itself, and last index is n-1.
    Ques . Find Largest Element inside the array. 
    Brute Force Approach. 
    Sort the array, and the last element which is at the index n-1, will be the largest. 
    TC => nlogn, that's why it is not the best approach.
    It doesn't matter the DS being used is array or not, if any DS which stores similar data is being used than it will work, like in this case vector.
*/

int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 0; i<n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}