#include<iostream>
using namespace std;

int main(){
    cout << "Hello, Wellcome to Sid's Carpet Cleaning Service\n"<< endl;

    cout << "How many small rooms would you like cleaned? ";
    int sn;
    cin >> sn;

    cout << "How many large rooms would you like cleaned? ";
    int ln;
    cin >> ln;

    cout << "Estimate for carpet cleaning service" << endl;
    cout << "Number of small rooms: "<<sn << endl;
    cout << "Number of large rooms: "<<ln << endl;
    cout << "Price per small room: $25"<<endl;
    cout << "Price per small room: $35"<<endl;
    cout << "Cost: $"<< 25*sn + 35*ln <<endl;
    cout << "Tax: $"<<(25*sn +35*ln)*0.06 << endl;
    cout << "=============================================="<<endl;
    cout << "Total estimate: $"<< 25*sn + 35*ln + (25*sn +35*ln)*0.06 << endl;
    return 0;
}   
