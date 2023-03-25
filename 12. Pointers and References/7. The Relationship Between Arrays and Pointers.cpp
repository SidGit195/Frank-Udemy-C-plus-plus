// Notice different behavier
#include<iostream>
using namespace std;

int main(){
    int scores[] {100, 99, 98};

    cout << "value of scores: " << scores << endl;

    int *score_ptr {scores};
    cout << "value of score_ptr: " << score_ptr << endl;

    cout << "\nArray subscript notation--------------------------------------" << endl;
    cout << scores[0] << endl;
    cout << scores[1] << endl;
    cout << scores[2] << endl;

    cout << "\nPointer subscript notation------------------------------------" << endl;
    cout << score_ptr[0] << endl;       // Work as an array print the value of the array whom it is pointing.
    cout << score_ptr[1] << endl;
    cout << score_ptr[2] << endl;

    cout << "\nPointer offset notation---------------------------------------" << endl;
    cout << *score_ptr << endl;
    cout << *(score_ptr + 1) << endl;
    cout << *(score_ptr + 2) << endl;

    cout << "\nArray offset notation-----------------------------------------" << endl;
    cout << *scores << endl;                // print values
    cout << *(scores + 1) << endl;
    cout << *(scores + 2) << endl;
    return 0;
}