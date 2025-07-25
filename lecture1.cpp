#include<iostream>  // This is the library which allows you to take the input and ommit output.
#include<math.h> // For Mathematical Operations
#include <bits/stdc++.h> // Includes Everything
using namespace std;

int main(){
    std::cout<< "Heyy Aditya, Good to see you here!!" << endl; // <<"/n" => similar to endl
    std::cout<< "Starting off with the DSA."
    return 0;
}

int main2(){
    int x, y;
    cin >> x >> y;
    cout << "Value of x :" << x << " and y : " << y;
    return 0;
}

// Data Types
int main3(){
    int x = 10;
    long x = 1000;
    cin >> x;

    long long x = 150000000000000000;

    double z = 5.6
    float y = 5 // Also stores integer
    string s;
    cin >> s; // Only takes the first string as the input i.e Aditya Shukla , s = Aditya
    cout << s; 
    getline(cin, s) // While take the whole s as the input.
    cout << s; 
    char ch= 'a'; // Single quotes is used to define a character where as, "" is used for string. 
    cout << ch;
    return 0;
}

int main4(){
    int age;
    cin >> age;
   if(age < 18) {
    cout << "Not eligible for job.";
   }
   else if(age <= 57) {
    cout << "Eligible for job";
    if(age >=  55){
        cout << " , but retirement soon";
    }
   }
   else {
    cout << "Retirement time";
   }
   return 0;
}

int main5(){
    //2-D Array
    int arr[3][5]; // If you don't assign any value to the places, then those empty places will store garbage value.
    return 0; 
}
int main6(){
    string s = "Aditya";
    int len = s.size();
    s[len-1] = 'z';
    cout << s[len-1];
    return 0;
}

/* Functions 
    void => which does not returns anything
    return 
    parameterised
    non parameterised
*/

void printName(string name) {
    cout << "Hey " << name ;
}

int main7(){
    string name;
    cin >> name;
    printName(name);
    return 0;
}

// pass value => copy of the number goes
void addSomething(int &num) { // pass reference
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main8() {
    int num = 10;
    addSomething(num);
    cout << num << endl;
    // 10 will be printed.
    return 0;
}

// Arrays are always passed by reference, for other we have to use & if want to pass by reference.