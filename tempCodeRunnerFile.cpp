void f(int i , int n){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
        freopen("error.txt", "w", stderr);
    #endif
    if(i > n) return; // Base Case
    cout << "Aditya";
    f(i+1, n);
}

void main(){
    int n;
    cin >> n;
    f(1, n);
}