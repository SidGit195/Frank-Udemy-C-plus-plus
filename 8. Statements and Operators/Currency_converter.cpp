// usd -> inr
#include<iostream>
using namespace std;

int main(){
    float usd{0}, inr{0};
    cout << "Enter USD amount to convert in INR" << endl;
    cout << "USD = ";
    cin >> usd;

    inr = usd * 79.93;
    cout << "INR = " << inr << endl; 

    return 0;
}