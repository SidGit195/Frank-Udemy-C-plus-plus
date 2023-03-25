#include<iostream>
#include<string>
using namespace std;

class Player{
private:
    string name;
    int health;
    int xp;

public:
    // string get_name(){
    //     return name;
    // }
//Above problem is sorted out in this manner
    string get_name() const{
    return name;
    }

    void set_name(string nam){
        name = nam;
    }
//Overloaded Constructors
    Player();
    Player(string nam_val);
    Player(string nam_val, int health_val, int xp_val);
};

Player::Player()
    : Player{"none", 0, 0}{
    }

Player::Player(string nam_val)
    : Player{nam_val, 0, 0}{
    }

Player::Player(string nam_val, int health_val, int xp_val)
    : name{nam_val}, health{health}, xp{xp_val}{
    }

void display_player_name(const Player &p){
    cout << p.get_name() << endl;
}

int main(){
    const Player villian {"villian", 100, 50};
    Player hero {"hero", 100, 50};

    // villian.set_name("super villian");       //Error 
    cout << villian.get_name() << endl;      //Error          //-------??       //when const is not use in defination of get_name()
    cout << hero.get_name() << endl;

    display_player_name(villian);
    display_player_name(hero);


    return 0;
}
