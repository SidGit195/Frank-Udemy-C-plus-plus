/*
Be Carefull
--> =  means assignment
--> == means equility
*/

#include<iostream>
using namespace std;

int main(){
    bool equal_result {false};
    bool unequal_result {false};
    int num1{}, num2{};
    
    cout << boolalpha;      //Will display true/false instead of 0/1 for booleans
    
    cout << "Enter two integer: " << endl;
    cin >> num1 >> num2;

    equal_result = (num1 == num2);
    unequal_result = (num1 != num2);

    cout << "Comparision result (equals): " << equal_result << endl;
    cout << "Comparision result (not equals): " << unequal_result << endl;
    return 0;
}