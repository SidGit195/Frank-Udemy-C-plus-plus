//C++ 11
#include<iostream>
#include<vector>
#include<iomanip>   //New library
using namespace std;

int main(){
    // int scores[] {1,2,3,4,5};
    //
    // for(auto t: scores)
    //     cout << t << endl;
    //
    // for(auto c: "frank")
    //     cout << c << endl;

    // vector<double> temp {12.87, 23.4, 98.3, 98.122};
    // double total {};
    // double avg_temp {};
    //
    // for(auto t: temp)
    //     total += t;
    //
    // cout << fixed << setprecision(1);       //New Concept
    // cout << total << endl;
    //
    // if(temp.size() != 0)
    //     avg_temp = total/temp.size();
    //
    // cout << avg_temp << endl;

    // for(auto val: {1,2,3,4,5})
    //     cout << val << endl;

    // for(auto c: "Hy!, This is sidddharth")
    //     cout << c;

    for(auto c: "Hy!, This is sidddharth")
        if(c == ' ')
            cout << "\t";
        else
            cout << c;

    return 0;
}