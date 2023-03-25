//Mixed type Expressions
/* 
Ask the user to enter 3 integer
Calculate the sum of all the integers then
calculate the average of the integers

Display the 3 integer entered
sum of 3 integers
average of 3 integers
*/
#include<iostream>
using namespace std;

int main(){
    int i1, i2, i3, sum;
    float average;

    cout << "Enter 3 integers" << endl;
    cin >> i1 >> i2 >> i3;

    sum = i1+i2+i3;
    average = static_cast<float>(sum)/3; 
    // average = (float)sum/3;     // OLD C-Style

    cout << "Entered Integers: " << i1 << ", " << i2 << ", " << i3 << endl;
    cout << "Sum of integers: " << sum << endl;
    cout << "Average of integers: " << average << endl;
    return 0;
}
