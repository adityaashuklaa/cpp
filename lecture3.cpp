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
    v.emplace_back(1,2);  // Curly braces are not required, it by itself recognises it is a pair.
    v.push_back({1,2});

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

    dq.pop_front();
    dq.pop_back();
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

void explainPQ(){
    priority_queue<int>pq;  // The element which has the largest value stays at the top. It maintains tree ds inside.

    pq.push(5); //{5}
    pq.push(2); //{5, 2}
    pq.push(8); //{8, 5, 2}
    pq.emplace(10); //{10, 8, 5, 2}

    cout << pq.top(); //{10}

    pq.pop(); // {8, 5, 2}

    pq.top(); // {8}
    // size swap empty function same as others

    // Minimun Heap (To store minimum value element at the top)
    priority_queue<int, vector<int>, greater<int> pq;
    pq.push(5); // {5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2

    // Push and Pop happens in log n, and top happens in 0(1)
}

// Set => Stores everything in sorted order and stores unique.

void explainSet(){
    // In set everything happens in log time complexity.
    set<int>st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionlity of insert in vector can be used also, that only increases efficiency.
    // All other functions are same as earlier containers
    
    // {1, 2, 3, 4, 5}
    auto it = st.find(3); // It returns an iterator which points to 3. Iterator => Points to address
    auto it = st.find(6); // If no element is present it will return st.end()

    st.erase(5); // erasing 5 takes logarithimic time

    int cnt = st.count(1);

    auto it = st.find(3);
    st.erase(it); // it takes constant time.

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(2);
    auto it2 = st.find(4);
    st.erase(it1, it2); // after erase {1, 4, 5} [first, last]

    // lower_bound() and upper_bound() function works in the same way as in vector does.

    auto it = st.lower_bound(2);
    auto it = st.upper_bound(3);
}

void explainMultiSet(){
    // Everything is same as set, it also stores duplicate elements

    multiset<int>ms;
    ms.insert(1); // {1}
    ms.insert(1); // {1, 1}
    ms.insert(1); // {1, 1, 1}

    ms.erase(1); // all 1's erased

    int cnt = ms.count(1);

    // Only a single one is erased
    ms.erase(ms.find(1));

    ms.erased(ms.find(1), ms.find(1)+2);

    // rest all functions are same as set.
}

void explainUset(){
    unordered_set<int> st;

    // lower_bound and upper_bound function does not work, rest all functions are same. It does not store in any particular order it has a better complexity than set in most cases, except some collison happens
    // Time compleixity => 0(1) in rare case 0(N) linear time.
}

void explainMap(){
    // Map is a container which stores everything in key and value pairs.
    // Map stores unique keys in sorted order, something similar to set Data Structure.
    map<int, int> mpp;
    map<int, pair<int, int>> mpp;
    map<pair<int, int>, int> mpp;

    map[1] =2; // Key 1 store 2.
    mpp.emplace({3, 1});
    mpp.insert({2, 4});   
    mpp[{2,3}] = 10;
    {
        {1,2}
        {2,4}
        {3,1}
    }

    for(auto it: mpp) {
        cout << it.first << " " << it.second << endl;
        // Traversing in a map.
    }

    cout << mpp[1];
    cout << mpp[5]; // If key is not present it prints null or 0 

    auto it = mpp.find(3);
    cout << *(it).second;

    auto it = mpp.find(5);

    auto it = mpp.lower_bound(2);  
    auto it = mpp.lower_bound(3);
    // erase, swap, size, empty are same as above.
}

void explainMultiMap() {  
    // everything is same as map. only it can stores multiple keys. Only mpp[key] cannot be used here.
}

void explainUnorderedMap(){   
    // Same as set and unordered_Set difference.
}

bool comp(pair<int, int>p1, pair<int, int>p2) {
    if(p1.second < p2.second) {
        return true;
    } else if(p1.second == p2.second) {
        if(p1.first>p2.second) return true;
    }
    return false;
}