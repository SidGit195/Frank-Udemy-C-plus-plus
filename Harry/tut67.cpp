#include<iostream>
using namespace std;

// float funcAvg(int a, int b){
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAvg(int a, float b){
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2>
float funcAvg(T1 a, T2 b){
    T avg = (a+b)/2.0;
    return avg;
}

int main(){
    float a;
    a = funcAvg(3,4);
    cout << a ;
    return 0;
}