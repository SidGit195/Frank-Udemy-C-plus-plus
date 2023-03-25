#include<iostream>
using namespace std;

int main(){
    string s0;
    string s1 {"Apple"};
    string s2 {"Banana"};
    string s3 {"Kiwi"};
    string s4 {"apple"};
    string s5 {s1};         //Apple
    string s6 {s1, 0, 3};   //App
    string s7 (10, 'x');    //xxxxxxxxxx

    cout << s0 << endl;
    cout << s0.length() << endl;

//Initialization
    
    return 0;
}