#include<iostream>
using namespace std;

int main(){
    const int num1 {10};
    int num2 {20};

    // num1 = num2 = 1000;     //From right to left
    num1 = 1000;    //Can not do this due to const

    cout << "num1 is " << num1 << endl;
    cout << "num2 is " << num2 << endl;

    cout << endl;
    return 0;
}