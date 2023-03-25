#include<iostream>
#include<string>
using namespace std;

int main(){
    string alphabet {" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {" XZNLWEBJHQDYVTKFUOMPCIASRxznlwebjhqdyvtkfuompciasr"};
    string s;
    getline(cin, s);

    int x;
    bool b = true;
    cout << "Enter '0' for to ENCRYPT message & '1' for DECRYPT" << endl;
    cin >> x;

    switch(x){

    case 0:
    cout << "Encypted message...." << endl;   
    for(size_t i{0}; i<s.length(); ++i){
        s[i] = key[alphabet.find(s[i])];
    }
    s[s.length()] = '\0';
    break;

    case 1:
    cout << "Decypted message...." << endl;
    for(size_t j{0}; j<s.length(); ++j){
        s[j] = alphabet[key.find(s[j])];
    }
    s[s.length()] = '\0';
    break;

    }

    cout << s << endl;
    return 0;
}