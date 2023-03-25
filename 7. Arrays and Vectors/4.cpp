//Arays
#include<iostream>
using namespace std;

int main(){
    char vowels[] {'a','e','i','o','u'};
    cout << "\nThe First vowel is: "<< vowels[0]<< endl;
    cout << "The last vowel is: "<< vowels[4]<< endl;

    double hi_temp[] {90.7, 78.89, 45.57, 90.35, 85.34};
    cout << "\nThe First high temperature is: " << hi_temp[0] <<endl;
    hi_temp[0] = 101.101;   // can not use {101.101} because we now assigning the value, not storing.
    cout <<  "Now, The First high temperature is: " << hi_temp[0] <<endl;

    int test_score[5] {100, 90, 80, 70, 60};
    cout << "\nFirst Score at index0: "<< test_score[0] <<endl;
    cout << "Second Score at index1: "<< test_score[1] <<endl;
    cout << "Third Score at index2: "<< test_score[2] <<endl;
    cout << "Fourth Score at index3: "<< test_score[3] <<endl;
    cout << "Fifth Score at index4: "<< test_score[4] <<endl;

    cout << "\nEnter 5 test scores:" << endl;
    cin >>  test_score[0];
    cin >>  test_score[1];
    cin >>  test_score[2];
    cin >>  test_score[3];
    cin >>  test_score[4];

    cout << "\nThe updated array is: "<< endl;
    cout << "First Score at index0: "<< test_score[0] <<endl;
    cout << "Second Score at index1: "<< test_score[1] <<endl;
    cout << "Third Score at index2: "<< test_score[2] <<endl;
    cout << "Fourth Score at index3: "<< test_score[3] <<endl;
    cout << "Fifth Score at index4: "<< test_score[4] <<endl;

    cout << "\nNotice what the value of the array name is: " << test_score << endl;
    return 0;
} 