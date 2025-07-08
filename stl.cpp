void explainPair() {
    pair<int, int> p = {1, 3};

    cout << p.first << " " << p.second;

    pair<int, pair<int, int>> p = {1, {3,4}};

    cout << p.first << " " << p.second.first << " " << p.second.second;   

    pair<int, int> arr[] = { {1,2}, {2,3}, {3,4}};

    cout << arr[1].second;
} 

// Arrays limitation introduced vectors, as arrays size are constant so for large set of data it is not optimal, therefore vectors are being used, as there sizes are dynamic.
void vectors(){
    // vector<int> adityaDOB;
    vector<int> v;
    // emplace_back is faster than push_back
    v.push_back(1);
    v.emplace_back(2);

    vector<pair<int, int>>vec;

    v.push_back({1,2});
    v.emplace_back(1,2);
 
    vector<int> v(5, 100); // This means {100, 100, 100, 100, 100} with 0 bassed indexing.

    vector<int> v(5);

    vector<int> v1(5, 20);
    vector<int> v2(v1);

    vector<int>::iterator it = v.begin(); // iterator points to the Memory Address.

    it++;
    cout << *(it) << " "; // * gives the (element) at that address.

    it = it + 2; 
    cout << *(it) << " ";

    vector<int>::iterator it = v.end();
    vector<int>::iterator it = v.rend(); // reverse-end

    vector<int>::iterator it = v.rbegin();

    cout << v[0] << " " << v.at(0);
    cout << v.back() << " ";   
    
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *(it) << " ";
    }
    for(auto it = v.begin(); it != v.end(); it++){ // Datatypes is automatically assigned acc. to the data.
        cout << *(it) << " ";
    }
    for (auto it : v){
        cout << it << " ";
    }

    v.erase(v.begin() + 1);

    vector<int>v(2, 100);
    v.erase(v.begin() + 2, v.begin() + 4);
    v.insert(v.begin(), 300);   
    v.insert(v.begin() + 1, 2, 10);

    vector<int> copy(2,50); 
    v.insert(v.begin(), copy.begin(), copy.end());

    cout << v.size();

    v.pop_back();
    v1.swap(v2);
    
    v.clear() // erases the entire vector

    cout << v.empty();
}

void explainList() { // exactly similar to vector, but as a add ons gives front operations as well. 
    list<int> ls;

    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);

    ls.explace_front(); {2, 4}; 
}

void explainDeque(){
    deque<int>dq;
    dq.push_back(1); //{1}
    dq.emplace_back(2); // {1,2}
    dq.push_front(4); // {4,1,2}
    dq.emplace_front(5); // {5,4,3,2}

    dq.pop_back(); // {5,4,3}
    dq.pop_front(); // {4,3}

    dq.back();

    d1.front();

}

void explainStack(){
    stack<int> st;
    st.push(1); // {1}
    st.push(2); // {2,1}
    st.push(3); // {3,2,1}
    st.push(4); // {4,3,2,1}
    st.emplace(5); // {5,4,3,2,1}

    cout << st.top();
    st.pop();

    cout << st.size();
    cout << st.empty();

    stack<int>st1, st2;
    st1.swap(st2);

    // Operations are 0(1);
}

void explainQueue(){
    queue<int> q;
    q.push(1); // {1}
    q.push(2); // {1, 2}
    q.emplace(4); // {1, 2, 4}

    q.back() += 5

    cout << q.back(); // prints 9

    // Q is {1, 2, 9}
    cout << q.front() // prints 1

    q.pop(); // {2,9}

    cout << q.front(); // prints 2

    // size swap empty same as stack.
}

void explainPQ() {
    // Maximum Priority Queue (Max heap)
    priority_queue<int> pq;

    pq.push(5); // {5}
    pq.push(2); // {5, 2}
    pq.push(8); // {8, 5, 2}
    pr.emplace(10); // {10, 8, 5, 2}  // Priority queue gives the priority to the highest value

    cout << pq.top(); // prints 10

    pq.pop(); // {8,5,2}

    // size swap empty function same as others

    // Minimum Heap(minimum priority queue )

    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5); //{5}
    pq.push(2); // {2, 5}
    pq.push(8); // {2, 5, 8}
    pq.emplace(10); // {2, 5, 8, 10}

    cout << pq.top(); // prints 2

    // push, pop happens in logn
    // top in 0(1) time complexity.
}

void explainSet() {
    // Set stores everything in sorted order and stores unique.
    set<int> st;
    st.insert(1); // {1}
    st.emplace(2); // {1, 2}
    st.insert(2); // {1, 2}
    st.insert(4); // {1, 2, 4}
    st.insert(3); // {1, 2, 3, 4}

    // Functionality of insert in vector can be used also, that only increases efficiency.

    // begin(), end(), rend(), rbegin(), size(), empty() and swap() are same as those of above.

    auto it = st.find(3);

    auto it = st.find(6);

    st.erase(5);

    int cnt = st.count(1);
}