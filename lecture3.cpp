/* STL (Standard Template Library)
    Stl is basically the compilation of algorithm, containers, iterators, functions in a minimised version, so that you get rid of the lengthy lines of code.
*/

#include<bits/stdc++.h> // includes each and every library.
using namespace std;

// DSA is all about learning Algorithms, Containers, Functions, Iterators.

// Pairs
void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> p = {1, {2, 3}};
    cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};

    cout << arr[1].second
}