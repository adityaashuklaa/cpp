// Finding Missing Number in Array.
// Bruteforce Approach
// for(int i=1; i<=n ; i++){ TC => in the worstcase the TC will be n*2 SC => 0(1)
//     flag = 0
//     for(int j=0; j<n-1; j++){
//         if(arr[j] == i){
//             flag = 1;
//             break;
//         }
//     }
//     if(flag == 0) return i;
// }

// Better Approach (Using Hashing)
/*
    hash[n+1] = {0};
    for(int i=0; i<n-1; i++){
        hash[arr[i]] = 1;
    }
    for(int i=0; i<=n; i++){
        if(hash[i] == 0){
            return i;
        }
    }
    TC => 0(n) + o(n) = 0(2n)
    SC => 0(n)
*/

// Optimal Solution (Sum & XOR)
