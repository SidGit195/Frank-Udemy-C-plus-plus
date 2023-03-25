#include<iostream>
using namespace std;

int main(){
    char *p = "abc";
    cout << *p << endl;
    p++;
    cout << *p << endl;

    char str[] = "abc";
    cout << str << endl;
    return 0;
}