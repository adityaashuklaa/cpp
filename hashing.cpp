// Hashing
// To find out the count of the number appearing in an array. 
#include<iostream>
using namespace std;

int f(int number, int arr[]){
    int cnt  = 0;
    for(int i=0; i<number; i++){
        if(arr[i] == number){
            cnt = cnt + 1;
        }
    }
    return cnt;
} // This method is too time consuming and a heavy approach, there are better ways as well. 