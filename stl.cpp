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
    v.erase(v.begin() + 2, v.begin() + 4);

    vector<int>v(2, 100);
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