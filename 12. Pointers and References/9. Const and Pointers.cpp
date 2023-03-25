#include<iostream>
using namespace std;

int main(){
    int high_score {95};
    int low_score {60};

    const int *score_ptr {&high_score};     //yaha maine data ko const kiya hai

    // *score_ptr = 92;     //ERROR
    score_ptr = &low_score;
    cout << *score_ptr << endl;


    //---------------------------------
    int *const score_ptr1 {&high_score};    //yaha maine pointer ko const kiya hai
    cout << *score_ptr1 << endl;

    *score_ptr1 = 92;
    // score_ptr1 = &low_score;     //ERROR 
    cout << *score_ptr1 << endl;


    //----------------------------------
    const int *const score_ptr2 {&high_score};      //yaha data & pointer dono ko const kar diya hai
    // *score_ptr2 = 90;            //ERROR
    // score_ptr2 = &low_score;     //ERROR
    return 0;
}