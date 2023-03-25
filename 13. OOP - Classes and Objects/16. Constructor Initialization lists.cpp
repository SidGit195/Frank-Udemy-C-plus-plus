#include<iostream>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
//Overloaded Constructors
    Player();
    Player(string name_val);
    Player(string name_val, int health_val, int xp_val);
};

// Player::Player(){
//     name = "none";
//     health = 0;
//     xp = 0;
// }

//Better Way 
Player::Player()
    : name{"none"}, health{0}, xp{0}{
    }

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
    }

int main(){
    Player sidhu;
    Player hero{"sidhu", 100, 20};
    
    return 0;
}