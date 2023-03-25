//Class member access modifiers
//public    : Accessible everywhere
//private   : accessible only by members or friends of the class
//protected : used with inheritance

// By default private is the access modifier of the class

#include<iostream>
using namespace std;

class Player{
    private:
    string name {"Player"};
    int health;
    int xp;

    public:
    void talk(string text_to_say){cout << name << " says " << text_to_say << endl;}
    bool is_dead();
};

int main(){
    Player sidhu;
    // sidhu.name = "sidhu";
    // cout << sidhu.health << endl;
    sidhu.talk("Hello there");
    return 0;
}