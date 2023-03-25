#include<iostream>
#include<string>
using namespace std;

int main(){
    string s {" hello"};
    
    for(size_t i{0}; i<s.length(); ++i){
        if(s[i] == " ")
            cout << "hy";
    }
    return 0;
}