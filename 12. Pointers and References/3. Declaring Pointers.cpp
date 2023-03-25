//****(must) Always initailize pointers otherwise it contains garbage value or points anywhere
// * = asterisk
#include<iostream>
using namespace std;

int main(){
    int *ptr;
    cout << ptr << endl;
    int *p {};
    cout << p << endl;
    int *pt {nullptr};
    cout << pt << endl;
    return 0;
}
// 0x61fefc