#include<iostream>
#include<map>
#include<string>
using namespace std;

// Map is an associative array

int main(){
    map<string, int> marksMap;
    marksMap["sidhu"] = 98;
    marksMap["kunnal"] = 67;
    marksMap["Bhanu"] = 3;
    map<string, int> :: iterator itr;
    for(itr = marksMap.begin(); itr!=marksMap.end(); itr++){
        cout << (*itr).first << " " << (*itr).second << "\n";
    }
    return 0;
}