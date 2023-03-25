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

//Better Way 
Player::Player()
    : Player{"none",0,0}{               //New Representation        //Bottom up approach
        cout << "one arg. constructor is called" << endl;
    }

Player::Player(string name_val, int health_val, int xp_val)
    : name{name_val}, health{health_val}, xp{xp_val}{
        cout << "3 arg. constructor is called" << endl;
    }

int main(){
    Player sidhu;
    Player hero{"sidhu", 100, 20};
    
    return 0;
}


//Chutiyap hai