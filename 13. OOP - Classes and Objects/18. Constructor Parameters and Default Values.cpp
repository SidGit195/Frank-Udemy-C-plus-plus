#include<iostream>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
//Constructor with default arguments
    Player(string name_val = "none", int health_val=0, int xp_val=0);
};

//Better Way 
Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "3 arg. constructor is called" << endl;
    }

int main(){
    Player sidhu;
    Player hero{"sidhu", 100, 20};
    
    return 0;
}

//Note that constructor with default arguments can perform several jobs.