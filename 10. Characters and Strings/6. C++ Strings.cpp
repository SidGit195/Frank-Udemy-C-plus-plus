#include<iostream>
#include<string>
using namespace std;

int main(){
    // string s1;
    // cout << s1 << endl;
    //
    // string s2 {"Sidhu"};
    // cout << s2 << endl;
    //
    // string s3 {s2};     //Although s3 & s2 is same but they acquire different - different place in memory
    // cout << s3 << endl;
    //
    // string s4 {"Sidhu", 3};
    // cout << s4 << endl;
    //
    // string s5 {s3, 0, 2};
    // cout << s5 << endl;
    //
    // string s6 (3, 'x');     //Notice sign of bracket
    // cout << s6 << endl;

    
    //concatenation
    // string part1 {"C++"};
    // string part2 {"is a powerful"};
    //
    // cout << part1 << " " << part2 << " language" << endl;
    // cout << part1 + " " + part2 + " language" << endl;
    // // cout << "C++" + " awesome" << endl;      // ERROR
    //
    // string s3 {"sidhu"};
    // cout << s3[0] << endl;
    // cout << s3.at(3) << endl;
    //
    // for(char c: s3)
    //     cout << c << endl;
    //
    // for(int c: s3)
    //     cout << c << endl;


    // ==, !=, >, <  ----> we can use this operator in string for comparision.


    //substring
    // object.substr(starting_index, length)
    // string s1 {"This is sidhu"};
    // cout << s1.substr(0, 4) << endl;
    // cout << s1.substr(5, 2) << endl;
    // cout << s1.substr(10, 4) << endl;


    //find --> returns the index of a substring in a string
    // //object.find(search_string)
    // string s1 {"This is sidhu"};
    // cout << s1.find("This") << endl;
    // cout << s1.find("is") << endl;
    // cout << s1.find("sidhu") << endl;
    // cout << s1.find("d") << endl;
    // cout << s1.find("is", 4) << endl;       // i want that it starts seaching "is" after index 4.
    // cout << s1.find("z") << endl;           // return some garbage value

    
    //Removing Characters  --> erase() and clear()
    //Remove a substring of characters from a string
    //object.erase(starting_index, length)
    //
    // string s1 {"She is beautiful"};
    // cout << s1.erase(0, 4) << endl;
    // cout << s1 << endl;
    // cout << s1.find("t") << endl;
    // cout << s1.erase(7, 2) << endl;
    // s1.clear();
    // cout << s1 << endl;


    // //length
    // string s1 {"sidhu"};
    // cout << s1.length() << endl;     //****Return size_t


    // string s1 {"sidhu"};
    // s1 += " ojha";
    // cout << s1 << endl;


    // Input >> and getline ()
    string s1;
    // cin >> s1;      // Enter a string with space
    // cout << s1 << endl;
    //
    // getline(cin, s1);       //****Read entire line until \n
    // cout << s1 << endl;

    getline(cin, s1, 'x');  //must be ' ' instead of " ".       ,,,,       after x it does not take input.
    cout << s1 << endl;
    return 0;
}