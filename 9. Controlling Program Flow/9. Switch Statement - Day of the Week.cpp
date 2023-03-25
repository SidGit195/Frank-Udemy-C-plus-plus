#include<iostream>
using namespace std;

enum color{
    red, green, yellow
};

int main(){
    color screen_color {green};

    switch (screen_color)
    {
    case red:
        cout << "red";
        break;
    case yellow:
        cout << "yellow";
        break;
    case green:
        cout << "green";
        break;
    default:
        cout << "color not available";
        break;
    }
    return 0;
}