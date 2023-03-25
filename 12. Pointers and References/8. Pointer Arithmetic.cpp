//Pointer Arthmatic
#include<iostream>
using namespace std;

int main(){
    int scores[] {100, 95, 90, 85, -1};
    int *score_ptr {scores};

    while(*score_ptr != -1){
        cout << *score_ptr << endl;
        score_ptr++;
    }

    cout << "\n-------------------------------" << endl;
    score_ptr = scores;
    while(*score_ptr != -1)
        cout << *score_ptr++ << endl;       // Guess the output
    
    cout << "\n-------------------------------" << endl;
    char name[] {"Sidhu"};

    char *char_ptr1 {nullptr};
    char *char_ptr2 {nullptr};

    char_ptr1 = &name[0];   //S
    char_ptr2 = &name[3];   //h
    
    cout << "In the string " << name << ", " << *char_ptr2 << " is " << (char_ptr2 - char_ptr1) << " characters away from " << *char_ptr1 << endl; 

    return 0;
}