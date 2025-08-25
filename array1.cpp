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

// Second largest element in an array.
/*
    Brute Force Approach. 
    Sort the Array, The last index (n-1) will be the largest, so start with n-2, and check if n[i] != largest, i.e the 2nd largest.
    Psuedo Code : -
    largest = arr[n-1]
    for(int i=n-2; i>=0; i--){
        {
        if(arr[i] != largest){
            secondLargest = arr[i];
            break;
        }
        }
    } TC => 0(nlogn + n) if secondLargest doesn't exist then -1
    if array contains a -ve number than INT_MIN should be used instead of -1.
    Better Approach
    largest = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i] > largest){
            largest = arr[i];
        }
    }
    sLargest = -1;
    for(int i=0; i<n; i++){
        if(arr[i] > sLargest && arr[i] != largest){
            sLargest = arr[i];
        }
    }
    cout << sLargest
    Tc => n+n = 0(2n)

    Optimal Approach
    largest = arr[0], sLargest = -1
    TC => 0
*/
int secondLargest(vector<int> &a, int n){
    int largest = a[0];
    int slargest = -1;
    for(int i=1; i<n; i++){
        if(a[i] > largest){  
            slargest = largest;
            largest = a[i];
        }
        else if(a[i] < largest && a[i] > slargest) {
            slargest = a[i];
        }
    }
    return slargest;  
}

int secondLargest(vector<int> &a, int n){
    int smallest = a[0];
    int ssmallest = INT_MAX;
    for(int i=1; i<n; i++){
        if(a[i] < smallest){
            ssmallest = smallest;
            smallest = a[i];
        }
        else if(a[i] != smallest && a[i] < ssmallest) {
            ssmallest = a[i];
        }
    }
    return slargest;
}

vector<int> getSecondOrderElements(int n, vector<int> a){
    int sLargest = secondLargest(a,n);
    int sSmallest = secondSmallest(a,n);
    return {sLargest, sSmallest}
}

// If given array is sorted or not.  TC  => Takes a single pass so takes 0(n)
int isSorted(int n, vector<int> a){
    for(int i=1; i<n; i++){
        if(a[i] >= a[i-1]) {

        }
        else {
            return false;
        }
    }
    return true;
}

// Remove Duplicates in-place from sorted array.
/*
    Modify the given array and return the unique elements.
*/
int removeDuplicates(vector<int> &arr, int n) {
    int i = 0;
    for(int j =1; j<n; j++) {
        if(arr[i] != arr[j]) {
            arr[i+1] = arr[j];
            i++;
        }
    }
    return i+1;
}