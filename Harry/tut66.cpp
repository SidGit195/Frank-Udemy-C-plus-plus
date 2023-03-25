#include<iostream>
using namespace std;

// template with default parameters.

template <class T1=int, class T2=char>
class sidhu{
public:
    T1 a;
    T2 b;

    sidhu(T1 x, T2 y){
        a = x;
        b = y;
    }
    void display(){
        cout << a << endl << b ;
    }
};

int main(){
    sidhu<> obj(2.3, 3);
    obj.display();
    cout << endl;
    sidhu <float,int> p(2.3, 3);
    p.display();
    return 0;
}