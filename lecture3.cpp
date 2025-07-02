/* STL (Standard Template Library)
    Stl is basically the compilation of algorithm, containers, iterators, functions in a minimised version, so that you get rid of the lengthy lines of code.
*/

#include<bits/stdc++.h> // includes each and every library.
using namespace std;

// DSA is all about learning Algorithms, Containers, Functions, Iterators.

// Pairs => It can be treated as a data type which lies inside utilities library.
void explainPair(){
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> p = {1, {2, 3}};
    cout << p.first << " " << p.second.first << " " << p.second.second;

    pair<int, int> arr[] = {{1,2}, {2,5}, {5,1}};

    cout << arr[1].second // 5
}

// Vectors
void explainVector(){

    vector<int> v; // Created an empty container
    v.push_back(1); //  pushes 1 into it.
    v.emplace_back(2); // Similar to push_back, it dynamically increases the size and adds 2. It is generaally faster than push_back.

    vector<pair<int, int>>vec;
    v.push_back({1,2});
    v.emplace_back(1,2);  // Curly braces are not required, it by itself recognises it is a pair.

    vector<int> v(5, 100); // {100, 100, 100, 100, 100}

    vector<int> v(5); 
    vector<int> v1(5, 20);
    vector<int> v2(v1); // copying container to another vector.

    vector<int>::iterator it = v.begin();  // iterator points to the memory where data is being stored, not the element.
    it ++;
    cout << *(it) << " "; // * is used for the elements.

    it = it +2;
    cout << *(it) << " ";

    vector<int>::iterator it = v.end(); // end will point the memory location after the container(last element).
    vector<int>::iterator it = v.rend();
    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " "; // last element.

    for (vector<int>::iterator it = v.begin(); it!= v.end(); it++){
        cout << *(it) << " ";
    }
    for (auto it = v.begin(); it != v.end(); it++){ // using auto the data type is automatically assigned.
        cout << *(it) << " ";
    }
    for (auto it: v) {
        cout << it << " ";
    }

    // {10, 20, 30,40}
    v.erase(v.begin()+1); // 20 will be erased.
    v.erase(v.begin() + 2, v.begin() + 4);
}

// Arrays sizes cannot be modified, that's why vectors comes into the picture, you can easily manipulate the size of the vector.