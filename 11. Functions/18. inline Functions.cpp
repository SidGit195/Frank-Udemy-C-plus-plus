#include<iostream>
using namespace std;

inline int add_numbers(int a, int b){
    return a + b;
}

int main(){
    int result {};
    result = add_numbers(10, 30);
    cout << result << endl;
    return 0;
}