//Dereferencing Pointer
#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
    int score {100};
    int *score_ptr {&score};

    cout << *score_ptr << endl;

    *score_ptr = 200;

    cout << *score_ptr << endl;
    cout << score << endl;

    cout << "\n-------------------------------------" << endl;
    double high_temp {100.7};
    double low_temp {37.4};
    double *temp {&high_temp};
    
    cout << *temp << endl;
    temp = &low_temp;
    cout << *temp << endl;

    cout << "\n-------------------------------------" << endl;
    string name {"frank"};
    string *string_ptr {&name};

    cout << *string_ptr << endl;
    name = "james";
    cout << *string_ptr << endl;

    cout << "\n--------------------------------------" << endl;
    vector<string> students {"abhi", "botre", "sidhu"};
    vector<string> *stu_ptr {nullptr};

    stu_ptr = &students;

    cout << "First student: " << (*stu_ptr).at(0) << endl;

    cout << "students: ";
    for(auto student: *stu_ptr)
        cout << student << " ";
    cout << endl;
    return 0;
}