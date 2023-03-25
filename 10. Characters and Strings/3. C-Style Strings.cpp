#include<iostream>
#include<cstring>
using namespace std;

int main(){
    char str[80];

    strcpy(str, "Hello");
    cout << str << endl;

    strcat(str, "sidhu");
    cout << str << endl;

    cout << strlen(str) << endl;

    cout << strcmp(str, "another") << endl;
    return 0;
}



//#include<cstdlib>
// includes functions to convert c-style strings to
// integer, float, long, etc.