// Relational Operators
#include<iostream>
using namespace std;

int main(){
    int num1{}, num2{};

    cout << boolalpha;      // Read as True/False comparision statement on behalf of 1/0
    // cout << "Enter 2 integers separated by space" << endl;
    // cin >> num1 >> num2;

    // cout << num1 << " > " << num2 << " : " << (num1>num2) << endl;
    // cout << num1 << " >= " << num2 << " : " << (num1>=num2) << endl;
    // cout << num1 << " < " << num2 << " : " << (num1<num2) << endl;
    // cout << num1 << " <= " << num2 << " : " << (num1<=num2) << endl;

    const int lower {10};
    const int uper {20};

    cout << "Enter an integer that is greater than " << lower << ":" << endl;
    cin >> num1;
    cout << num1 << " > " << lower << " is " << (num1>lower) << endl;

    cout << "Enter an integer that is less than or equal to " << uper << endl;
    cin >> num2;
    cout << num2 << " <= " << uper << " is " << (num2<=uper) << endl;
    
    return 0;
}