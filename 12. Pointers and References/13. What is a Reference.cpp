// Reference will always be initialized when it is declared & it never be **null**

#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<string> students {"harman", "aman", "sunidhi"};

    // for(auto str: students)
    //     str = "funny";          // not able to change vector student bcz str copy of each element of vector.
    // for(auto str: students)
    //     cout << str << endl;


    // //----------------------------------
    for(auto &str: students)
        str = "funny";             //changes
    for(auto str: students)
        cout << str << endl;

    // for(auto const &str: students)
    //     str = "funny";          // Compiler error

    return 0;
}

//see video number 16 (imp)