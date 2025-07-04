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

    // Insert function
    vector<int>v(2, 100); // {100, 100}
    v.insert(v.begin(), 300); // {300, 100, 100}
    v.insert(v.begin() + 1, 2, 10) // {300, 10, 10, 100, 100}

    vector<int> copy(2,50) // {50, 50}
    v.insert(v.begin(), copy.begin(), copy.end()) // {50, 50, 300, 10, 10, 100, 100}

    // {10, 20}
    cout << v.size() // 2
    // {10, 20}
    v.pop_back(); // {10}

    // v1 = {10,20}
    // v2 = {20,30}
    v1.swap(v2); // v1 -> {20,30} , v2 -> {10, 20}
    v.clear();
    cout << v.empty();
}

// Arrays sizes cannot be modified, that's why vectors comes into the picture, you can easily manipulate the size of the vector.

void explainList() {
    list<int> ls;

    ls.push_back(2); // {2}
    ls.emplace_back(4); // {2,4}
    ls.push_front(5); // {5,2,4}
    ls.emplace_front(); {2,4};

    // rest functions are same as vectors
}
// An insert inside a vector is very costly.
void explainDeque(){
    deque<int> dq;

    dq.push_back(2); // {2}
    dq.emplace_back(4); // {2,4}
    dq.push_front(5); // {5,2,4}
    dq.emplace_front(); {2,4};

    dq.pop_back();
    dq.pop_front();
    dq.back();
    dq.front();

}

void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}  
    st.push(4); // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}}

    cout << st.top(); // points 5

    st.pop(); // {4,3,2,1}
    cout << st.top(); // 4
    cout << st.size(); // 4
    cout << st.empty(); // false

    stack<int>st1, st2;
    st1.swap(st2);
}
// Stack follows LIFO, and all functions follow 0(1) time complexity.

void explainQueue(){   
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {2,1}
    q.emplace(5); // {5,2,1}}    

    q.back() += 5;
    cout << q.back(); // prints 9
    cout << q.front(); // prints 1
    q.pop(); // {2,5}
}